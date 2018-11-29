void AutonMove(double Distance,int Pct=100, int FinalWait=250, int Correction=2){
    //Local Variables
    double WheelSize=4*3.1415926535;
    double Vector=sgn(Distance);
    double Revolutions= abs(Distance)/WheelSize;
    int LPowSend=0;
    int RPowSend=0;
    //Clear it
    BLMotor.resetRotation();
    BRMotor.resetRotation();
    //Moving to position
    while(abs(BRMotor.rotation(vex::rotationUnits::rev))<abs(Revolutions)){
        double BLMotorValue=BLMotor.rotation(vex::rotationUnits::deg);
        double BRMotorValue=BRMotor.rotation(vex::rotationUnits::deg);
        //Auto Straightening
        if(abs(BLMotorValue)>abs(BRMotorValue)){
            LPowSend=Pct-Correction;
            RPowSend=Pct;
        }
        else if(abs(BLMotorValue)<abs(BRMotorValue)){
            LPowSend=Pct;
            RPowSend=Pct-Correction;
        }
        else if(abs(BLMotorValue)==abs(BRMotorValue)){
            LPowSend=Pct;
            RPowSend=Pct;
        }
        //Using Auto Straightening to Drive
        LPowSend=LPowSend*Vector;
        RPowSend=RPowSend*Vector;
        //Send it to Driving Power
        SDMP(LPowSend,RPowSend);
        vex::task::sleep(1);
    }
    SDMP(0,0);
    vex::task::sleep(FinalWait);
}
void AutonTurn(double deg, int LPowSend=50, int RPowSend=50, int FinalWait=25){
    int Direction=sgn(deg);
    deg=abs(deg)/12.56;
    LPowSend=LPowSend*Direction;
    RPowSend=RPowSend*Direction;
    while(abs(BRMotor.rotation(vex::rotationUnits::rev))<deg){
       SDMP(LPowSend,-RPowSend);
       vex::task::sleep(1); 
    }
    SDMP(0,0);
    FLMotor.setStopping(vex::brakeType::brake);
    BLMotor.setStopping(vex::brakeType::brake);
    FRMotor.setStopping(vex::brakeType::brake);
    BRMotor.setStopping(vex::brakeType::brake);

    vex::task::sleep(FinalWait);
    SDMP(0,0);
}

