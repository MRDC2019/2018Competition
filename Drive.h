#ifndef DRIVE_H_
#define DRIVE_H_

#include <Servo.h>
#include "Arduino.h"
#include "ControllerData.h"
#include "Constants.h"
#include <SPI.h>

class Drive
{
  public:
    Drive(int _flD, int _frD, int _blD, int _brD);
    void startUp();
    void periodic(ControllerData ctrl);
    
    // Positive Modulus (n%i)
    static double PMod(double n, double i) { return n-i*floor(n/i); }
    // converts from [-1.0, 1.0] to [0,180] for servo write
    static int SOut(double out) { return int((out+1.0)*90.0); }
    // reverses from [180,0] to [0,180] for servo write
    static int Rev(int out) { return 180-out; }

  private:
//    void fieldCentricControl(double transX, double transY, double rot);
      void robotCentricControl(double transX, double transY, double rot);
//
//    double getGyroAngle();
//    
    Servo frontLeftMotor;
    Servo frontRightMotor;
    Servo backLeftMotor;
    Servo backRightMotor;
    int frD;
    int flD;
    int brD;
    int blD;
        
};


#endif

