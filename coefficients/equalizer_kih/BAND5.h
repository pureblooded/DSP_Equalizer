/*
 * Filter Coefficients (C Source) generated by the Filter Design and Analysis Tool
 * Generated by MATLAB(R) 9.9 and Signal Processing Toolbox 8.5.
 * Generated on: 22-May-2023 21:19:24
 */

/*
 * Discrete-Time FIR Filter (real)
 * -------------------------------
 * Filter Structure  : Direct-Form FIR
 * Filter Length     : 701
 * Stable            : Yes
 * Linear Phase      : Yes (Type 1)
 */

/* General type conversion for MATLAB generated C-code  */
#include "tmwtypes.h"
/* 
 * Expected path to tmwtypes.h 
 * C:\Program Files\Polyspace\R2020b\extern\include\tmwtypes.h 
 */
const int BL = 701;
const real64_T B[701] = {
  -4.203639611996e-08,-1.500266088546e-07,-1.681277000401e-07,-6.742272920051e-08,
  5.593303818577e-08,6.468158901286e-08,-1.299395389409e-07,-4.906916873905e-07,
  -8.431581664058e-07,-9.525397388797e-07,-6.571830633879e-07,1.487555144166e-08,
  8.228705402037e-07,1.414776519051e-06, 1.51142152169e-06,1.073031375383e-06,
  3.434779125777e-07,-2.719145510309e-07,-4.417213062844e-07,-1.251824358688e-07,
  3.686889621198e-07,5.398436300171e-07,5.776944070906e-09,-1.21241847038e-06,
  -2.61081312376e-06,-3.41335212433e-06,-2.988372185602e-06,-1.247796986689e-06,
  1.215105461813e-06,3.367783319514e-06,4.264152620127e-06,3.574670640253e-06,
  1.805415439877e-06,4.236124129823e-08,-6.737611665985e-07,1.026680638129e-19,
  1.426588829564e-06,2.294044192731e-06, 1.39033765326e-06,-1.572173295149e-06,
  -5.585089259553e-06,-8.713793131168e-06,-9.083188313759e-06,-5.967078533686e-06,
  -3.467035448362e-07,5.450628928674e-06,8.916522901737e-06,8.724651878912e-06,
  5.509357341394e-06,1.550180038417e-06,-5.416481101392e-07,5.688005634166e-07,
  3.985727256879e-06,6.927939795759e-06,6.298747000817e-06,6.561179298078e-07,
  -8.570642449672e-06,-1.744155718437e-05,-2.14107642451e-05,-1.78187825136e-05,
  -7.57082289751e-06,5.055464652266e-06,1.452600810981e-05,1.701721812732e-05,
  1.257028794333e-05,5.112988023411e-06,1.849648935724e-07,1.554329078796e-06,
  8.673484123576e-06,1.658641837391e-05,1.857225251943e-05,1.019446584739e-05,
  -7.541644681747e-06,-2.79070277306e-05,-4.150626886306e-05,-4.120867817115e-05,
  -2.625584270627e-05,-3.101631311749e-06,1.774786165252e-05, 2.73484132841e-05,
  2.329279965704e-05,1.110856546861e-05,1.037496601615e-06,1.810421312189e-06,
  1.493221572065e-05,3.295701275873e-05,4.313256545037e-05,3.470696989727e-05,
  5.868051831259e-06,-3.384193137533e-05,-6.747884688437e-05,-7.927618686935e-05,
  -6.327097822011e-05,-2.702281352829e-05,1.203108913837e-05,3.593247761702e-05,
   3.61901572855e-05,1.863191927267e-05,-1.146608352629e-19,-2.171727291531e-06,
  1.920975692074e-05,5.510943782285e-05,8.407157813059e-05,8.389184433027e-05,
  4.500264031599e-05,-2.217816381097e-05,-9.074427693189e-05,-0.0001304855130674,
  -0.0001238908406003,-7.600367419963e-05,-1.214598571395e-05,3.581753075186e-05,
   4.73261693359e-05,2.492956787104e-05,-7.141821895316e-06,-1.749115000663e-05,
  1.270914166744e-05,7.620677606855e-05, 0.000140919306707,0.0001663610882995,
  0.0001267582680971,2.782964438952e-05,-9.301500643963e-05,-0.000184377896644,
  -0.0002075278663392,-0.0001573469621671,-6.535772425324e-05,1.771030324256e-05,
  5.066716598237e-05,2.575255378507e-05,-2.649651139411e-05,-5.518644563528e-05,
  -2.042072261653e-05,7.977824286231e-05,0.0002033259164166,0.0002838986197185,
  0.0002670269620333,0.0001426155414822,-4.51750365297e-05,-0.0002178486576411,
  -0.0003027123015407,-0.000271494984227,-0.0001554577764745,-2.745228368948e-05,
  4.000747651471e-05,1.729859350314e-05,-6.394627771148e-05,-0.0001285646850724,
  -0.0001030524218537,3.701359697574e-05,0.0002453319825646,0.0004236198305674,
  0.0004726554793064,0.0003482379965267,9.017530026932e-05,-0.000193881823807,
  -0.0003829916862336,-0.000406746805684,-0.000282580748469,-0.0001044041723481,
  1.251180324345e-05,-3.393800278713e-18,-0.0001206516294984,-0.000248491460121,
  -0.0002616368423699,-9.29082610235e-05,0.0002213431635839,0.0005497641145988,
  0.0007308069251775,0.0006600381747958, 0.000351279798026,-6.464656551587e-05,
  -0.0004058637780494,-0.0005354776344624,-0.0004344287077465,-0.0002090227598293,
  -2.691618517833e-05,-1.638524194557e-05,-0.0001863915440123,-0.0004153016683403,
  -0.0005182288629509,-0.0003574857654875,6.642078760516e-05,0.0005978895403036,
  0.0009980378798969, 0.001069349865011, 0.000764987274855,0.0002200038356886,
  -0.0003165509814013,-0.0006139777930722,-0.0005839101029002,-0.0003252304605218,
  -6.209354336366e-05,-7.874136055135e-06,-0.0002320093985248,-0.000608139376645,
  -0.0008779835513198,-0.0007994656905692,-0.0002968856890309,0.0004745347102028,
   0.001192408265695, 0.001530135448814, 0.001331575783156,0.0006992181219399,
  -5.721887261471e-05,-0.0005873715121566,-0.0006910529166241,-0.0004254166494338,
  -6.498633625209e-05,6.626652030886e-05,-0.0002031600183369,-0.0007737579956845,
  -0.001313633432986,-0.001439866696333,-0.0009444045126091,6.448279081449e-05,
   0.001191835915118, 0.001949230228571, 0.002010060913293, 0.001385551493003,
  0.0004196658484839,-0.0003995408559982,-0.0007100921275364, -0.00047591091561,
  2.118077405122e-18,0.0002615283360385,-1.775295324079e-05,-0.0008174186465536,
  -0.001749665005633,-0.002257872311931,-0.001930481510582,-0.0007545862434049,
  0.0008401230297548,  0.00218313785023, 0.002707897180453, 0.002251142745005,
   0.001137215970779,-5.900042940378e-06,-0.0006009144255424,-0.0004477466062502,
  0.0001660363542815,0.0006405862714811,  0.00043165476862,-0.0005975970059258,
  -0.002048734580096,-0.003171104879728,-0.003266518968309,-0.002093907097661,
  -4.178523069244e-05, 0.002041259532881, 0.003277501867015, 0.003219997281096,
   0.002084199283246,0.0006152043003209,-0.0003421715498511,-0.0003314657037185,
   0.000448849942669, 0.001261207380973, 0.001272397742514,7.755801039688e-05,
  -0.001999611600027,-0.004018540517385,-0.004903864095404,-0.004040667632502,
   -0.00164851047737, 0.001288844261566, 0.003517479062291, 0.004169061211127,
   0.003215016244735,  0.00145840063529,5.791412932737e-05,-0.0001541790732816,
  0.0008281827139856, 0.002163750176784, 0.002651633065605, 0.001463756937337,
  -0.001295774374736,-0.004541642528187,-0.006727213298181,-0.006667124701444,
   -0.00420978184646,  -0.0003716070741, 0.003165769990797, 0.004936456029683,
   0.004466175372485, 0.002502765242119,0.0005570854345824,2.183898518494e-18,
   0.001224943587217, 0.003366908858389, 0.004766490977065, 0.003943543266011,
  0.0005375613346349,-0.004336888951277,-0.008562852068441, -0.01010151825692,
  -0.008100648191962,  -0.0034058047614, 0.001840822869627, 0.005325263978916,
   0.005802739922926, 0.003756838939543, 0.001083533465491,-5.013266998779e-05,
   0.001458778779676, 0.004892525759735, 0.008010125712941, 0.008287838821397,
   0.004437893915264,-0.002660973069928,  -0.0102023961656, -0.01480663433707,
   -0.01429501932666,-0.008908512782263,-0.001254123797312, 0.005054484091241,
   0.007356046889485, 0.005415793605531, 0.001549331852642,-0.0007420892230278,
   0.001086231342999, 0.006908591163185,  0.01368372941592,  0.01694444997896,
     0.0133055418853, 0.002628135255007, -0.01143821842889, -0.02299657265415,
   -0.02684331341896, -0.02127633744182,-0.009186198179938,  0.00331815228475,
    0.01017125835899, 0.008809152906936, 0.001869875038253,-0.004008961938798,
  -0.001917327786086,  0.01091607904666,  0.03046271860615,  0.04673728501391,
    0.04819442700011,  0.02781580895225, -0.01210286507913, -0.05913622535718,
   -0.09483179278939,  -0.1023137461859, -0.07411181486048, -0.01654596207658,
    0.05164525080585,   0.1062027202127,   0.1269844303978,   0.1062027202127,
    0.05164525080585, -0.01654596207658, -0.07411181486048,  -0.1023137461859,
   -0.09483179278939, -0.05913622535718, -0.01210286507913,  0.02781580895225,
    0.04819442700011,  0.04673728501391,  0.03046271860615,  0.01091607904666,
  -0.001917327786086,-0.004008961938798, 0.001869875038253, 0.008809152906936,
    0.01017125835899,  0.00331815228475,-0.009186198179938, -0.02127633744182,
   -0.02684331341896, -0.02299657265415, -0.01143821842889, 0.002628135255007,
     0.0133055418853,  0.01694444997896,  0.01368372941592, 0.006908591163185,
   0.001086231342999,-0.0007420892230278, 0.001549331852642, 0.005415793605531,
   0.007356046889485, 0.005054484091241,-0.001254123797312,-0.008908512782263,
   -0.01429501932666, -0.01480663433707,  -0.0102023961656,-0.002660973069928,
   0.004437893915264, 0.008287838821397, 0.008010125712941, 0.004892525759735,
   0.001458778779676,-5.013266998779e-05, 0.001083533465491, 0.003756838939543,
   0.005802739922926, 0.005325263978916, 0.001840822869627,  -0.0034058047614,
  -0.008100648191962, -0.01010151825692,-0.008562852068441,-0.004336888951277,
  0.0005375613346349, 0.003943543266011, 0.004766490977065, 0.003366908858389,
   0.001224943587217,2.183898518494e-18,0.0005570854345824, 0.002502765242119,
   0.004466175372485, 0.004936456029683, 0.003165769990797,  -0.0003716070741,
   -0.00420978184646,-0.006667124701444,-0.006727213298181,-0.004541642528187,
  -0.001295774374736, 0.001463756937337, 0.002651633065605, 0.002163750176784,
  0.0008281827139856,-0.0001541790732816,5.791412932737e-05,  0.00145840063529,
   0.003215016244735, 0.004169061211127, 0.003517479062291, 0.001288844261566,
   -0.00164851047737,-0.004040667632502,-0.004903864095404,-0.004018540517385,
  -0.001999611600027,7.755801039688e-05, 0.001272397742514, 0.001261207380973,
   0.000448849942669,-0.0003314657037185,-0.0003421715498511,0.0006152043003209,
   0.002084199283246, 0.003219997281096, 0.003277501867015, 0.002041259532881,
  -4.178523069244e-05,-0.002093907097661,-0.003266518968309,-0.003171104879728,
  -0.002048734580096,-0.0005975970059258,  0.00043165476862,0.0006405862714811,
  0.0001660363542815,-0.0004477466062502,-0.0006009144255424,-5.900042940378e-06,
   0.001137215970779, 0.002251142745005, 0.002707897180453,  0.00218313785023,
  0.0008401230297548,-0.0007545862434049,-0.001930481510582,-0.002257872311931,
  -0.001749665005633,-0.0008174186465536,-1.775295324079e-05,0.0002615283360385,
  2.118077405122e-18, -0.00047591091561,-0.0007100921275364,-0.0003995408559982,
  0.0004196658484839, 0.001385551493003, 0.002010060913293, 0.001949230228571,
   0.001191835915118,6.448279081449e-05,-0.0009444045126091,-0.001439866696333,
  -0.001313633432986,-0.0007737579956845,-0.0002031600183369,6.626652030886e-05,
  -6.498633625209e-05,-0.0004254166494338,-0.0006910529166241,-0.0005873715121566,
  -5.721887261471e-05,0.0006992181219399, 0.001331575783156, 0.001530135448814,
   0.001192408265695,0.0004745347102028,-0.0002968856890309,-0.0007994656905692,
  -0.0008779835513198,-0.000608139376645,-0.0002320093985248,-7.874136055135e-06,
  -6.209354336366e-05,-0.0003252304605218,-0.0005839101029002,-0.0006139777930722,
  -0.0003165509814013,0.0002200038356886, 0.000764987274855, 0.001069349865011,
  0.0009980378798969,0.0005978895403036,6.642078760516e-05,-0.0003574857654875,
  -0.0005182288629509,-0.0004153016683403,-0.0001863915440123,-1.638524194557e-05,
  -2.691618517833e-05,-0.0002090227598293,-0.0004344287077465,-0.0005354776344624,
  -0.0004058637780494,-6.464656551587e-05, 0.000351279798026,0.0006600381747958,
  0.0007308069251775,0.0005497641145988,0.0002213431635839,-9.29082610235e-05,
  -0.0002616368423699,-0.000248491460121,-0.0001206516294984,-3.393800278713e-18,
  1.251180324345e-05,-0.0001044041723481,-0.000282580748469,-0.000406746805684,
  -0.0003829916862336,-0.000193881823807,9.017530026932e-05,0.0003482379965267,
  0.0004726554793064,0.0004236198305674,0.0002453319825646,3.701359697574e-05,
  -0.0001030524218537,-0.0001285646850724,-6.394627771148e-05,1.729859350314e-05,
  4.000747651471e-05,-2.745228368948e-05,-0.0001554577764745,-0.000271494984227,
  -0.0003027123015407,-0.0002178486576411,-4.51750365297e-05,0.0001426155414822,
  0.0002670269620333,0.0002838986197185,0.0002033259164166,7.977824286231e-05,
  -2.042072261653e-05,-5.518644563528e-05,-2.649651139411e-05,2.575255378507e-05,
  5.066716598237e-05,1.771030324256e-05,-6.535772425324e-05,-0.0001573469621671,
  -0.0002075278663392,-0.000184377896644,-9.301500643963e-05,2.782964438952e-05,
  0.0001267582680971,0.0001663610882995, 0.000140919306707,7.620677606855e-05,
  1.270914166744e-05,-1.749115000663e-05,-7.141821895316e-06,2.492956787104e-05,
   4.73261693359e-05,3.581753075186e-05,-1.214598571395e-05,-7.600367419963e-05,
  -0.0001238908406003,-0.0001304855130674,-9.074427693189e-05,-2.217816381097e-05,
  4.500264031599e-05,8.389184433027e-05,8.407157813059e-05,5.510943782285e-05,
  1.920975692074e-05,-2.171727291531e-06,-1.146608352629e-19,1.863191927267e-05,
   3.61901572855e-05,3.593247761702e-05,1.203108913837e-05,-2.702281352829e-05,
  -6.327097822011e-05,-7.927618686935e-05,-6.747884688437e-05,-3.384193137533e-05,
  5.868051831259e-06,3.470696989727e-05,4.313256545037e-05,3.295701275873e-05,
  1.493221572065e-05,1.810421312189e-06,1.037496601615e-06,1.110856546861e-05,
  2.329279965704e-05, 2.73484132841e-05,1.774786165252e-05,-3.101631311749e-06,
  -2.625584270627e-05,-4.120867817115e-05,-4.150626886306e-05,-2.79070277306e-05,
  -7.541644681747e-06,1.019446584739e-05,1.857225251943e-05,1.658641837391e-05,
  8.673484123576e-06,1.554329078796e-06,1.849648935724e-07,5.112988023411e-06,
  1.257028794333e-05,1.701721812732e-05,1.452600810981e-05,5.055464652266e-06,
  -7.57082289751e-06,-1.78187825136e-05,-2.14107642451e-05,-1.744155718437e-05,
  -8.570642449672e-06,6.561179298078e-07,6.298747000817e-06,6.927939795759e-06,
  3.985727256879e-06,5.688005634166e-07,-5.416481101392e-07,1.550180038417e-06,
  5.509357341394e-06,8.724651878912e-06,8.916522901737e-06,5.450628928674e-06,
  -3.467035448362e-07,-5.967078533686e-06,-9.083188313759e-06,-8.713793131168e-06,
  -5.585089259553e-06,-1.572173295149e-06, 1.39033765326e-06,2.294044192731e-06,
  1.426588829564e-06,1.026680638129e-19,-6.737611665985e-07,4.236124129823e-08,
  1.805415439877e-06,3.574670640253e-06,4.264152620127e-06,3.367783319514e-06,
  1.215105461813e-06,-1.247796986689e-06,-2.988372185602e-06,-3.41335212433e-06,
  -2.61081312376e-06,-1.21241847038e-06,5.776944070906e-09,5.398436300171e-07,
  3.686889621198e-07,-1.251824358688e-07,-4.417213062844e-07,-2.719145510309e-07,
  3.434779125777e-07,1.073031375383e-06, 1.51142152169e-06,1.414776519051e-06,
  8.228705402037e-07,1.487555144166e-08,-6.571830633879e-07,-9.525397388797e-07,
  -8.431581664058e-07,-4.906916873905e-07,-1.299395389409e-07,6.468158901286e-08,
  5.593303818577e-08,-6.742272920051e-08,-1.681277000401e-07,-1.500266088546e-07,
  -4.203639611996e-08
};