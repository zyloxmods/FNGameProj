#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "DigestedBotEquipWeaponInfo.h"
#include "FortAthenaAIBotDigestedSkillSet.h"
#include "FortAthenaAIBotInventoryDigestedSkillSet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortAthenaAIBotInventoryDigestedSkillSet : public UFortAthenaAIBotDigestedSkillSet {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultWeaponSelectionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float DefaultWeaponSelectionDistanceDeviation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasInfiniteResources;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InventorySlotPreference[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FDigestedBotEquipWeaponInfo> EquipWeaponInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer InfiniteAmmoCheats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer CheckLoadedAmmoForInfiniteAmmoCheats;
    
public:
    UFortAthenaAIBotInventoryDigestedSkillSet();
};

