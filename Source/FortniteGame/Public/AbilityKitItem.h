#pragma once
#include "CoreMinimal.h"
#include "EFortReplenishmentType.h"
#include "AbilityKitItem.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FAbilityKitItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* Item;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Quantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortReplenishmentType::Type> Replenishment;
    
    FORTNITEGAME_API FAbilityKitItem();
};

