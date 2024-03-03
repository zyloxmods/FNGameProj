#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortPrivateAccountInfo.h"
#include "FortSimpleMTXDisplay.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortSimpleMTXDisplay : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortSimpleMTXDisplay();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateAvailableMTX(int32 AvailableBalance);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleLocalAccountInfoChanged(FFortPrivateAccountInfo NewInfo);
    
};

