// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SoundCueTemplate.h"
#include "Sound/SoundNodeDistanceCrossFade.h"
#include "Sound/SoundNodeModulatorContinuous.h"
#include "Engine/DeveloperSettings.h"
#include "FortSoundCueTemplateBase.generated.h"


UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UFortSoundCueTemplateBase : public USoundCueTemplate
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};


UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UFortSoundCueTemplateSimple : public UFortSoundCueTemplateBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UMusicPack : public UFortSoundCueTemplateBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};




USTRUCT(BlueprintType)
struct FORTSOUNDCUETEMPLATES_API FFortSubmixPair
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	USoundSubmixBase* Submix; 

	UPROPERTY(EditAnywhere)
	float SendAmount = 0.0f; 
};


USTRUCT(BlueprintType)
struct FORTSOUNDCUETEMPLATES_API FFortContinuousModulatorConfig 
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FVector2D VolumeRange; 

	UPROPERTY(EditAnywhere)
	 FVector2D PitchRange;

	UPROPERTY(EditAnywhere)
	 TEnumAsByte<ModulationParamMode> VolumeMode; 

	UPROPERTY(EditAnywhere)
	 TEnumAsByte<ModulationParamMode> PitchMode; 
};

USTRUCT(BlueprintType)
struct FORTSOUNDCUETEMPLATES_API FGliderThrustData
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FName ParameterName;        

	UPROPERTY(EditAnywhere)
	FVector2D PitchOutput;    

	UPROPERTY(EditAnywhere)
	FVector2D VolumeOutput;      

	UPROPERTY(EditAnywhere)
	USoundWave* Sound;

	UPROPERTY(EditAnywhere)
	FFortContinuousModulatorConfig Settings;
};

USTRUCT(BlueprintType)
struct FORTSOUNDCUETEMPLATES_API FPhysicsStateData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FName ParameterName;


	UPROPERTY(EditAnywhere)
	 FVector2D VolumeOutput;

	UPROPERTY(EditAnywhere)
	 FVector2D PitchOutput;

	UPROPERTY(EditAnywhere)
	 FFortContinuousModulatorConfig Settings; 

	UPROPERTY(EditAnywhere)
	 FDistanceDatum CrossfadeInputSlow; 

	UPROPERTY(EditAnywhere)
	 USoundWave* SlowLoop; 

	UPROPERTY(EditAnywhere)
	 FDistanceDatum CrossfadeInputFast; 
	
	UPROPERTY(EditAnywhere)
	 USoundWave* FastLoop; 
};

USTRUCT(BlueprintType)
struct FORTSOUNDCUETEMPLATES_API FPhysicsImpactData
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FVector2D VolumeOutput;

	UPROPERTY(EditAnywhere)
	 FVector2D PitchOutput; 

	UPROPERTY(EditAnywhere)
	 FFortContinuousModulatorConfig Settings; 

	UPROPERTY(EditAnywhere)
	 TArray<USoundWave*> Variations;

	
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UFortSoundCueTemplateDefaults : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 USoundClass* SoundClass;                                            

	UPROPERTY(EditAnywhere)
	USoundAttenuation* Attenuation;                                             

	UPROPERTY(EditAnywhere)
	 USoundConcurrency* Concurrency;                                            

	UPROPERTY(EditAnywhere)
	float VolumeMultiplier;                                       

	UPROPERTY(EditAnywhere)
	float PitchMultiplier;                                         

	UPROPERTY(EditAnywhere)
	TArray<FFortSubmixPair> SubmixSends;                                             

	UPROPERTY(EditAnywhere)
	 USoundWave* LicensedTrackAlternative;                            

	UPROPERTY(EditAnywhere)
	 USoundSubmixBase* LicensedSubmix;                                           
	
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UFortSoundCueTemplateDefaultSettings : public UDataAsset
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TMap<UFortSoundCueTemplateBase*, UFortSoundCueTemplateDefaults*> TemplateDefaults;                                      
};


UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UPlayerFoleyBase : public UFortSoundCueTemplateBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UPlayerFoley : public UPlayerFoleyBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UFootstepFoley : public UPlayerFoley
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const PURE_VIRTUAL(, );
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UPhysicsStateLoop : public UFortSoundCueTemplateBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};


UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UPhysicsImpact : public UFortSoundCueTemplateBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UFortSoundCueTemplateSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UFortSoundCueTemplateDefaultSettings> DefaultTemplateSettings;                                     
};

UCLASS(BlueprintType)
class  FORTSOUNDCUETEMPLATES_API UGliderThrustSCTDefaults : public UFortSoundCueTemplateDefaults
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FGliderThrustData Forward;

	UPROPERTY(EditAnywhere)
	 FGliderThrustData Sideways; 

	UPROPERTY(EditAnywhere)
	 FGliderThrustData Backwards; 

	UPROPERTY(EditAnywhere)
	 FGliderThrustData AnyDirection; 
};


UCLASS(BlueprintType)
class UPhysicsStateSCTDefaults : public UFortSoundCueTemplateDefaults
{	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FName SpeedParameterName; 

	UPROPERTY(EditAnywhere)
	 FPhysicsStateData Rolling; 

	UPROPERTY(EditAnywhere)
	 FPhysicsStateData Sliding; 

	UPROPERTY(EditAnywhere)
	 FPhysicsStateData Flying;

	UPROPERTY(EditAnywhere)
	 FPhysicsStateData Floating; 
};

UCLASS(BlueprintType)
class UPhysicsImpactSCTDefaults : public UFortSoundCueTemplateDefaults
{	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FName ImpactTypeParameterName; 

	UPROPERTY(EditAnywhere)
	FName StrengthParameterName;
	
	UPROPERTY(EditAnywhere)
	FPhysicsStateData Light; 

	UPROPERTY(EditAnywhere)
	FPhysicsStateData Medium; 

	UPROPERTY(EditAnywhere)
	FPhysicsStateData Heavy;
};

UCLASS(BlueprintType)
class UPickaxeSCTDefaults : public UFortSoundCueTemplateDefaults
{	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	USoundAttenuation* CloseAttenuation; 

	UPROPERTY(EditAnywhere)
	USoundAttenuation* DistantAttenuation;
	
	UPROPERTY(EditAnywhere)
	TArray<USoundWave*> DistantVariations;; 
};

UCLASS(BlueprintType)
class UPlayerFoleyDefaults : public UFortSoundCueTemplateDefaults
{	GENERATED_BODY()

public:
	
	UPROPERTY(EditAnywhere)
	 USoundClass* LocalPlayerSoundClass; 

	UPROPERTY(EditAnywhere)
	 USoundClass* TeammateSoundClass; 

	UPROPERTY(EditAnywhere)
	 USoundClass* HostileSoundClass;
	
	UPROPERTY(EditAnywhere)
	 USoundAttenuation* LocalPlayerAttenuation; 

	UPROPERTY(EditAnywhere)
	 USoundAttenuation* AboveAttenuation; 

	UPROPERTY(EditAnywhere)
	 USoundAttenuation* BelowAttenuation; 

	UPROPERTY(EditAnywhere)
	 USoundAttenuation* ParallelAttenuation; 

	UPROPERTY(EditAnywhere)
	TArray<FDistanceDatum> ElevationCrossfadeDistances; 
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UPickaxeBase : public UFortSoundCueTemplateBase
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UWeaponLowAmmo : public UFortSoundCueTemplateSimple
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UWeaponReloadStart : public UFortSoundCueTemplateSimple
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UWeaponOutOfAmmo : public UFortSoundCueTemplateSimple
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UWeaponReloadEnd : public UFortSoundCueTemplateSimple
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UWeaponTargetingStart : public UFortSoundCueTemplateSimple
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UWeaponTargetingEnd : public UFortSoundCueTemplateSimple
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};

UCLASS(BlueprintType)
class FORTSOUNDCUETEMPLATES_API UWeaponReloadInsert : public UFortSoundCueTemplateSimple
{
	GENERATED_UCLASS_BODY()

public:
	virtual void OnRebuildGraph(USoundCue& SoundCue) const override;
};