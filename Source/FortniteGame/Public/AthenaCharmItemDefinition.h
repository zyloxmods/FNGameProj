#pragma once
#include "CoreMinimal.h"
#include "AthenaCosmeticItemDefinition.h"
#include "CharmSoundAssetEntry.h"
#include "Templates/SubclassOf.h"
#include "AthenaCharmItemDefinition.generated.h"

class ACustomCosmeticCharmModifier;
class AFortPlayerCharm;
class UAnimInstance;
class USkeletalMesh;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaCharmItemDefinition : public UAthenaCosmeticItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ACustomCosmeticCharmModifier> CharmModifierBlueprint;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortPlayerCharm> CharmPrefabClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<USkeletalMesh> SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> AnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UAnimInstance> WeaponAnimClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCharmSoundAssetEntry> CharmSounds;
    
public:
    UAthenaCharmItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UAnimInstance> GetOverrideWeaponAnimSetPtr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftObjectPtr<USkeletalMesh> GetOverrideSkelMeshPtr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UAnimInstance> GetOverrideAnimSetPtrForCharmSlot(const int32 CharmSlotIn) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSoftClassPtr<UAnimInstance> GetOverrideAnimSetPtr() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TSubclassOf<AFortPlayerCharm> GetCharmPrefabClass() const;
    
};

