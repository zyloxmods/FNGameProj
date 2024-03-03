#pragma once
#include "CoreMinimal.h"
#include "PropertyOverrideData.h"
#include "MinigameItemData.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FMinigameItemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWorldItemDefinition> ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    int32 ItemQuantity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, SaveGame, meta=(AllowPrivateAccess=true))
    FPropertyOverrideData ItemOptionData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 TrackedIndex;
    
    FORTNITEGAME_API FMinigameItemData();
};

