#pragma once
#include "CoreMinimal.h"
#include "ECalendarDrivenState.h"
#include "RandomUpgradeCalendarData.generated.h"

USTRUCT(BlueprintType)
struct FRandomUpgradeCalendarData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECalendarDrivenState ReactionWhenEventIsPresent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString EventName;
    
    FORTNITEGAME_API FRandomUpgradeCalendarData();
};

