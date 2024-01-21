// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTags.h"
#include "FortDataTables.generated.h"

/**
 * 
 */
UCLASS()
class FORTNITEGAME_API UFortDataTables : public UDataTable
{
	GENERATED_BODY()
	
};

USTRUCT()
struct FORTNITEGAME_API FTransmogSacrifice : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		int TransmogSacrificePoints = 0;
};

USTRUCT()
struct FCosmeticSetDataRow : public FTableRowBase
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere)
	FGameplayTag Tag;

	UPROPERTY(EditAnywhere)
	FText DisplayName;

	UPROPERTY(EditAnywhere)
	FText Description;
};


USTRUCT()
struct FCosmeticMarkupTagDataRow : public FTableRowBase
{
	GENERATED_BODY()
	
public:
	
	UPROPERTY(EditAnywhere)
	FGameplayTag Tag;

	UPROPERTY(EditAnywhere)
	FText DisplayName;

	UPROPERTY(EditAnywhere)
	FText HelpText;
};

USTRUCT()
struct FCosmeticFilterTagDataRow : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 TArray<FText> SearchQueries;
};

USTRUCT()
struct FHomebaseBannerCategoryData : public FTableRowBase 
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FText CategoryDisplayName; 

	UPROPERTY(EditAnywhere)
	int SortPriority = 0;

};
USTRUCT()
struct FHomebaseBannerColor 
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	FLinearColor PrimaryColor;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
	FLinearColor SecondaryColor;
};

USTRUCT()
struct FHomebaseBannerColorData : public FTableRowBase 
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FName ColorKeyName; 

	UPROPERTY(EditAnywhere)
	 FName CategoryRowName; 

	UPROPERTY(EditAnywhere)
	int SubCategoryGroup = 0;

};

UCLASS()
class UFortHomebaseBannerColorMap : public UDataAsset 
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TMap<FName, FHomebaseBannerColor> ColorMap;
};

USTRUCT()
struct FORTNITEGAME_API FFortPawnStats : public FTableRowBase
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MaximumHealth;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SpeedWalk;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SpeedRun;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SpeedSprint;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SpeedCrouchedRun;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SpeedCrouchedSprint;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SpeedBackwardsMultiplier;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SpeedDBNO;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AccelerationStrafeMultiplierSprint;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		class UCurveTable* FallingDamageTable;

	UPROPERTY(EditAnywhere)
		FName                                       FallingDamageTableRow;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HealthRegenRate;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HealthRegenDelay;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HealthRegenThreshold;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MaxShield;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ShieldRegenRate;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ShieldRegenDelay;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ShieldRegenThreshold;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MaxControlResistance;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ControlResistanceRegenRate;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ControlResistanceRegenDelay;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              KnockbackMultiplier;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              KnockbackThreshold;
};

USTRUCT()
struct FORTNITEGAME_API FFortPlayerPawnStats : public FFortPawnStats
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float MaxJumpTime;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float MaxStamina;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float StaminaRegenRate;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float StaminaRegenDelay;

	UPROPERTY(EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float SprintingStaminaExpenditureRate;
};

USTRUCT(BlueprintType)
struct FFortBaseWeaponStats : public FTableRowBase
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                BaseLevel = 0;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       NamedWeightRow;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DmgPB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DmgMid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DmgLong;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DmgMaxRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              EnvDmgPB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              EnvDmgMid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              EnvDmgLong;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              EnvDmgMaxRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ImpactDmgPB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ImpactDmgMid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ImpactDmgLong;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ImpactDmgMaxRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		bool                                               bForceControl;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RngPB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RngMid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RngLong;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RngMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		class UCurveTable* DmgScaleTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       DmgScaleTableRow;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DmgScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		class UCurveTable* EnvDmgScaleTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       EnvDmgScaleTableRow;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              EnvDmgScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		class UCurveTable* ImpactDmgScaleTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		FName                                       ImpactDmgScaleTableRow;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ImpactDmgScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       SurfaceRatioRowName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DamageZone_Light;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DamageZone_Normal;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DamageZone_Critical;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DamageZone_Vulnerability;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              KnockbackMagnitude;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MidRangeKnockbackMagnitude;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              LongRangeKnockbackMagnitude;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              KnockbackZAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              StunTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              StunScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		class UDataTable* Durability;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		FName                                       DurabilityRowName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DurabilityScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DurabilityPerUse;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DiceCritChance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              DiceCritDamageMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ReloadTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ReloadScale;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
		//EFortWeaponReloadType                              ReloadType;                               

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		bool                                               bReloadInterruptIsImmediate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		int                                                ClipSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ClipScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		int                                                InitialClips;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		int                                                CartridgePerFire;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		int                                                AmmoCostPerFire;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		int                                                MaxAmmoCostPerFire;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MinChargeTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MaxChargeTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ChargeDownTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MinChargeDamageMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MaxChargeDamageMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              EquipAnimRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              QuickBarSlotCooldownDuration;
};

USTRUCT(BlueprintType)
struct FFortMeleeWeaponStats : public FFortBaseWeaponStats
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RangeVSEnemies;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ConeYawAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ConePitchAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SwingPlaySpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SwingTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              BuildingConeAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              BuildingConeAnglePitch;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RangeVSBuildings2D;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RangeVSBuildingsZ;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RangeVSWeakSpots;
};

USTRUCT(BlueprintType)
struct FFortRangedWeaponStats : public FFortBaseWeaponStats
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              Spread;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SpreadDownsights;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              StandingStillSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaCrouchingSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaJumpingFallingSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaSprintingSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MinSpeedForSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MaxSpeedForSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SpreadDownsightsAdditionalCooldownTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HeatX1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HeatY1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HeatX2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HeatY2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HeatX3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HeatY3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HeatXScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              HeatYScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              CoolX1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              CoolY1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              CoolX2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              CoolY2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              CoolX3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              CoolY3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              CoolXScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              CoolYScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		int                                                BulletsPerCartridge;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              FiringRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ROFScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              BurstFiringRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilVert;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilVertScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilVertScaleGamepad;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              VertRecoilDownChance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilHoriz;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilHorizScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilHorizScaleGamepad;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilInterpSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilRecoveryInterpSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilRecoveryDelay;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilRecoveryFraction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              RecoilDownsightsMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilMagnitudeMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilMagnitudeMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilMagnitudeScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilAngleMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilAngleMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilRollMagnitudeMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilRollMagnitudeMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilInterpSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilRecoveryInterpSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilDownsightsMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaRecoilHipFireMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AthenaAimAssistRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ADSTransitionInTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              ADSTransitionOutTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		int                                                MaxSpareAmmo;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		int                                                BulletsPerTracer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AIDelayBeforeFiringMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AIDelayBeforeFiringMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AIFireDurationMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AIFireDurationMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AIMinSpreadDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AIMaxSpreadDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AIDurationSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AIAdditionalSpreadForTargetMovingLaterally;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              EQSDensity;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MinApproachRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MinActualRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MinPreferredRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MinPreferredRangeEQS;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MaxPreferredRangeEQS;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MaxPreferredRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MaxActualRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              MaxApproachRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              SweepRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (IgnoreForMemberInitializationTest))
		float                                              AutoReloadDelayOverride;
};

USTRUCT(BlueprintType)
struct FFortLootLevelData : public FTableRowBase
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName                                       Category;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                LootLevel = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                MinItemLevel = 0;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                MaxItemLevel = 0;
};