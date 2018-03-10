#include "Robot.h"

Robot::Robot(int _flD, int _frD, int _blD, int _brD
             ):
    drive(_flD, _frD,  _blD,  _brD)
//  foamBalls(_releaseArmPin, _ballArmPin, _scoreFoamServoPin),
//  golfBalls(_dispenserMotorPin, _scoreGolfServoPin)
//    sorter(_sorterServoPin),
//    swingDoor(_swingDoorPin)
{
  
}

void Robot::startUp()
{
  drive.startUp();
  //foamBalls.startUp();
  //golfBalls.startUp();
  //sorter.startUp();
  //swingDoor.startUp();
  
  ctrl.startByte = 255;
  ctrl.stopByte = 254;
  for(int i=1; i<17; i++)
    ctrl.bytes[i] = 0;
  ctrl.driver1.LSX = 100;
  ctrl.driver1.LSY = 100;
  ctrl.driver1.RSX = 100;
  ctrl.driver1.RSY = 100;
  ctrl.driver2.LSX = 100;
  ctrl.driver2.LSY = 100;
  ctrl.driver2.RSX = 100;
  ctrl.driver2.RSY = 100;
}

void Robot::periodic()
{
  drive.periodic(ctrl);
//  foamBalls.periodic(ctrl);
//  golfBalls.periodic(ctrl);
//  sorter.periodic(ctrl);
//  swingDoor.periodic(ctrl);
}

void Robot::control(ControllerData _data)
{
  ctrl = _data;
}

