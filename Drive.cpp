#include "Drive.h"

Drive::Drive(int _flD, int _frD, int _blD, int _brD)
{
  frD = _frD;
  flD = _flD;
  brD = _brD;
  blD = _blD;
}

void Drive::startUp()
{
    frontLeftMotor.attach(flD);
    frontRightMotor.attach(frD);
    backLeftMotor.attach(blD);
    backRightMotor.attach(brD);
 
}

void Drive::periodic(ControllerData ctrl)
{  

    robotCentricControl(CTRL_TRANS_X, CTRL_TRANS_Y, CTRL_ROT);

}


void Drive::robotCentricControl(double transX, double transY, double rot){
  /* May need to add steer control like:
  double transMag = (fabs(transX) > fabs(transY))? fabs(transX): fabs(transY);
  rot *= (1-(1-m_tssr)*transMag);
   */
   
  double lSpeed = transY + rot;
  double rSpeed = transY - rot;
  if(lSpeed < -1.0)
    lSpeed = -1.0;
  if(lSpeed > 1.0)
    lSpeed = 1.0;
  if(rSpeed < -1.0)
    rSpeed = -1.0;
  if(rSpeed > 1.0)
    rSpeed = 1.0;

   frontLeftMotor.write(SOut(lSpeed));
   backLeftMotor.write(Rev(SOut(lSpeed)));
   frontRightMotor.write(SOut(rSpeed));
   backRightMotor.write(Rev(SOut(rSpeed)));

}


