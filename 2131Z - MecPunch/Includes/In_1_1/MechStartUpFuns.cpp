void PAutonStart(){
    Brain.Screen.render(true,false);
    WhatAuton();
    IntakerMotor.setStopping(vex::brakeType::coast);
}

void UserCoStart(){
    Brain.Screen.render(false,false);
    Brain.Screen.clearScreen();

    DriveRampingEnabled=false;
    FLMotor.setStopping(vex::brakeType::coast);
    BLMotor.setStopping(vex::brakeType::coast);
    FRMotor.setStopping(vex::brakeType::coast);
    BRMotor.setStopping(vex::brakeType::coast);
}