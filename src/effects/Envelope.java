package effects;

import java.util.concurrent.Callable;

import static effects.BufferSamples.SAMPLE_SIZE;

public class Envelope extends Effect implements Callable<short[]> {
    private static final double RATIO_DRY_TO_WET = 0.2;
    public static final int DEFAULT_SIZE_BUFFER = 5;
    private final double ratioDryToWet;
    private final BufferSamples BufferSamples;
    public Envelope() {
        super();
        this.BufferSamples = new BufferSamples(DEFAULT_SIZE_BUFFER);
        this.ratioDryToWet = RATIO_DRY_TO_WET;
    }
    public Envelope(int sizeBufferSamples, double ratioDryToWet) {
        super();
        this.BufferSamples = new BufferSamples(sizeBufferSamples);
        this.ratioDryToWet = ratioDryToWet;
    }

    public void setInputSampleStream(short[] inputAudioStream) {
        this.inputAudioStream = inputAudioStream;
    }

    @Override
    public synchronized short[] createEffect() {
        int indexCurrentSampleDelay = this.BufferSamples.getIndexCurrentElement();
        for (int j = 0; j < SAMPLE_SIZE; j++) {
            this.inputAudioStream[j] = (short) ( ratioDryToWet * (this.inputAudioStream[j])
                    + ((1 - ratioDryToWet) * this.BufferSamples.getAmplitudeSampleDelay(indexCurrentSampleDelay, j)));
        }
        this.BufferSamples.add(this.inputAudioStream);
        return this.inputAudioStream;
    }

    @Override
    public short[] call() throws Exception {
        return createEffect();
    }
}

