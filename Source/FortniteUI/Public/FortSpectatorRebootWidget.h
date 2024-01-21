#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortSpectatorRebootWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSpectatorRebootWidget : public UCommonUserWidget {
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

