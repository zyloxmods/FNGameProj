// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/Data/FortWeaponItemDefinition.h"
#include "NiagaraSystem.h"
#include "GameplayTags.h"
#include "Components/SceneComponent.h"
#include "FortWeaponAdditionalData.h"
#include "FortWeaponMeleeItemDefinition.generated.h"


USTRUCT(BlueprintType)
struct FORTNITEGAME_API FAttachedParticleComponentDef
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	FTransform Transform; 

	UPROPERTY(EditAnywhere)
	FName ParentSocket;

	UPROPERTY(EditAnywhere)
	TSoftObjectPtr<UParticleSystem> Template; 

	UPROPERTY(EditAnywhere)
		TEnumAsByte<EDetailMode> DetailMode;
};

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FMarshalledVFXData
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FGameplayTagContainer ParameterGroups;

	UPROPERTY(EditAnywhere)
		EFXType Type;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UFXSystemAsset> Asset;

	UPROPERTY(EditAnywhere)
		FName AttachAtBone;

	UPROPERTY(EditAnywhere)
		FTransform RelativeOffset;

	UPROPERTY(EditAnywhere)
		FGameplayTag EffectIdTag;

	UPROPERTY(EditAnywhere)
		bool bAutoActivate;

};

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FParameterNameMapping
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 FName CascadeName; 

	UPROPERTY(EditAnywhere)
	 FName NiagaraName;
};

USTRUCT(BlueprintType)
struct FMarshalledVFXAuthoredData 
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	 TArray<FMarshalledVFXData> NiagaraVFX; 

	UPROPERTY(EditAnywhere)
	 TArray<FMarshalledVFXData> CascadeVFX; 

	UPROPERTY(EditAnywhere)
	 TMap<FName, FParameterNameMapping> NameReplacements;
};


UCLASS(BlueprintType)
class UMarshalledVFX_AuthoredDataConfig : public UObject
{

	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
		FMarshalledVFXAuthoredData Data;

};
UCLASS(BlueprintType)
class FORTNITEGAME_API UFortWeaponMeleeItemDefinition : public UFortWeaponItemDefinition
{
	GENERATED_BODY()
	

public:

	UPROPERTY(EditAnywhere)
		UMarshalledVFX_AuthoredDataConfig* ManagedVFX_Defaults;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> IdleEffect;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UNiagaraSystem> IdleEffectNiagara;

	UPROPERTY(EditAnywhere)
		FName IdleFXSocketName;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> SwingEffect;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UNiagaraSystem> SwingEffectNiagara;

	UPROPERTY(EditAnywhere)
		FName SwingFXSocketName;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UParticleSystem> AnimTrails;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UNiagaraSystem> AnimTrailsNiagara;

	UPROPERTY(EditAnywhere)
		FName NiagaraSkeletonDIVariableName;

	UPROPERTY(EditAnywhere)
		FName AnimTrailsFirstSocketName;

	UPROPERTY(EditAnywhere)
		FName AnimTrailsSecondSocketName;

	UPROPERTY(EditAnywhere)
		float AnimTrailsWidth;

	UPROPERTY(EditAnywhere)
		bool bUseAnimTrails;

	UPROPERTY(EditAnywhere)
		bool bAttachAnimTrailsToWeapon;

	UPROPERTY(EditAnywhere)
		TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<UParticleSystem>> ImpactPhysicalSurfaceEffectsMap;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UNiagaraSystem>> ImpactNiagaraPhysicalSurfaceEffects;

	UPROPERTY(EditAnywhere)
		TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<UNiagaraSystem>> ImpactNiagaraPhysicalSurfaceEffectsMap;

	UPROPERTY(EditAnywhere)
		TArray<FAttachedParticleComponentDef> ParticleComponentsDefs;

	UPROPERTY(EditAnywhere)
		TArray<TSoftObjectPtr<UMaterialInterface>> WeaponMaterialOverrides;

	UPROPERTY(EditAnywhere)
		UClass* AnimClass;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<UAnimationAsset> SingleAnimationToPlay;

	UPROPERTY(EditAnywhere)
		TMap<TEnumAsByte<EPhysicalSurface>, TSoftObjectPtr<USoundBase>> ImpactPhysicalSurfaceSoundsMap;

	UPROPERTY(EditAnywhere)
		TMap<EFortReloadFXState, TSoftObjectPtr<USoundBase>> ReloadSoundsMap;

	UPROPERTY(EditAnywhere)
		TMap<EFortWeaponSoundState, TSoftObjectPtr<USoundBase>> PrimaryFireSoundMap;

	UPROPERTY(EditAnywhere)
		TSoftObjectPtr<USoundBase> GenericImpactSound;

	UPROPERTY(EditAnywhere)
		bool bNeedsMaterial0MID;

	UPROPERTY(EditAnywhere)
		bool bWatchKills;

	UPROPERTY(EditAnywhere)
		bool bCandyCaneKillReaction;
};
