#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "MinimapGoalByTagColorsData.generated.h"

USTRUCT(BlueprintType)
struct FMinimapGoalByTagColorsData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer GoalTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor MinimapColor;
    
    FORTNITEGAME_API FMinimapGoalByTagColorsData();
};

