#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "NavIndicatorTextList.generated.h"

USTRUCT(BlueprintType)
struct FNavIndicatorTextList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ListName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> IndicatorTextList;
    
    FORTNITEGAME_API FNavIndicatorTextList();
};

