// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayAbilitySpec.h"
#include "Math/Color.h"
#include "../FortniteGame.h"
#include "AbilitySystemComponent.h"
#include "GameplayEffectTypes.h"
//#include "SignificanceManager.h"
#include "FortWeapon.generated.h"

class UFortGameplayAbility;

USTRUCT(BlueprintType)
struct FFortEffectDistanceQuality
{
	GENERATED_BODY()

public:

	/** Minimal distance for cinematic settings **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MinDistanceCinematic;                             
	
	/** Minimal distance for epic settings **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MinDistanceEpic;   

	/** Minimal distance for high settings **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MinDistanceHigh;     

	/** Minimal distance for medium settings **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MinDistanceMedium;  

	/** Minimal distance for low settings **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              MinDistanceLow;                                   
	
	/** Allow cinematic? **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bAllowCinematic;                                  
	
	/** Allow epic? **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool                                               bAllowEpic;                                       
	
	/** Allow high? **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bAllowHigh;       

	/** Allow medium? **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bAllowMedium;   

	/** Allow low? **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bAllowLow;                                        

};
USTRUCT(BlueprintType)
struct FFortAbilitySetHandle
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TWeakObjectPtr<class UAbilitySystemComponent>      TargetAbilitySystemComponent;                         
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FGameplayAbilitySpecHandle>          GrantedAbilityHandles;                                
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<struct FActiveGameplayEffectHandle>         AppliedEffectHandles;                                 

};

USTRUCT(BlueprintType)
struct FFortGameplayAbilityBehaviorDistanceData
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	struct FGameplayTagContainer                       DistanceDataTag;                                     
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	float                                              Distance;                                                                        
};

UCLASS(Abstract, Blueprintable)
class FORTNITEGAME_API AFortWeapon : public AActor
{
	GENERATED_BODY()

    /** @return the core animation used on the player when having this weapon equipped */
	UFUNCTION(BlueprintCallable)
		TEnumAsByte<EFortWeaponCoreAnimation> GetCoreAnimation() const { return WeaponCoreAnimation; }

   public:	

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	uint8                                      EquippedWeaponDestroyWrapperRepCounter;                                                                     
                                                                                   
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                CurrentGunFireIndex;                                                                                                                                                                                                                                                                                                                                                                                                                                                     
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                                CurrentShotLogIndex;                                                                
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	TArray<int>                                   ShotLogFlags;                                                                       

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	int                                            ChargeStatusPack;                                                                                                                                                                                                  
	
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
	bool                                               bIgnoreTryToFireSlotCooldownRestriction;     

	/* ---------------- */
    /* Camera */
    public:
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Camera")
			class UClass*                                      CameraBase3PClass;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Camera")
			class UClass*                                      CameraTargeting3PClass;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Camera")
			class UClass*                                      CameraBase1PClass;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Camera")
			class UClass*                                      CameraTargeting1PClass;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Camera")
			class UClass*                                      ImpactCameraShake;

	/* ---------------- */
    /* Reticle */
    public:
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			bool                                               bShouldDrawNativeReticle;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			class UTexture2D*                                  ReticleImage;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			struct FColor                                      ReticleDefaultColor;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			struct FColor                                      ReticleEnemyColor;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			struct FColor                                      ReticleBuildingColor;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			class UTexture2D*                                  HitNotifyReticleImage;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			float                                              HitNotifyDisplayDuration;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			class UTexture2D*                                  ReticleCenterImage;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			class UTexture2D*                                  ReticleCenterPerfectAimImage;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			class UTexture2D*                                  MuzzleBlockedReticleImage;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			float                                              ReticleDefaultPrimaryStrikeAngle;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			float                                              ReticleDefaultSecondaryStrikeAngle;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			bool                                               bSupportsAutofireAtReticleTarget;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			struct FColor                                      CurrentReticleColor;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			struct FVector                                     CurrentDamageStartLocation;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Reticle")
			struct FVector                                     CurrentAdjustedAimDirection;

	/* ---------------- */
    /* Offset */
    public:
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Offset")
			struct FVector                                     TargetSourceOffset;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Offset")
			struct FVector                                     TargetSourceOffsetWhileCrouched;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Offset")
			struct FVector                                     TargetSourceOffsetWhileTargeting;

	/* ---------------- */
    /* Customization */
	public:
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Customization")
			TArray<class UFortAccountItemDefinition*>       AppliedAlterations;             // Replace with UFortAlterationItemDefinition  if needed     
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Customization")
			TArray<class UMaterialInterface*>                  DefaultWeaponMaterials;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Customization")
			FName                                       CosmeticStatToObserve;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Customization")
			int                                                CosmeticStatValue;

	/* ---------------- */
    /* Misc */
	public:

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			bool                                               bIsEquippingWeapon;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			bool                                               bIsReloadingWeapon;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			bool                                               bIsChargingWeapon;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			float                                              TimerIntervalAdjustment;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			float                                              InputQueueTimePercent;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			bool                                               bAllowTargeting;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			bool                                               bIsTargeting;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			float                                              LastTargetingTransitionTime;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			bool                                               bTraceThroughPawns;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			bool                                               bTraceThroughWorld;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			int                                                TraceThroughPawnsLimit;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			int                                                TraceThroughBuildingsLimit;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			int                                                BurstFireCounter;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			float                                              ChargeTime;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			bool                                               bInitializedWeaponItem;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			bool                                               bUpdateLocalAmmoCount;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc")
			float                                              MaxWeaponSwitchNetworkWaitTime;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Misc|WeaponData")
			class AActor*                   AttachedTrajectoryIndicator;      // AFortProjectileTrajectory        

