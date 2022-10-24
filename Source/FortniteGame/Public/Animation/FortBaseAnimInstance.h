// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Animation/AnimInstance.h"
#include "GameplayTags.h"
#include "Math/Rotator.h"
#include "Math/Vector.h"
#include "BoneContainer.h"
#include "FortniteGame/FortniteGame.h"
#include "Animation/AnimMontage.h"
#include "FortBaseAnimInstance.generated.h"


UCLASS(BlueprintType)
class UFortAnimInputEvent : public UObject
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FName EventName;

	//UFUNCTION(Blueprintable, BlueprintCallable)
		//bool IsNamed(FName InEventName);

	//UFUNCTION(Blueprintable, BlueprintCallable)
		//UFortAnimInputEvent* CreateAnimInputEvent(FName InEventName);

};


USTRUCT(BlueprintType)
struct FGameplayTagAnimationData 
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FGameplayTagContainer GameplayTags; 

	UPROPERTY(EditAnywhere)
	 EFortCustomGender ValidGenders; 

	UPROPERTY(EditAnywhere)
	 TSoftObjectPtr<UAnimMontage> AnimMontage; 
};

USTRUCT(BlueprintType)
struct FGameplayTagAnimations 
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	  TArray<FGameplayTagAnimationData> GameplayTagAnimData; 
};

USTRUCT(BlueprintType)
struct FFortAnimInput_SkydivingExternalForce 
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	bool bUseSkydivingVectorForce; // 0x00(0x01)

	UPROPERTY(EditAnywhere)
	FVector SkydivingVectorForce; // 0x04(0x0c)

	UPROPERTY(EditAnywhere)
	 FVector HeadToPelvisDirection; // 0x10(0x0c)

	UPROPERTY(EditAnywhere)
	 FVector FloatingMultiplier; // 0x1c(0x0c)

	UPROPERTY(EditAnywhere)
	 FVector FloatingAdditive; // 0x28(0x0c)

	UPROPERTY(EditAnywhere)
	 FVector DivingMultiplier; // 0x34(0x0c)

	UPROPERTY(EditAnywhere)
	 FVector DivingAdditive; // 0x40(0x0c)

	UPROPERTY(EditAnywhere)
	 FVector ParachutingMultiplier; // 0x4c(0x0c)

	UPROPERTY(EditAnywhere)
	 FVector ParachutingAdditive; // 0x58(0x0c)

	UPROPERTY(EditAnywhere)
	bool bUseNoisyClothGravity; // 0x64(0x01)

	UPROPERTY(EditAnywhere)
	bool bApplyNoiseInActorSpace; // 0x65(0x01)

	UPROPERTY(EditAnywhere)
	float PerlinRangedOutMinX; // 0x68(0x04)

	UPROPERTY(EditAnywhere)
	float PerlinRangedOutMaxX; // 0x6c(0x04)

	UPROPERTY(EditAnywhere)
	float PerlinRangedOutMinY; // 0x70(0x04)

	UPROPERTY(EditAnywhere)
	float PerlinRangedOutMaxY; // 0x74(0x04)

	UPROPERTY(EditAnywhere)
	float PerlinRangedOutMinZ; // 0x78(0x04)

	UPROPERTY(EditAnywhere)
	float PerlinRangedOutMaxZ; // 0x7c(0x04)
};

USTRUCT(BlueprintType)
struct FFortAnimInput_SlopeInfo 
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	 FVector RootSlopeTranslation; // 0x00(0x0c)

	UPROPERTY(EditAnywhere)
	 FVector LeftFootSlopeTranslation; // 0x0c(0x0c)

	UPROPERTY(EditAnywhere)
	 FVector RightFootSlopeTranslation; // 0x18(0x0c)

	UPROPERTY(EditAnywhere)
	 FRotator SlopeRotation; // 0x24(0x0c)
};

USTRUCT(BlueprintType)
struct FBoneSet 
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 TArray<FBoneReference> Bones; // 0x00(0x10)
};

UCLASS(BlueprintType)
class FORTNITEGAME_API UFortBaseAnimInstance : public UAnimInstance
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		TArray<UFortAnimInputEvent*> AnimInputEventList;

	UPROPERTY(EditAnywhere)
		TMap<FGameplayTag, FBoneSet> BoneSets;

	//UPROPERTY(EditAnywhere)
		//TArray<FAnimTagProperty> AnimPropertyGameplayTagBindings;
	/*
	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnGameplayTagNotifyBegin;

	UPROPERTY(EditAnywhere)
		FMulticastInlineDelegate OnGameplayTagNotifyEnd;

	UFUNCTION(Blueprintable, BlueprintCallable)
		AFortPawn* TryGetFortPawn();

	UFUNCTION(Blueprintable, BlueprintCallable)
		void BlueprintProcessAnimInputEvent(UFortAnimInputEvent* AnimInputEvent);
*/
};



