#ifndef ROBOT_H_
#define ROBOT_H_

#include "Arduino.h"
#include "Drive.h"
//#include "FoamBalls.h"
//#include "GolfBalls.h"
//#include "Sorter.h"
//#include "SwingDoor.h"
#include "ControllerData.h"
#include "Constants.h"

class Robot
{
  public:
    Robot(int _flD, int _frD, int _blD, int _brD
          );
    void startUp();
    void periodic();

    void control(ControllerData _data);

  private:
    ControllerData ctrl;
    Drive drive;
//    FoamBalls foamBalls;
//    GolfBalls golfBalls;
//    Sorter sorter;
//    SwingDoor swingDoor;
};


#endif

