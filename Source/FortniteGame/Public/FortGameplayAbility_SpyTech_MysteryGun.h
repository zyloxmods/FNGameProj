#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameplayAbility_SpyTech_GrantItem.h"
#include "FortGameplayAbility_SpyTech_MysteryGun.generated.h"

class UFortWorldItemDefinition;

UCLASS(Blueprintable)
class UFortGameplayAbility_SpyTech_MysteryGun : public UFortGameplayAbility_SpyTech_GrantItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItemDefinition* LastGrantedItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StarterPistolTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag WeaponTag;
    
public:
    UFortGameplayAbility_SpyTech_MysteryGun();
};

