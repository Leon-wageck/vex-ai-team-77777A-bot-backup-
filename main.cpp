#pragma region VEXcode Generated Robot Configuration
#include "drive.hpp"
#include "buttons.hpp"
#include "auton.hpp"
#include "yaw.hpp"
#include "rampUp.hpp"
#include"loging.hpp"





int main()
{

  INS.calibrate(180);
  
  wait(2000, msec);
 loger();
 
   turnTo(270);
  
  
  
 
  //driveTo(-9,-10);

  Competition.autonomous(autonomous);
  Competition.drivercontrol(drivercontrol);

  Controller1.ButtonR1.pressed(onButtonR1Press);
  Controller1.ButtonR2.pressed(onButtonR2Press);
  Controller1.ButtonL1.pressed(onButtonL1Press);
 
  
return 0;
}
