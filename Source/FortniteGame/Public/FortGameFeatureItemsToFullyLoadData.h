#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortGameFeatureItemsToFullyLoadData.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortGameFeatureItemsToFullyLoadData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer PlaylistTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItemDefinition*> ItemsToFullyLoad;
    
    FORTNITEGAME_API FFortGameFeatureItemsToFullyLoadData();
};

