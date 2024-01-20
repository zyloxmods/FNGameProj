#pragma once
#include "CoreMinimal.h"
#include "EDiscoCaptureUIState.h"
#include "DiscoCaptureUIData.generated.h"

class AAthenaCapturePoint;
class AFortPlayerPawnAthena;
class UMaterialInstanceDynamic;

USTRUCT(BlueprintType)
struct FDiscoCaptureUIData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDiscoCaptureUIState CurrDisplayState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaCapturePoint* CapturePoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* CurrPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInstanceDynamic* CurrMID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FillAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayText;
    
    FORTNITEUI_API FDiscoCaptureUIData();
};

