// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "FortTimeOfDayManager.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API AFortTimeOfDayManager : public AInfo
{
	GENERATED_BODY()
	
public:

	//MISSED OFFSET

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              TimeOfDay;           

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              TimeOfDayReplicated;     
	/*
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<EFortDayPhase>                         CurrentDayNightPhase;     

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<EFortDayPhase>                         TransitionFromPhase;         

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TEnumAsByte<EFortDayPhase>                         TransitionToPhase;     
	*/
                               // MISSED OFFSET

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              TransitionBlendPercent;     

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              DefaultTimeOfDaySpeed;      

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              StartTimeOfDayInGame;         

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              TimeOfDaySpeed;           

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MaxTimeOfDayAccumulationFactor;    

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              TimeOfDayAccumulator;        

                               // MISSED OFFSET

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialInterface*                          BasePostProcessMaterial;         

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialInstanceDynamic*                    PostProcessMaterialMID;     

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                     bHasClonedPPVs;             

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool  bSkipNight;       

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                    bTimeStarted;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                     bHeightFogEnabled;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                   bBaseHeightFogOnAltitude;

    // MISSED OFFSET

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              HeightFogZOffset;                               
	     
	// MISSED OFFSET
	/*
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FCameraAltitudeAdjustments>          AltitudeAdjustments;    
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    SunriseDirectionalLightRotation;   

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    SunsetDirectionalLightRotation;       

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    DirectionalLightRotation;    

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    SunriseSunObjectRotation;      

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FRotator                                    SunsetSunObjectRotation;      

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              SunObjectDivergencePower;   

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              DistanceToSunOrMoon;         

    // MISSED OFFSET

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UDirectionalLightComponent*                  DirectionalLightComponent;     

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UExponentialHeightFogComponent*              ActiveHeightFogComponent;   
	/*
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UFortDayPhaseChangeParams*                   DayPhaseChangeEventParams;        
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FDayPhaseInfo                               LightAndFogPhaseSettings;     
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPostProcessComponent*                       MorningPostProcessComponent;    

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPostProcessComponent*                       DayPostProcessComponent;   

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPostProcessComponent*                       EveningPostProcessComponent;     

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPostProcessComponent*                       NightPostProcessComponent;      

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UPostProcessComponent*                       DayPhasePostProcessComponent;   
	/*
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	FExponentialHeightFogValues                 CurrentTimeOfDayFogValues;         
	*/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	 FLinearColor                                CurrentTimeOfDayDirectionalLightColor;    

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialParameterCollection*                MaterialParameterCollection;       

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	 FVector                                     RainParticleSystemRelativeOffset;    

       //  MISSED OFFSET

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStaticMesh*                                 SunMesh;       

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStaticMesh*                                 MoonMesh;        

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UMaterialInterface*>                  SunMaterialOverrides;  

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<class UMaterialInterface*>                  MoonMaterialOverrides;   

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              SunScale;                 

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MoonScale;        

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialInterface*                          StarMapMaterial;      

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialInstance*                           StormMaterialInst;    

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UTexture2D*                                  CloudMaskTexture;      
	/*
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	 FExponentialHeightFogValues                 StormFogValues;        
	 */
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	 FLinearColor                                LightningColor;   

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	 FLinearColor                                StormLightColor;  

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
	 //FScriptMulticastDelegate                    OnDayPhaseChangeEvent;     

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class USkyLightComponent*                          SkyLightComp;        

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UParticleSystemComponent*                    RainParticleSystemComp;  

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStaticMeshComponent*                        SunOrMoonMeshComp;   

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStaticMeshComponent*                        SkyDomeMeshComp;     

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UStaticMeshComponent*                        StarMapMeshComp;    

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialInstanceDynamic*                    ActiveSkyBoxMat;   

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	class UMaterialInstanceDynamic*                    StarMapMID;  

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              StormStrength; 

        // MISSED OFFSET
};
