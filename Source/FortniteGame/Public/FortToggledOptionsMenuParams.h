#pragma once
#include "CoreMinimal.h"
#include "FortMissionEventParams.h"
#include "FortToggledOptionsMenuParams.generated.h"

class AFortPlayerController;
class UFortToggledOptionsMenuParams;

UCLASS(Blueprintable)
class UFortToggledOptionsMenuParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortPlayerController* PlayerThatToggledOptionsMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInOptionsMenu;
    
    UFortToggledOptionsMenuParams();
    UFUNCTION(BlueprintCallable)
    void SetParams(AFortPlayerController* _PlayerThatToggledOptionsMenu, bool Opened, UFortToggledOptionsMenuParams*& ThisParam);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BreakParams(AFortPlayerController*& _PlayerThatToggledOptionsMenu, bool& Opened);
    
};