	/* ---------------- */
    /* Ability */
	public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
		TArray<struct FFortGameplayAbilityBehaviorDistanceData> GameplayAbilityBehaviorDistanceData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
		class UFortGameplayAbility*                        ActiveAbility;             

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
		struct FGameplayAbilitySpecHandle                  PrimaryAbilitySpecHandle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
		struct FGameplayAbilitySpecHandle                  SecondaryAbilitySpecHandle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
		struct FGameplayAbilitySpecHandle                  ReloadAbilitySpecHandle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
		TArray<struct FGameplayAbilitySpecHandle>          EquippedAbilityHandles;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Ability")
		TArray<struct FFortAbilitySetHandle>               EquippedAbilitySetHandles;

	/* ---------------- */
    /* Effects */
	public:
	UPROPERTY(EditAnywhere, Category = "FX")
		class UParticleSystem*                             ImpactPhysicalSurfaceEffects[0x3F];

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FX|Feedback")
		class UForceFeedbackEffect*                        PrimaryForceFeedbackEffect;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FX|Feedback")
		class UForceFeedbackEffect*                        SecondaryForceFeedbackEffect;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FX|Feedback")
		class UForceFeedbackEffect*                        PrimaryImpactForceFeedbackEffect;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FX|Feedback")
		class UForceFeedbackEffect*                        SecondaryImpactForceFeedbackEffect;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FX")
		class AActor*                              CachedFXManager;                  // Replace with AFortFXManager if needed             

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FX")
		struct FFortEffectDistanceQuality                  FireFXSignificance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FX|Socket")
		FName                                       MuzzleSocketName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FX|Socket")
		FName                                       MuzzleFalloffSocketName;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FX|Runtime")
		bool                                               bIsPlayingFireFX;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "FX|Runtime")
		bool                                               bFireFXTriggered;

	/* ---------------- */
    /* Runtime */
	public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime")
		float                                              LastFireAbilityTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime")
		float                                              LastFireTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime")
		class AActor*                                      LockOnTargetCandidate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime")
		bool                                               bPendingDestroyDueToDurabilityOrStackCount;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime")
		float                                              LastReloadTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime")
		float                                              LastSuccessfulReloadTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime")
		float                                              CurrentReloadDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime|WeaponData")
		struct FGuid                                       ItemEntryGuid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime|WeaponData")
		int                                                WeaponLevel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime|WeaponData")
		int                                                AmmoCount;
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime")
		class UFortWeaponItemDefinition*                   WeaponData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Runtime")
		class UFortWeaponItemDefinition*                   CosmeticOverrideWeaponData;

	/* ---------------- */
	/* Animation */
	public:

		/** Animation played on pawn when equipping the weapon **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Animation")
		class UAnimMontage*                                EquipAnimation;

	/** Animation played on pawn when reloading the weapon **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Animation")
		class UAnimMontage*                                ReloadAnimation;

	/** Animation played on weapon once it's being equipped **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Animation")
		class UAnimMontage*                                WeaponEquipMontage;

	/** Animation played on weapon once it's being reloaded **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Animation")
		class UAnimMontage*                                WeaponReloadMontage;

	/** Core animation of the weapon to use on the player **/
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Animation")
		TEnumAsByte<EFortWeaponCoreAnimation>              WeaponCoreAnimation;

	/* ---------------- */
	/* Weapon Sounds */
	public:

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sound")
			float                                              PrimaryFireSoundFadeOutTime;
		UPROPERTY(EditAnywhere, Category = "Sound")
			class USoundBase*                                  ImpactPhysicalSurfaceSounds[0x3F];
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Sound|Misc")
			class USoundBase*                                  DestroyedSound;

		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category="Sound|Misc")
			class USoundBase*                                  OutOfAmmoSound;

		UPROPERTY(EditAnywhere, Category="Sound|Misc")
			class USoundBase*                                  ReloadSounds[0x3];
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sound")
			class UPrimaryDataAsset*                   HitNotifyAudioBank;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sound")
			bool                                               bUsingSecondaryFireAudio;
		UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sound")
			int                                                FireAudioChannelWantsToPlay;
		UPROPERTY(EditAnywhere, Category = "Sound")
			class UAudioComponent*                             FireAudioChannels[0x4];
		UPROPERTY(EditAnywhere, Category = "Sound|Primary")
			class USoundBase*                                  PrimaryFireSound[0x3];

		UPROPERTY(EditAnywhere, Category="Sound|Primary")
			class USoundBase*                                  PrimaryFireStopSound[0x3];

		UPROPERTY(EditAnywhere, Category="Sound|Secondary")
			class USoundBase*                                  SecondaryFireSound[0x3];

		UPROPERTY(EditAnywhere, Category="Sound|Secondary")
			class USoundBase*                                  SecondaryFireStopSound[0x3];


	// Sets default values for this actor's properties
	AFortWeapon();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		USkeletalMeshComponent* WeaponMesh;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};

/* Recreated by sizzy#2540*/