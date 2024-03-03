#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortSpectatorRebootWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSpectatorRebootWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStateAthena* PlayerState;
    
public:
    UFortSpectatorRebootWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResurrectionStateChanged();
    
};

