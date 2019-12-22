/*vex-vision-config:begin*/
#include "v5.h"
#include "v5_vcs.h"
vex::vision::signature ORANGE_CUBE = vex::vision::signature (1, 8047, 10063, 9055, -2391, -1803, -2097, 2.5, 1);
vex::vision::signature GREEN_CUBE = vex::vision::signature (2, -9581, -7117, -8349, -5251, -3217, -4234, 2.5, 1);
vex::vision::signature YOUR_MAMA_CUBE = vex::vision::signature (3, 77, 1137, 607, 6855, 10231, 8543, 2.5, 1);
vex::vision::signature SIG_4 = vex::vision::signature (4, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_5 = vex::vision::signature (5, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_6 = vex::vision::signature (6, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::signature SIG_7 = vex::vision::signature (7, 0, 0, 0, 0, 0, 0, 2.5, 0);
vex::vision::code CUBES = vex::vision::code (GREEN_CUBE, ORANGE_CUBE, YOUR_MAMA_CUBE );
vex::vision visionSensor = vex::vision (vex::PORT8);
/*vex-vision-config:end*/