#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "WeaponPickupAmmoCountData.generated.h"

USTRUCT(BlueprintType)
struct FWeaponPickupAmmoCountData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag AmmoItemDefinitionTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat SpawnCount;
    
    FORTNITEGAME_API FWeaponPickupAmmoCountData();
};

