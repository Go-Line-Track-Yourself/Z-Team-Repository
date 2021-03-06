//Back Blue
void BackBPark(){
    AutonMove(33,60);
    Wait(200);
    AutonTurn(-13.5,40,40);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(20,70);
    AutonTurn(-21,70,70);
    AutonMove(3,50);
    AutoFlip = false;
    AutonTurn(18,40,40);
    StrafeRecon(160,70,1);
    AutonMove(8,40);
    AutonLock();
    AutonMove(-64,80);
    Wait(3000);
    AutonNLck();
}
void BackBParkShot(){
    AutoIntakeOff = true;
    AutonMove(39,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-4,70);
    AutoIntakeOff = true;
    AutonTurn(-16,50,50);
    AutoFlip = true;
    AutonMove(5,80);
    AutonTurn(-16,70,70);
    AutonMove(5,70);
    AutoFlip = false;
    AutonTurn(-3,40,40);
    AutonMove(8,50);
    AutonTurn(19,50,50);
    AutonMove(15,40,40);
    AutonLock();
    AutonMove(-65,100);
    AutoIntakeOff = false;
    //AutonPSet();
    AutonTurn(-33.5,40,40);
     
    AutonFire();
    Wait(300);
     
    AutonNLck();
}
void BackB(){
    AutoIntakeOff = true;
    AutonMove(31,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-3.4,70);
    AutoIntakeOff = true;
    AutonTurn(24.3,60,60);
    AutonMove(-14.5,60);
    AutonLiftMid();
    AutonFire();
    AutonMove(4.5,60);
    AutonTurn(-7.25,50,50);
    AutonFire();
    AutonTurn(19,50,50);
    AutonMove(7.7,60);
    AutonTurn(16.9,50,50);
    AutonMove(8.8,40);
    AutonLiftUp();
    AutonMove(-.25,50);
    AutonLiftDn();
    AutonMove(-2,50);
}
void BackBBread(){
    AutoIntakeOff = true;
    AutonMove(41,70); 
    Wait(100);
    AutoIntakeOff = false;
    Wait(300);
    AutonMove(-43,70);
    AutonMove(-3,25);
    AutonMove(3,25);
    AutonTurn(15.5,40,40);
    //AutonPSet();
    AutonMove(43,70);
    Wait(150);
    AutonFire();
     
    Wait(200);
    //AutonRFire();
     
    AutonTurn(1,25,25);
    AutonMove(42,70);
    StrafeRecon(300,70,-1);
    AutonMove(5.5,70);
    AutonMove(-38,80);
    AutonTurn(16,60,60);
    AutonLock();
    AutonMove(-40,70);
    AutonNLck();
}





