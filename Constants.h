// Communication Info
#define BAUD_RATE               9600

// Pin numbers
#define FRONT_LEFT_MOTOR_PIN          2
#define FRONT_RIGHT_MOTOR_PIN         4
#define BACK_RIGHT_MOTOR_PIN          5
#define BACK_LEFT_MOTOR_PIN           3

                    
#define RELEASER_ARM_PIN        6
#define FOAM_BALL_ARM_PIN       5
#define FOAM_BALL_SERVO_PIN     8

#define DISPENSER_MOTOR_PIN     11
#define GOLF_BALL_SERVO_PIN     13
#define SORTER_SERVO_PIN        7
#define SWING_DOOR_PIN          14

// Default drive mode
#define DRIVE_MODE              Drive::robotCentric

// Controls
#define CTRL_TRANS_X            DS_TO_DB(ctrl.driver1.LSX)
#define CTRL_TRANS_Y            DS_TO_DB(ctrl.driver1.LSY)
#define CTRL_ROT                DS_TO_DB(ctrl.driver1.RSX)
#define CTRL_SHIFT              (ctrl.driver1.RTG > 20)

#define CTRL_GYRO_RESET         (ctrl.driver1.a)
#define CTRL_GYRO_ROT_CCW       (ctrl.driver1.leftBumper)
#define CTRL_GYRO_ROT_CW        (ctrl.driver1.rightBumper)

#define CTRL_RELEASE_ARM        (ctrl.driver2.rightBumper)
#define CTRL_FOAM_BALL_ARM      (ctrl.driver2.leftBumper)
#define CTRL_FOAM_BALL_SCORE    (ctrl.driver2.back)

#define CTRL_ROBOT_RED          (ctrl.driver2.dRight)
#define CTRL_ROBOT_GREEN        (ctrl.driver2.dDown)
#define CTRL_ROBOT_WHITE        (ctrl.driver2.dLeft)
#define CTRL_ROBOT_YELLOW       (ctrl.driver2.dUp)

#define CTRL_DISPENSER_MOTOR    (ctrl.driver2.x)
#define CTRL_GOLF_BALL_SCORE    (ctrl.driver2.start)

#define CTRL_SWING_DOOR_UP      (ctrl.driver2.y)
#define CTRL_SWING_DOOR_DOWN    (ctrl.driver2.b)

// Servo Posistions
#define SORTER_NEUTRAL_POSN     60
#define SORTER_ACCEPT_POSN      30
#define SORTER_REJECT_POSN      130

#define GOLF_SCORE_POSN         180
#define GOLF_HOLD_POSN          0

#define FOAM_SCORE_POSN         180
#define FOAM_HOLD_POSN          0

#define DISPENSE_SPEED          160

#define SWING_DOOR_UP_SPEED     100
#define SWING_DOOR_DOWN_SPEED   80

// Times
#define GOLF_HOLD_TIME          5000
#define FOAM_HOLD_TIME          4000
#define SORTER_ACCEPT_TIME      2000
#define SORTER_REJECT_TIME      2000

// Control macros
// Convert driver station data to [-1.0, 1.0]
#define DS_TO_DB(X)             ((X/100.0) - 1.0)



