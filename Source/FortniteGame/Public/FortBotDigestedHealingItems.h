#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortBotDigestedHealingItems.generated.h"

USTRUCT(BlueprintType)
struct FFortBotDigestedHealingItems {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float UseItemResourceThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ItemTags;
    
public:
    FORTNITEGAME_API FFortBotDigestedHealingItems();
};

