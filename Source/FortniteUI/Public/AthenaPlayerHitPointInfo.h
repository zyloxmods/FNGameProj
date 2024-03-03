#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaPlayerHitPointInfo.generated.h"

class UOverlay;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaPlayerHitPointInfo : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_LocalPlayerExtensions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLargeFormat;
    
public:
    UAthenaPlayerHitPointInfo();
private:
    UFUNCTION(BlueprintCallable)
    void HandleTetherChanged(bool bTethered);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleExitVehicle();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleEnterVehicle();
    
};

