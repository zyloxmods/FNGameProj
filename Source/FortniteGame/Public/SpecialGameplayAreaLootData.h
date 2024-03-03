#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "SpecialGameplayAreaLootData.generated.h"

USTRUCT(BlueprintType)
struct FSpecialGameplayAreaLootData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag LootSourceTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LootTierGroup;
    
    FORTNITEGAME_API FSpecialGameplayAreaLootData();
};

