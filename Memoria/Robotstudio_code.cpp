MODULE Module1
	CONST jointtarget JointTarget_1:=[[60,0,40,0,30,0],
	CONST robtarget Target_10:=[[3.05311331771918E-15,-215]
PROC Path_10()
	MoveAbsJ JointTarget_1,v1000,z100,GunTCP\WObj:=wobj0;
	ConfL\Off;
	ActUnit CNV1;
	MoveJ Target_80,v1000,fine,GunTCP\WObj:=wobj0;
	WaitWObj cnvWobj1;
	MoveL Target_60,v1000,z100,GunTCP\WObj:=cnvWobj1;
	MoveL Target_50,v1000,z100,GunTCP\WObj:=cnvWobj1;
	MoveL Target_40,v1000,z100,GunTCP\WObj:=cnvWobj1;
	MoveL Target_30,v1000,z100,GunTCP\WObj:=cnvWobj1;
	MoveL Target_20,v1000,z100,GunTCP\WObj:=cnvWobj1;
	MoveL Target_10,v1000,z100,GunTCP\WObj:=cnvWobj1;
	MoveJ Target_80,v1000,fine,GunTCP\WObj:=wobj0;
	DropWObj cnvWobj1;
	DeactUnit CNV1;
	MoveAbsJ JointTarget_1_3,v1000,z100,GunTCP\WObj:=wobj0;
ENDPROC

ENDMODULE

module bfdata(sysmodule)

 

   const num BF_FLUID_CHANNEL := 1;
   const num BF_APPLICATORS := 1;
   const num BF_CHANNELS := 5;
   const num BF_MATERIALS := 100;

   pers bool bImmediateFactor := true; ! Indicate if also set immediately.
   pers bool bSkipBrushFactor; ! Set for each cycle as needed.

   pers num nCurrentFactor{BF_APPLICATORS, BF_CHANNELS} :=
     [[100,100,100,100,100]]; ! Current factors used for the current job.

   pers num nGlobalFactor{BF_APPLICATORS, BF_CHANNELS} :=
     [[100,100,100,100,100]];

   pers num nMaterialFactor{BF_MATERIALS, BF_APPLICATORS, BF_CHANNELS} :=
    [[[100,100,100,100,100]],
     [[100,100,100,100,100]],
     [[100,100,100,100,100]],
     [[100,100,100,100,100]],
     [[100,100,100,100,100]],
     [[100,100,100,100,100]],
     [[100,100,100,100,100]],
     [[100,100,100,100,100]],


     ! Helper function to allow "late binding" setting of the value. 
     proc ImmediateFactor(bool bValue)
        bImmediateFactor := bValue;
     endproc


    
     ! Calculate actual volume to be used with the factor applied.
     proc RetrFactorComp(inout num nVolume, num nMaterial, num nApp)
     endproc




endmodule


MODULE Module1
	CONST jointtarget JointTarget_1:=[[60,0,40,0,30,0],
	CONST robtarget Target_10:=[[3.05311331771918E-15,-215]
PROC Path_10()
	ConfL\Off;
	ActUnit CNV1;
	MoveAbsJ JointTarget_1,v1000,z100,GunTCP\WObj:=wobj0;
	MoveJ Target_10,v1000,z100,GunTCP\WObj:=wobj0;
	WaitWObj cnvWobj2\RelDist:=1000;
	MoveL Target_20,v1000,z1,GunTCP\WObj:=cnvWobj2;
	MoveL Target_30,v1000,z1,GunTCP\WObj:=cnvWobj2;
	MoveL Target_40,v1000,z1,GunTCP\WObj:=cnvWobj2;
	MoveL Target_50,v1000,z1,GunTCP\WObj:=cnvWobj2;
	MoveL Target_60,v1000,z1,GunTCP\WObj:=cnvWobj2;
	MoveL Target_70,v1000,z1,GunTCP\WObj:=cnvWobj2;
	MoveJ Target_10,v1000,fine,GunTCP\WObj:=wobj0;
	DropWObj cnvWobj2;
	DeactUnit CNV1;
	MoveAbsJ JointTarget_1_2,v1000,z100,GunTCP\WObj:=wobj0;
ENDPROC

ENDMODULE