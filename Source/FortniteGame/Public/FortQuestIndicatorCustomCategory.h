#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortQuestIndicatorCustomCategory.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestIndicatorCustomCategory {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag CategoryTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AllChallengesText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    FORTNITEGAME_API FFortQuestIndicatorCustomCategory();
};

