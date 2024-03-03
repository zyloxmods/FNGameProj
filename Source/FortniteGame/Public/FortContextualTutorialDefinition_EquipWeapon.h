#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortContextualTutorialDefinition.h"
#include "FortContextualTutorialDefinition_EquipWeapon.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorialDefinition_EquipWeapon : public UFortContextualTutorialDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponItemTag;
    
public:
    UFortContextualTutorialDefinition_EquipWeapon();
};

