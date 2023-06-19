package effects;


import java.util.Random;
import java.util.concurrent.ExecutionException;
import java.util.concurrent.ExecutorService;
import java.util.concurrent.Executors;
import java.util.concurrent.Future;

import static effects.Envelope.DEFAULT_SIZE_BUFFER;

public class Reverb extends Effect {
    ExecutorService pool;
    public static final int DEFAULT_COUNT_DELAYS = 3;
    private final int countDelays;
    private Envelope[] envelopes;

    private void createDelays() {
        Random random = new Random();
        this.envelopes = new Envelope[countDelays];
        for (int i = 0; i < this.countDelays; i++) {
            this.envelopes[i] = new Envelope(random.nextInt(2,  4), 0.85);
        }
    }

    public Reverb(int countDelays) {
        super();
        this.countDelays = countDelays;
        createDelays();
        pool = Executors.newFixedThreadPool(this.countDelays);
    }

    public Reverb() {
        super();
        this.countDelays = DEFAULT_COUNT_DELAYS;
        createDelays();
        pool = Executors.newFixedThreadPool(this.countDelays);
    }

    public void setInputSampleStream(short[] inputAudioStream) {
        this.inputAudioStream = inputAudioStream;
        for (int i = 0; i < this.countDelays; i++) {
            this.envelopes[i].inputAudioStream = inputAudioStream;
        }
    }

    @Override
    public synchronized short[] createEffect() throws InterruptedException, ExecutionException {
        Future<short[]>[] delays = new Future[this.countDelays];
        for (int i = 0; i < this.countDelays; i++) {
            delays[i] = pool.submit(this.envelopes[i]);
        }
        for (int i = 0; i < this.countDelays; i++) {
            for (int j = 0; j < this.inputAudioStream.length; j++) {
                this.inputAudioStream[j] += delays[i].get()[j] / this.countDelays;
            }
        }

        return this.inputAudioStream;
    }
}
