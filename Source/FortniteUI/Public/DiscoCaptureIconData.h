#pragma once
#include "CoreMinimal.h"
#include "EDiscoCaptureIconState.h"
#include "EDiscoCaptureProgressState.h"
#include "DiscoCaptureIconData.generated.h"

class AAthenaCapturePoint;

USTRUCT(BlueprintType)
struct FDiscoCaptureIconData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscoCaptureIconState CurrIconState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscoCaptureProgressState CurrProgressState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CurrCapturePercent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaCapturePoint* CapturePoint;
    
    FORTNITEUI_API FDiscoCaptureIconData();
};

