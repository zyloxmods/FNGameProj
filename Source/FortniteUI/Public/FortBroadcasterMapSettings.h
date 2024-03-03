#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortBroadcasterMapSettings.generated.h"

class UCommonUserWidget;
class UFortSpectateClickableMapIcon;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBroadcasterMapSettings : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* PlayerIndicatorsRotator;
    
public:
    UFortBroadcasterMapSettings();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleMapIconAdded(UFortSpectateClickableMapIcon* MapIcon);
    
};