UCLASS(BlueprintType)
class UFortAnimInstance : public UFortBaseAnimInstance
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		bool bUpdateAllPawnProperties;

	UPROPERTY(EditAnywhere)
		float VelocityLerpAlpha;

	UPROPERTY(EditAnywhere)
		FVector PawnVelocity;

	UPROPERTY(EditAnywhere)
		float MinSpeed2DThreshold;

	UPROPERTY(EditAnywhere)
		float PawnSpeed2D;

	UPROPERTY(EditAnywhere)
		float PawnVelocityZ;

	UPROPERTY(EditAnywhere)
		float PawnMovementDirectionAzimuth;

	UPROPERTY(EditAnywhere)
		float PawnMovementDirectionElevation;

	UPROPERTY(EditAnywhere)
		FRotator PawnRotationRate;

	UPROPERTY(EditAnywhere)
		FRotator PawnDeltaRotation;

	UPROPERTY(EditAnywhere)
		FRotator PawnLastRotation;

	UPROPERTY(EditAnywhere)
		FVector PawnLastLocation;

	UPROPERTY(EditAnywhere)
		bool bIsJumping;

	UPROPERTY(EditAnywhere)
		bool bIsFalling;

	UPROPERTY(EditAnywhere)
		bool bShouldPredictLanding;

	UPROPERTY(EditAnywhere)
		bool bLandingPredicted;

	UPROPERTY(EditAnywhere)
		float PredictedFallTimeLeft;

	UPROPERTY(EditAnywhere)
		float FallLookAheadSubStepping;

	UPROPERTY(EditAnywhere)
		int FallLookAheadMaxIterations;

	UPROPERTY(EditAnywhere)
		bool bDebugLandPrediction;

	UPROPERTY(EditAnywhere)
		bool bRecordJumpPositions;

	UPROPERTY(EditAnywhere)
		bool bIsRecordingJump;

	UPROPERTY(EditAnywhere)
		int RecordJumpFrameCount;

	UPROPERTY(EditAnywhere)
		FVector RecordJumpInitialJumpLocation;

	UPROPERTY(EditAnywhere)
		float AimPitch;

	UPROPERTY(EditAnywhere)
		float AimYaw;

	UPROPERTY(EditAnywhere)
		float TimeForRecentlyFired;

	UPROPERTY(EditAnywhere)
		float TimeToReachRelaxedLevel1;

	UPROPERTY(EditAnywhere)
		float TimeToReachRelaxedLevel2;

	UPROPERTY(EditAnywhere)
		float MinTimeAfterFiredBeforeWallRelaxed;

	UPROPERTY(EditAnywhere)
		bool bRecentlyFired;

	UPROPERTY(EditAnywhere)
		bool bIsRelaxedLevel1;

	UPROPERTY(EditAnywhere)
		bool bIsRelaxedLevel2;

	UPROPERTY(EditAnywhere)
		bool bIsWeaponLoweredNearWall;

	UPROPERTY(EditAnywhere)
		bool bExitedRelaxedThisUpdate;

	UPROPERTY(EditAnywhere)
		bool bLowerWeaponNearWallDuringTargeting;

	UPROPERTY(EditAnywhere)
		float RelaxedLevelTimeCounter;

	UPROPERTY(EditAnywhere)
		float SavedWeaponLastFireTime;

	UPROPERTY(EditAnywhere)
		EAnimRelaxedState RequestedRelaxedState;

	UPROPERTY(EditAnywhere)
		bool bClothEnabled;

	UPROPERTY(EditAnywhere)
		bool bAnimDynamicsEnabled;

	UPROPERTY(EditAnywhere)
		bool bRigidBodyEnabled;

	UPROPERTY(EditAnywhere)
		bool bEnableAdditiveLayer;
	/*
	UPROPERTY(EditAnywhere)
		char UnknownData_404_1 : 7;

	UPROPERTY(EditAnywhere)
		char UnknownData_405[0xb];

	UFUNCTION(Blueprintable, BlueprintCallable)
		AFortAIPawn* TryGetFortAIPawn();

	UFUNCTION(Blueprintable, BlueprintCallable)
		void StopMontageIncludingInactive(float InBlendOutTime, UAnimMontage* Montage);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void GetPreviousFrameAimPitchAndYaw(float OutPitch, float OutYaw);

	UFUNCTION(Blueprintable, BlueprintCallable)
		EFortCardinalDirection GetCardinalDirectionFromAngle(float Angle, float DeadZoneAngle);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void AnimNotify_RightFootStep(UAnimNotify* Notify);

	UFUNCTION(Blueprintable, BlueprintCallable)
		void AnimNotify_LeftFootStep(UAnimNotify* Notify);
*/
};


UCLASS(BlueprintType)
class UCustomCharacterPartAnimInstance : public UFortAnimInstance
{

	GENERATED_BODY()

public:

	//UPROPERTY(EditAnywhere)
		//AFortWeapon* CurrentWeapon;

	UPROPERTY(EditAnywhere)
		bool bUsesDayPhaseChange;

	UPROPERTY(EditAnywhere)
		bool bIgnoreSignificanceManagerAndAlwaysTick;