//Back Red
void BackRPark(){
    AutoIntakeOff = true;
    AutonMove(34,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-4,70);
    AutoIntakeOff = true;
    AutonTurn(16,50,50);
    AutoFlip = true;
    AutonMove(5,80);
    AutonTurn(16,70,70);
    AutonMove(5,70);
    AutoFlip = false;
    AutonTurn(3,40,40);
    AutonMove(8,50);
    AutonTurn(-19,50,50);
    AutonMove(15,40,40);
    AutonLock();
    AutonMove(-65,100);
    AutoIntakeOff = false;
    AutonNLck();
}
void BackRParkShot(){
    AutoIntakeOff = true;
    AutonMove(39,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-4,70);
    AutoIntakeOff = true;
    AutonTurn(16,50,50);
    AutoFlip = true;
    AutonMove(5,80);
    AutonTurn(16,70,70);
    AutonMove(5,70);
    AutoFlip = false;
    AutonTurn(3,40,40);
    AutonMove(8,50);
    AutonTurn(-19,50,50);
    AutonMove(15,40,40);
    AutonLock();
    AutonMove(-65,100);
    AutoIntakeOff = false;
    //AutonPSet();
    AutonTurn(33.5,40,40);
     
    AutonFire();
    Wait(300);
     
    AutonNLck();
}
void BackRBread(){
    AutoIntakeOff = true;
    AutonMove(40,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(200); 
    AutonMove(-40,70);
    AutonMove(-3,25);
    AutonMove(4,25);
    AutonTurn(-15.3,40,40);
    //AutonPSet();
    AutonMove(43,70);
    AutonFire();
     
    Wait(200);
    //AutonRFire();
     
    AutonTurn(-0.5,25,25); 
    AutonMove(40,80);
    StrafeRecon(500,80,1);
    AutonMove(5.5,60);
    AutonMove(-38,80);
    AutoIntakeOff = true;
    AutonTurn(-16,50,50);
    AutonLock();
    AutonMove(-40,60);
    AutonNLck();
}
void BackR(){
    AutoIntakeOff = true;
    AutonMove(31,80);
    Wait(200);
    AutoIntakeOff = false;
    Wait(200);
    AutonMove(-3,70);
    AutoIntakeOff = true;
    AutonTurn(-24.5,60,60);
    AutonMove(-14.5,60);
    AutonLiftMid();
    AutonFire();
    AutonMove(4.5,60);
    AutonTurn(7.25,50,50);
    AutonFire();
    AutonTurn(-19,50,50);
    AutonMove(29,90);
    AutonMove(1,40);
    AutonLiftUp();
    AutonMove(-.25,50);
    AutonLiftDn();
    AutonMove(-2,50);
}





//Front Blue
void FrntB(){
    AutoIntakeOff = true;
    AutonMove(33,70); 
    AutoIntakeOff = false;
    Wait(300);
    AutonMove(-29,60);
    AutonFire();
    AutonTurn(15.3,40,40);
    AutonMove(7,30);
    AutonFire();
    Wait(80);
    AutonFire();
    AutonLiftMid();
    Wait(200);
    AutonFire();
    AutonLiftDn();
    AutonTurn(0.4,25,25);
    AutonMove(33,70);
    StrafeRecon(300,70,-1);
    AutonMove(3,60);
    AutonMove(-10,80);
    AutonFire();
    AutonTurn(-14.2,40,40);
    AutonMove(2,70);
    AutonLiftMid();
    AutonFire();
    Wait(600);
}
void FrntBPark(){
    AutoIntakeOff = true;
    AutonMove(41,70); 
    Wait(100);
    AutoIntakeOff = false;
    Wait(300);
    AutonMove(-43,70);
    AutonMove(-3,25);
    AutonMove(3,25);
    //AutonPSet();
    AutonTurn(15.5,40,40);
    AutonFire();
     
    Wait(200);
    //AutonRFire();
     
    AutonTurn(1,25,25);
    AutonMove(42,70);
    StrafeRecon(300,70,-1);
    AutonMove(5.5,70);
    AutonMove(-38,80);
    AutonTurn(16,60,60);
    AutonLock();
    AutonMove(-40,70);
    AutonNLck();
}
void FrntBFarSide(){
    AutoIntakeOff = true;
    AutonMove(33,70); 
    AutoIntakeOff = false;
    Wait(300);
    AutonMove(-29,60);
    AutonFire();
    AutonTurn(15.3,40,40);
    AutonMove(7,30);
    AutonFire();
    Wait(80);
    AutonFire();
    AutonLiftMid();
    Wait(200);
    AutonFire();
    AutonLiftDn();
    AutonTurn(0.4,25,25);
    AutonMove(33,70);
    StrafeRecon(300,70,-1);
    AutonMove(3,60);
    AutonMove(-12,80);
    AutonFire();
    AutonTurn(-14.6,40,40);
    AutonMove(2,70);
    AutonLiftMid();
    AutonFire();
    Wait(600);
}




//Front Red
void FrntR(){
    AutoIntakeOff = true;
    AutonMove(33,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(200); 
    AutonMove(-29,60);
    AutonFire();
    AutonTurn(-16,40,40);
    AutonMove(7,40);
    AutonFire();
    AutonLiftMid();
    AutonFire();
    Wait(200);
    AutonFire();
    AutonLiftDn();
    Wait(50);
    AutonTurn(-0.5,25,25); 
    AutonMove(40,80);
    StrafeRecon(500,80,1);
    AutonMove(5.5,40);
    StrafeRecon(100,25,-1);
    AutonMove(-19,80);
    AutoIntakeOff = true;
    AutonTurn(16,50,50);
    AutoFlip = true;
    AutonMove(16,100);
    Wait(200);
    AutonMove(-3,80);
    AutoFlip = false;
}
void FrntRFarSide(){
    AutoIntakeOff = true;
    AutonMove(33,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(200); 
    AutonMove(-29,60);
    AutonFire();
    AutonTurn(-16,60,60);
    AutonMove(5,40);
    AutonFire();
    AutonLiftMid();
    AutonFire();
    Wait(200);
    AutonFire();
    AutonLiftDn();
    Wait(50);
    AutonTurn(-0.5,25,25); 
    AutonMove(40,80);
    StrafeRecon(500,80,1);
    AutonMove(5.5,40);
    StrafeRecon(100,25,-1);
    AutonMove(-19,80);
    AutonTurn(12.7,60,60);
    AutonMove(2,30);
    AutonFire();
    AutonLiftMid();
    AutonFire();
    AutonLiftDn();
    AutoIntakeOff = true;
    AutonTurn(5,80,80);
    AutoFlip = true;
    AutonMove(18,60);
    Wait(50);
    AutonMove(-3,80);
    AutoFlip = false;
}
void FrntRPark(){
    AutoIntakeOff = true;
    AutonMove(32,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(200); 
    AutonMove(-33,70);
    AutonMove(-3,25);
    AutonMove(4,25);
    AutonFire();
    AutonTurn(-15.3,40,40);
    AutonFire();
     
    AutonFire();
    Wait(200);
    AutonFire();
     
    AutonTurn(-0.5,25,25); 
    AutonMove(40,80);
    StrafeRecon(500,80,1);
    AutonMove(5.5,60);
    AutonMove(1,25);
    AutonMove(-65,80);
    AutoIntakeOff = true;
    AutonTurn(-18,50,50);
    AutonLock();
    AutonMove(-40,80);
    AutonNLck();
}





//Skills
void Skillz(){
    AutoIntakeOff = true;
    AutoFlip = false;  
    AutonMove(39,80);
    AutoIntakeOff = false;
    Wait(500);
    AutonMove(-44,70);
    AutonMove(-4,15);
    AutonMove(4.5,30);
    AutonTurn(-15.1,40,40);
    AutonFire();
    AutonMove(29,70);
    AutonTurn(0.1,25,25);
    AutonLiftCustom1();
    AutonFire();
    Wait(20);
    AutonFire();
    AutonLiftMid();
    Wait(500);
    AutonFire();
    AutonLiftDn();
    AutonTurn(-0.4,60);
    StrafeRecon(130,30,-1);
    AutonMove(47,90);
    StrafeRecon(400,90,1);
    AutonMove(5,40);
    StrafeRecon(100,25,-1);
    AutoIntakeOff = true;
    AutonMove(-43,80);
    AutonTurn(16,40,40);
    AutonMove(-8,40);
    AutonMove(-3,30);
    AutonMove(43,80);
    AutoIntakeOff = false;
    Wait(500);
    AutonMove(-6,70);
    AutonFire();
    AutonTurn(-12,40,40);
    AutonLiftCustom2();
    AutonFire();
    Wait(1000);
    if (BallInTop){
        AutonLiftMid();
        AutonFire();
        Wait(300); 
        AutonFire();
        HitFlag = true;
        Wait(100);
    }
    AutonLiftDn();
    AutonTurn(-0.75,60,60);
    AutonMove(45,80);
    StrafeRecon(400,80,1);
    AutonMove(6,40);
    StrafeRecon(100,25,-1);
    AutonMove(-18,70);
    Wait(200);  
    if (BallInTop && HitFlag == false){
        AutonFire();
        AutonTurn(0.75,25,25);
        AutonFire();
        HitFlag = true;
        AutonTurn(-0.75,25,25);
        Wait(100);
    }
    AutonTurn(-16.5,40,40);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(17,70);
    Wait(300);
    AutoFlip = false;
    AutonMove(-71,80);
    StrafeRecon(1000,80,-1);
    StrafeRecon(300,80,1);
    AutoIntakeOff = true;
    AutonMove(20,70);
    Wait(100);
    AutoIntakeOff = false;
    Wait(1000);
    AutoIntakeOff = true;
    AutoFlip = true;
    AutonMove(3,50);
    AutonMove(-5,80);
    StrafeRecon(500,80,-1);
    StrafeRecon(150,25,1);
    AutoFlip = false;
    AutoIntakeOff = false;
    AutonMove(-40,80);
    StrafeRecon(200,80,1);
    AutonMove(-4,25);
    AutonMove(16,60);
    AutonFire();
    AutonTurn(16.3,40,40);
    HitFlag = false;
    AutonLiftCustom3();
    AutonFire();
    Wait(700);
    if (BallInTop){
        AutonFire();
        AutonLiftMid();
        Wait(300);
        AutonFire();
        HitFlag = true;
        Wait(100);
    }
    AutonLiftDn();
    AutonTurn(-0.2);
    StrafeRecon(130,40,-1);
    AutonMove(38,70);
    StrafeRecon(400,80,1);
    AutonMove(6.5,80);
    StrafeRecon(100,80,-1);
    Wait(800);
    if (BallInTop && HitFlag == false){
        AutonFire();
        AutonMove(-13,80);
        AutonFire();
        HitFlag = true;
        Wait(100);
        AutonMove(-26,80);
    }
    else {
        AutonMove(-37,80);
    }
    AutonTurn(15,40,40);
    HitFlag = false;
    AutonMove(8,40);
    AutoIntakeOff = true;
    AutoFlip = true;
    StrafeRecon(1200,80,1);
    AutonLiftSkillzShot();
    AutonMove(-6,60);
    AutoFlip = false;
    AutonMove(5,50);
    AutonLock();
    AutonMove(-80,75);
    AutonLiftDn();
    vex::task::sleep(2000);
    AutonNLck();
}





//Selecting
void AutonPots(){
    int SelectValueOne = AutonSelectOne.value(vex::percentUnits::pct);
    int SelectValueTwo = AutonSelectTwo.value(vex::percentUnits::pct);
    
    if(SelectValueOne > 80){
        Skillz();
    }
    
    else if(SelectValueOne > 60){
        if(SelectValueTwo > 80){

        }
        else if(SelectValueTwo > 50){
            FrntBFarSide();
        }
        else if(SelectValueTwo > 30){
            FrntBPark();
        }
        else if(SelectValueTwo >= 0){
            FrntB();
        }
    }
    
    else if(SelectValueOne > 40){
        if(SelectValueTwo > 80){
            BackBBread();
        }
        else if(SelectValueTwo > 50){
            BackBParkShot();
        }
        else if(SelectValueTwo > 30){
            BackBPark();
        }
        else if(SelectValueTwo >= 0){
            BackB();
        }
    }
    else if(SelectValueOne > 20){
        if(SelectValueTwo > 80){
            
        }
        else if(SelectValueTwo > 50){
            FrntRFarSide();
        }
        else if(SelectValueTwo > 30){
            FrntRPark();
        }
        else if(SelectValueTwo >= 0){
            FrntR();
        }
    }
    else if(SelectValueOne >= 0){
        if(SelectValueTwo > 80){
            BackRBread();
        }
        else if(SelectValueTwo > 50){
            BackRParkShot();
        }
        else if(SelectValueTwo > 30){
            BackRPark();
        }
        else if(SelectValueTwo >= 0){
            BackR();
        }
    }
}
void AutonUpdater(){
    int SelectValueOne = AutonSelectOne.value(vex::percentUnits::pct);
    int SelectValueTwo = AutonSelectTwo.value(vex::percentUnits::pct);
    Brain.Screen.clearScreen();
    if(SelectValueOne > 80){
        //Skillz;
        Brain.Screen.clearLine(1,vex::color::purple);
        Brain.Screen.clearLine();
        Brain.Screen.print("Skillz");
    }

    else if(SelectValueOne > 60){
        if(SelectValueTwo > 80){
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print(" ");

        }
        else if(SelectValueTwo > 50){
            //FrntBFarSide();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Blue Far Side Hit Again");

        }
        else if(SelectValueTwo > 30){
            //FrntBPark();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Blue Parking");
        }
        else if(SelectValueTwo >= 0){
            //FrntB();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Blue Caps and Center Middle Flag");
        }
    }
    else if(SelectValueOne > 40){
        if(SelectValueTwo > 80){
            //BackBBread();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Bread");
        }
        else if(SelectValueTwo > 50){
            //BackBParkShot();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Parking with Middle Flag");
        }
        else if(SelectValueTwo > 30){
            //BackBPark();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Parking");
        }
        else if(SelectValueTwo >= 0){
            //BackB();
            Brain.Screen.clearLine(1,vex::color::blue);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Blue Caps");
        }
    }
    else if(SelectValueOne > 20){
        if(SelectValueTwo > 80){
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print(" ");
            
        }
        else if(SelectValueTwo > 50){
            //FrntRFarSide
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Red Far Side Hit Again");

        }
        else if(SelectValueTwo > 30){
            //FrntRPark();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Red Parking");
        }
        else if(SelectValueTwo >= 0){
            //FrntR();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Front Red Caps");
        }
    }
    else if(SelectValueOne >= 0){
        if(SelectValueTwo > 80){
            //BackRBread();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Red Bread");
            
        }
        else if(SelectValueTwo > 50){
            //BackRParkShot();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Red Parking and Middle Flag");

        }
        else if(SelectValueTwo > 30){
            //BackRPark();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Red Parking");
        }
        else if(SelectValueTwo >= 0){
            //BackR();
            Brain.Screen.clearLine(1,vex::color::red);
            Brain.Screen.clearLine();
            Brain.Screen.print("Back Red Caps");
        }
    }
}
int WhatAuton(){
    while(true){
        AutonUpdater();
        Brain.Screen.render();
        vex::task::sleep(20);
    }
    return 1;
}