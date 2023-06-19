/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 22-May-2023 19:58:32
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 501
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int BL = 501;
const real64_T B[501] = {
  1.253404783411e-06, 1.71788535182e-07,-1.177577459776e-08,-1.909403313754e-07,
  -3.223899736357e-07,-3.660469754764e-07,-2.963718748559e-07,-1.127541904923e-07,
  1.537661654898e-07,4.398955802529e-07,6.570901585373e-07,7.061528356987e-07,
  4.976239980287e-07,-2.55391459779e-08,-8.677085383085e-07,-1.967816413131e-06,
  -3.198382108974e-06,-4.378781837426e-06,-5.302464033711e-06,-5.774657776484e-06,
  -5.654196640217e-06, -4.8910773188e-06,-3.550887687794e-06,-1.818625015966e-06,
  2.232534994988e-08,1.635586659192e-06,2.695761150679e-06,2.960253762144e-06,
  2.334858538326e-06,9.181562335998e-07,-9.880212724581e-07,-2.90955046336e-06,
  -4.272268682216e-06,-4.506680487797e-06,-3.168176328741e-06,-5.012369495976e-08,
  4.734568029799e-06,1.072471621338e-05,1.714832074077e-05,2.302775344517e-05,
  2.734051564556e-05,2.921038107471e-05,2.809420894741e-05,2.392608428167e-05,
  1.718422003255e-05,8.857392484528e-06,3.051894440941e-07,-6.972800258673e-06,
  -1.162339835087e-05, -1.2730800477e-05,-1.005393610821e-05,-4.155904024784e-06,
  3.613555657099e-06,1.129662884387e-05,1.665040406113e-05,1.756673047635e-05,
  1.251655494251e-05,9.331725674595e-07,-1.65486758112e-05,-3.806154158267e-05,
  -6.071129917391e-05,-8.10061107247e-05,-9.544829210955e-05,-0.0001011904404842,
  -9.663408449376e-05,-8.184774374447e-05,-5.870415055624e-05,-3.06814318424e-05,
  -2.333582524807e-06, 2.14988582382e-05, 3.66088740593e-05,4.030625992811e-05,
   3.20873509692e-05,1.393902992666e-05,-9.818230420747e-06,-3.316243549824e-05,
  -4.939977465675e-05,-5.24293704256e-05,-3.801917916115e-05,-4.845913276654e-06,
  4.492526143673e-05,0.0001056767610225,0.0001690405526244,0.0002251916759045,
  0.0002645376771908,0.0002795143317862,0.0002661520275106,0.0002250922987536,
  0.0001618125733867, 8.59493869877e-05,9.775007518293e-06,-5.394963203214e-05,
  -9.438388783991e-05,-0.0001048359293855,-8.436682566855e-05,-3.84101106705e-05,
   2.17929750132e-05,8.093054584168e-05,0.0001222908334092,0.0001309292760476,
  9.676416289099e-05,1.700155543261e-05,-0.0001026285942597,-0.0002481561949617,
  -0.0003992406935749,-0.0005323947115633,-0.0006250533917847,-0.0006597813580587,
  -0.000627829852229,-0.0005313219688311,-0.0003835521179745,-0.0002072075058404,
   -3.0701207105e-05,0.0001168203977271,0.0002109404384468,0.0002368989272768,
  0.0001930097972003,9.181154879588e-05,-4.142627918559e-05,-0.0001727419443171,
   -0.00026547581263,-0.0002872176611556,-0.0002164541013027,-4.763387637023e-05,
   0.000206419032092,0.0005153849160481,0.0008356809313019, 0.001117477129757,
   0.001313362408815, 0.001387140542857, 0.001321112596128, 0.001120381094393,
  0.0008131789324859,0.0004469120096103,8.039301217619e-05,-0.0002265081521501,
  -0.0004240081130018,-0.0004822977670027,-0.0003982334824153,-0.000197374035272,
  6.930688937272e-05,0.0003337404214436,0.0005228560572739, 0.000572402707287,
  0.0004400006080001,0.0001149200001167,-0.0003774542327349,-0.0009776379185864,
  -0.001600562769325,-0.002149393429526,-0.002532383874224,-0.002679808287036,
  -0.002557814474293,-0.002176440992982,-0.001589972075339,-0.0008891329652413,
  -0.0001861257758228,0.0004050987876739,0.0007899128425538,0.0009115618120347,
  0.0007635850897525,0.0003934426732892,-0.0001038206942978,-0.0006012447754367,
  -0.0009625474995709,-0.001067805563654,-0.0008375936571657,-0.0002509834712257,
  0.0006463072215468,   0.0017456954121, 0.002891417028753, 0.003905871246192,
   0.004620462194569, 0.004906526321904, 0.004700623675839, 0.004019208362842,
   0.002959396276966, 0.001684951807986,0.0003993103250467,-0.0006900452392833,
  -0.001409701991613,-0.001653987395421,-0.001407706288119,-0.0007531405486974,
  0.0001408310673236, 0.001046435418647, 0.001717297672108, 0.001934531305725,
   0.001550391255543,0.0005212594846294,-0.001076744076678,-0.003053389276163,
  -0.005131358361535, -0.00699088423877,-0.008324774423046,-0.008894284971255,
    -0.0085756321112,-0.007388092395018,-0.005497529183272,-0.003193356520619,
  -0.000841715220424, 0.001177849814546, 0.002541495768553, 0.003043601969562,
   0.002640848778358, 0.001468707034199,-0.0001742850773307,-0.001873460898264,
  -0.003169428506805,-0.003642333219211,-0.002994349535193,-0.001115224283867,
   0.001882142795458, 0.005664455714072, 0.009721071845978,  0.01344215191532,
    0.01622007756312,  0.01755738527268,  0.01716224232807,  0.01501351144728,
    0.01138172121861, 0.006799213005727, 0.001981303567758,-0.002290921802297,
  -0.005308108035163,-0.006567566359805,-0.005881683312566,-0.003438797136548,
  0.0001977119228471, 0.004156763035326,  0.00738700039442, 0.008827355889767,
    0.00759539590168, 0.003163407065868,-0.004507830057954, -0.01490270961959,
   -0.02696775532265,  -0.0392153553929, -0.04990421367694, -0.05727381279987,
   -0.05980052123046, -0.05643794201817, -0.04680466660612, -0.03128887181348,
   -0.01105038990071,  0.01208459853466,  0.03582540266168,  0.05768985518645,
    0.07531216786332,   0.0867433933107,  0.09070260116942,   0.0867433933107,
    0.07531216786332,  0.05768985518645,  0.03582540266168,  0.01208459853466,
   -0.01105038990071, -0.03128887181348, -0.04680466660612, -0.05643794201817,
   -0.05980052123046, -0.05727381279987, -0.04990421367694,  -0.0392153553929,
   -0.02696775532265, -0.01490270961959,-0.004507830057954, 0.003163407065868,
    0.00759539590168, 0.008827355889767,  0.00738700039442, 0.004156763035326,
  0.0001977119228471,-0.003438797136548,-0.005881683312566,-0.006567566359805,
  -0.005308108035163,-0.002290921802297, 0.001981303567758, 0.006799213005727,
    0.01138172121861,  0.01501351144728,  0.01716224232807,  0.01755738527268,
    0.01622007756312,  0.01344215191532, 0.009721071845978, 0.005664455714072,
   0.001882142795458,-0.001115224283867,-0.002994349535193,-0.003642333219211,
  -0.003169428506805,-0.001873460898264,-0.0001742850773307, 0.001468707034199,
   0.002640848778358, 0.003043601969562, 0.002541495768553, 0.001177849814546,
  -0.000841715220424,-0.003193356520619,-0.005497529183272,-0.007388092395018,
    -0.0085756321112,-0.008894284971255,-0.008324774423046, -0.00699088423877,
  -0.005131358361535,-0.003053389276163,-0.001076744076678,0.0005212594846294,
   0.001550391255543, 0.001934531305725, 0.001717297672108, 0.001046435418647,
  0.0001408310673236,-0.0007531405486974,-0.001407706288119,-0.001653987395421,
  -0.001409701991613,-0.0006900452392833,0.0003993103250467, 0.001684951807986,
   0.002959396276966, 0.004019208362842, 0.004700623675839, 0.004906526321904,
   0.004620462194569, 0.003905871246192, 0.002891417028753,   0.0017456954121,
  0.0006463072215468,-0.0002509834712257,-0.0008375936571657,-0.001067805563654,
  -0.0009625474995709,-0.0006012447754367,-0.0001038206942978,0.0003934426732892,
  0.0007635850897525,0.0009115618120347,0.0007899128425538,0.0004050987876739,
  -0.0001861257758228,-0.0008891329652413,-0.001589972075339,-0.002176440992982,
  -0.002557814474293,-0.002679808287036,-0.002532383874224,-0.002149393429526,
  -0.001600562769325,-0.0009776379185864,-0.0003774542327349,0.0001149200001167,
  0.0004400006080001, 0.000572402707287,0.0005228560572739,0.0003337404214436,
  6.930688937272e-05,-0.000197374035272,-0.0003982334824153,-0.0004822977670027,
  -0.0004240081130018,-0.0002265081521501,8.039301217619e-05,0.0004469120096103,
  0.0008131789324859, 0.001120381094393, 0.001321112596128, 0.001387140542857,
   0.001313362408815, 0.001117477129757,0.0008356809313019,0.0005153849160481,
   0.000206419032092,-4.763387637023e-05,-0.0002164541013027,-0.0002872176611556,
   -0.00026547581263,-0.0001727419443171,-4.142627918559e-05,9.181154879588e-05,
  0.0001930097972003,0.0002368989272768,0.0002109404384468,0.0001168203977271,
   -3.0701207105e-05,-0.0002072075058404,-0.0003835521179745,-0.0005313219688311,
  -0.000627829852229,-0.0006597813580587,-0.0006250533917847,-0.0005323947115633,
  -0.0003992406935749,-0.0002481561949617,-0.0001026285942597,1.700155543261e-05,
  9.676416289099e-05,0.0001309292760476,0.0001222908334092,8.093054584168e-05,
   2.17929750132e-05,-3.84101106705e-05,-8.436682566855e-05,-0.0001048359293855,
  -9.438388783991e-05,-5.394963203214e-05,9.775007518293e-06, 8.59493869877e-05,
  0.0001618125733867,0.0002250922987536,0.0002661520275106,0.0002795143317862,
  0.0002645376771908,0.0002251916759045,0.0001690405526244,0.0001056767610225,
  4.492526143673e-05,-4.845913276654e-06,-3.801917916115e-05,-5.24293704256e-05,
  -4.939977465675e-05,-3.316243549824e-05,-9.818230420747e-06,1.393902992666e-05,
   3.20873509692e-05,4.030625992811e-05, 3.66088740593e-05, 2.14988582382e-05,
  -2.333582524807e-06,-3.06814318424e-05,-5.870415055624e-05,-8.184774374447e-05,
  -9.663408449376e-05,-0.0001011904404842,-9.544829210955e-05,-8.10061107247e-05,
  -6.071129917391e-05,-3.806154158267e-05,-1.65486758112e-05,9.331725674595e-07,
  1.251655494251e-05,1.756673047635e-05,1.665040406113e-05,1.129662884387e-05,
  3.613555657099e-06,-4.155904024784e-06,-1.005393610821e-05, -1.2730800477e-05,
  -1.162339835087e-05,-6.972800258673e-06,3.051894440941e-07,8.857392484528e-06,
  1.718422003255e-05,2.392608428167e-05,2.809420894741e-05,2.921038107471e-05,
  2.734051564556e-05,2.302775344517e-05,1.714832074077e-05,1.072471621338e-05,
  4.734568029799e-06,-5.012369495976e-08,-3.168176328741e-06,-4.506680487797e-06,
  -4.272268682216e-06,-2.90955046336e-06,-9.880212724581e-07,9.181562335998e-07,
  2.334858538326e-06,2.960253762144e-06,2.695761150679e-06,1.635586659192e-06,
  2.232534994988e-08,-1.818625015966e-06,-3.550887687794e-06, -4.8910773188e-06,
  -5.654196640217e-06,-5.774657776484e-06,-5.302464033711e-06,-4.378781837426e-06,
  -3.198382108974e-06,-1.967816413131e-06,-8.677085383085e-07,-2.55391459779e-08,
  4.976239980287e-07,7.061528356987e-07,6.570901585373e-07,4.398955802529e-07,
  1.537661654898e-07,-1.127541904923e-07,-2.963718748559e-07,-3.660469754764e-07,
  -3.223899736357e-07,-1.909403313754e-07,-1.177577459776e-08, 1.71788535182e-07,
  1.253404783411e-06
};
