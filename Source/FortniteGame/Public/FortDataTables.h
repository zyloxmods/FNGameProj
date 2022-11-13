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

	UPROPERTY(EditAnywhere)
		int TransmogSacrificePoints;
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
	int SortPriority;

};
USTRUCT()
struct FHomebaseBannerColor 
{

	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere)
	FLinearColor PrimaryColor;

	UPROPERTY(EditAnywhere)
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
	int SubCategoryGroup;

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

	UPROPERTY(EditAnywhere)
		float                                              MaximumHealth;

	UPROPERTY(EditAnywhere)
		float                                              SpeedWalk;

	UPROPERTY(EditAnywhere)
		float                                              SpeedRun;

	UPROPERTY(EditAnywhere)
		float                                              SpeedSprint;

	UPROPERTY(EditAnywhere)
		float                                              SpeedCrouchedRun;

	UPROPERTY(EditAnywhere)
		float                                              SpeedCrouchedSprint;

	UPROPERTY(EditAnywhere)
		float                                              SpeedBackwardsMultiplier;

	UPROPERTY(EditAnywhere)
		float                                              SpeedDBNO;

	UPROPERTY(EditAnywhere)
		float                                              AccelerationStrafeMultiplierSprint;

	UPROPERTY(EditAnywhere)
		class UCurveTable* FallingDamageTable;

	UPROPERTY(EditAnywhere)
		FName                                       FallingDamageTableRow;

	UPROPERTY(EditAnywhere)
		float                                              HealthRegenRate;

	UPROPERTY(EditAnywhere)
		float                                              HealthRegenDelay;

	UPROPERTY(EditAnywhere)
		float                                              HealthRegenThreshold;

	UPROPERTY(EditAnywhere)
		float                                              MaxShield;

	UPROPERTY(EditAnywhere)
		float                                              ShieldRegenRate;

	UPROPERTY(EditAnywhere)
		float                                              ShieldRegenDelay;

	UPROPERTY(EditAnywhere)
		float                                              ShieldRegenThreshold;

	UPROPERTY(EditAnywhere)
		float                                              MaxControlResistance;

	UPROPERTY(EditAnywhere)
		float                                              ControlResistanceRegenRate;

	UPROPERTY(EditAnywhere)
		float                                              ControlResistanceRegenDelay;

	UPROPERTY(EditAnywhere)
		float                                              KnockbackMultiplier;

	UPROPERTY(EditAnywhere)
		float                                              KnockbackThreshold;
};

USTRUCT()
struct FORTNITEGAME_API FFortPlayerPawnStats : public FFortPawnStats
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		float MaxJumpTime;

	UPROPERTY(EditAnywhere)
		float MaxStamina;

	UPROPERTY(EditAnywhere)
		float StaminaRegenRate;

	UPROPERTY(EditAnywhere)
		float StaminaRegenDelay;

	UPROPERTY(EditAnywhere)
		float SprintingStaminaExpenditureRate;
};

USTRUCT(BlueprintType)
struct FFortBaseWeaponStats : public FTableRowBase
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                BaseLevel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       NamedWeightRow;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DmgPB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DmgMid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DmgLong;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DmgMaxRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              EnvDmgPB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              EnvDmgMid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              EnvDmgLong;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              EnvDmgMaxRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ImpactDmgPB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ImpactDmgMid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ImpactDmgLong;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ImpactDmgMaxRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bForceControl;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RngPB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RngMid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RngLong;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RngMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UCurveTable* DmgScaleTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       DmgScaleTableRow;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DmgScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UCurveTable* EnvDmgScaleTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       EnvDmgScaleTableRow;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              EnvDmgScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UCurveTable* ImpactDmgScaleTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       ImpactDmgScaleTableRow;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ImpactDmgScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       SurfaceRatioRowName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DamageZone_Light;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DamageZone_Normal;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DamageZone_Critical;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DamageZone_Vulnerability;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              KnockbackMagnitude;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MidRangeKnockbackMagnitude;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              LongRangeKnockbackMagnitude;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              KnockbackZAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              StunTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              StunScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		class UDataTable* Durability;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		FName                                       DurabilityRowName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DurabilityScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DurabilityPerUse;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DiceCritChance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              DiceCritDamageMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ReloadTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ReloadScale;

	//UPROPERTY(BlueprintReadWrite, EditAnywhere)
		//EFortWeaponReloadType                              ReloadType;                               

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool                                               bReloadInterruptIsImmediate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                ClipSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ClipScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                InitialClips;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                CartridgePerFire;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                AmmoCostPerFire;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                MaxAmmoCostPerFire;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MinChargeTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxChargeTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ChargeDownTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MinChargeDamageMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxChargeDamageMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              EquipAnimRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              QuickBarSlotCooldownDuration;
};

USTRUCT(BlueprintType)
struct FFortMeleeWeaponStats : public FFortBaseWeaponStats
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RangeVSEnemies;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ConeYawAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ConePitchAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              SwingPlaySpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              SwingTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              BuildingConeAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              BuildingConeAnglePitch;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RangeVSBuildings2D;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RangeVSBuildingsZ;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RangeVSWeakSpots;
};

USTRUCT(BlueprintType)
struct FFortRangedWeaponStats : public FFortBaseWeaponStats
{
	GENERATED_BODY()

		UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              Spread;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              SpreadDownsights;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              StandingStillSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaCrouchingSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaJumpingFallingSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaSprintingSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MinSpeedForSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxSpeedForSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              SpreadDownsightsAdditionalCooldownTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              HeatX1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              HeatY1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              HeatX2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              HeatY2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              HeatX3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              HeatY3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              HeatXScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              HeatYScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CoolX1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CoolY1;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CoolX2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CoolY2;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CoolX3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CoolY3;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CoolXScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              CoolYScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                BulletsPerCartridge;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              FiringRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ROFScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              BurstFiringRate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilVert;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilVertScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilVertScaleGamepad;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              VertRecoilDownChance;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilHoriz;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilHorizScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilHorizScaleGamepad;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilInterpSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilRecoveryInterpSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilRecoveryDelay;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilRecoveryFraction;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              RecoilDownsightsMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilMagnitudeMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilMagnitudeMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilMagnitudeScale;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilAngleMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilAngleMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilRollMagnitudeMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilRollMagnitudeMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilInterpSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilRecoveryInterpSpeed;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilDownsightsMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaRecoilHipFireMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AthenaAimAssistRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ADSTransitionInTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              ADSTransitionOutTime;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                MaxSpareAmmo;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int                                                BulletsPerTracer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AIDelayBeforeFiringMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AIDelayBeforeFiringMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AIFireDurationMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AIFireDurationMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AIMinSpreadDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AIMaxSpreadDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AIDurationSpreadMultiplier;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AIAdditionalSpreadForTargetMovingLaterally;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              EQSDensity;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MinApproachRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MinActualRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MinPreferredRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MinPreferredRangeEQS;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxPreferredRangeEQS;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxPreferredRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxActualRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              MaxApproachRange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              SweepRadius;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		float                                              AutoReloadDelayOverride;
};

USTRUCT(BlueprintType)
struct FFortLootLevelData : public FTableRowBase
{
	GENERATED_BODY()

		UPROPERTY(EditAnywhere, BlueprintReadWrite)
		FName                                       Category;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                LootLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                MinItemLevel;
	UPROPERTY(EditAnywhere, BlueprintReadWrite)
		int                                                MaxItemLevel;
};