#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "TimerDisplayData.generated.h"

USTRUCT(BlueprintType)
struct FTimerDisplayData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor BrushColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TimeRemainingDisplayText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor TextColor;
    
    FORTNITEUI_API FTimerDisplayData();
};

