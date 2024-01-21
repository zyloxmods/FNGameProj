#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortToggledCursorModeParams.generated.h"

class AFortPlayerController;
class UFortToggledCursorModeParams;

UCLASS(Blueprintable)
class UFortToggledCursorModeParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerThatToggledCursorMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInCursorMode;
    
    UFortToggledCursorModeParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerController* _PlayerThatToggledCursorMode, bool InCursorMode, UFortToggledCursorModeParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerController*& _PlayerThatToggledCursorMode, bool& InCursorMode);
    
};