	UPROPERTY(EditAnywhere)
		bool bHideUntilFirstAnimationUpdate;

	UPROPERTY(EditAnywhere)
		bool bUnhideOnNextUpdate;

	UPROPERTY(EditAnywhere)
		bool bCanPlayCustomAnimations;

	UPROPERTY(EditAnywhere)
		bool bUpdateOwnerAnimInputProperty;

	UPROPERTY(EditAnywhere)
		bool bIsCharacterCustomizationLoaded;

	UPROPERTY(EditAnywhere)
		bool bIsSkydiving;

	UPROPERTY(EditAnywhere)
		bool bIsParachuteOpened;

	UPROPERTY(EditAnywhere)
		bool bIsSkydiveDiveMode;

	UPROPERTY(EditAnywhere)
		bool bIsSkydiveFloating;

	UPROPERTY(EditAnywhere)
		bool bIsCrouching;

	UPROPERTY(EditAnywhere)
		bool bIsSprinting;

	UPROPERTY(EditAnywhere)
		bool bIsAccelerating2D;

	UPROPERTY(EditAnywhere)
		bool bIsMoving2D;

	UPROPERTY(EditAnywhere)
		bool bIsBackpedaling;

	UPROPERTY(EditAnywhere)
		bool bIsUsingJetpack;

	UPROPERTY(EditAnywhere)
		bool bIsSlopeSliding;

	UPROPERTY(EditAnywhere)
		bool bIsSurfaceSwimming;

	UPROPERTY(EditAnywhere)
		bool bIsWaterJump;

	UPROPERTY(EditAnywhere)
		bool bIsSwimSprinting;

	UPROPERTY(EditAnywhere)
		bool bIsPlayingEmote;

	UPROPERTY(EditAnywhere)
		bool bIsPlayingMeleeAnim;

	UPROPERTY(EditAnywhere)
		bool bIsPlayingFullBodySlotInFrontEnd;

	UPROPERTY(EditAnywhere)
		bool bIsInFrontEnd;

	UPROPERTY(EditAnywhere)
		bool bIsInVehicle;

	UPROPERTY(EditAnywhere)
		bool bIsInShoppingCart;

	UPROPERTY(EditAnywhere)
		bool bIsInCannon;

	UPROPERTY(EditAnywhere)
		bool bIsTargeting;

	UPROPERTY(EditAnywhere)
		bool bIsTargetingConsumableThrow;

	UPROPERTY(EditAnywhere)
		bool bIsCrouchSprinting;

	UPROPERTY(EditAnywhere)
		bool bIsDBNO;

	UPROPERTY(EditAnywhere)
		bool bIsOnGround;

	UPROPERTY(EditAnywhere)
		bool bIsLandingPredicted;

	UPROPERTY(EditAnywhere)
		bool bIsInVehicleSeat;

	UPROPERTY(EditAnywhere)
		bool bIsFerretVehicleDriver;

	UPROPERTY(EditAnywhere)
		bool bIsFerretVehiclePassenger;

	UPROPERTY(EditAnywhere)
		bool bIsGolfCartVehicleDriver;

	UPROPERTY(EditAnywhere)
		bool bIsGolfCartVehicleFrontPassenger;

	UPROPERTY(EditAnywhere)
		bool bIsGolfCartVehicleBackPassenger;

	UPROPERTY(EditAnywhere)
		bool bIsAntelopeVehicleDriver;

	UPROPERTY(EditAnywhere)
		bool bIsAntelopeVehiclePassenger;

	UPROPERTY(EditAnywhere)
		bool bIsJackalVehicleDriver;

	UPROPERTY(EditAnywhere)
		bool bIsOctopusVehicleDriver;

	UPROPERTY(EditAnywhere)
		bool bIsOstrichVehicleDriver;

	UPROPERTY(EditAnywhere)
		bool bIsOstrichVehicleGunner;

	UPROPERTY(EditAnywhere)
		bool bIsMeatballDriver;

	UPROPERTY(EditAnywhere)
		bool bIsMeatballPassenger;

	UPROPERTY(EditAnywhere)
		bool bIsDBNOCarrying;

	UPROPERTY(EditAnywhere)
		bool bIsDBNOCarried;

	UPROPERTY(EditAnywhere)
		bool bOverrideRBANSimSpaceInFrontEnd;

	UPROPERTY(EditAnywhere)
		FGameplayTagAnimations GameplayTagAnimations;

	UPROPERTY(EditAnywhere)
		float CrouchingWithRigidBodyEnabled;

	UPROPERTY(EditAnywhere)
		int CurrentLOD;

	UPROPERTY(EditAnywhere)
		FFortAnimInput_SkydivingExternalForce SkydivingExternalForceInput;

	UPROPERTY(EditAnywhere)
		FFortAnimInput_SlopeInfo SlopeInfoInput;

	UPROPERTY(EditAnywhere)
		bool bRegisteredForDayPhaseChange;

	UPROPERTY(EditAnywhere)
		EFortCustomPartType PartType;

};