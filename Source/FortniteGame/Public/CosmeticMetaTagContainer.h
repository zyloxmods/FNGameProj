#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "CosmeticMetaTagContainer.generated.h"

USTRUCT(BlueprintType)
struct FCosmeticMetaTagContainer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MetaTagsToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer MetaTagsToRemove;
    
    FORTNITEGAME_API FCosmeticMetaTagContainer();
};

