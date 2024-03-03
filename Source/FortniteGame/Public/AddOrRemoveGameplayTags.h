#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "AddOrRemoveGameplayTags.generated.h"

USTRUCT(BlueprintType)
struct FAddOrRemoveGameplayTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Added;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer Removed;
    
    FORTNITEGAME_API FAddOrRemoveGameplayTags();
};

