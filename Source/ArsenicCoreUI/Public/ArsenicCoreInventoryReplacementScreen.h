#pragma once
#include "CoreMinimal.h"
#include "EArsenicCorePlayerStatus.h"
#include "ArsenicCoreActivatablePanelBase.h"
#include "ArsenicCoreInventoryReplacementScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class ARSENICCOREUI_API UArsenicCoreInventoryReplacementScreen : public UArsenicCoreActivatablePanelBase {
    GENERATED_BODY()
public:
    UArsenicCoreInventoryReplacementScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOwningPlayerStatusChanged(EArsenicCorePlayerStatus NewStatus);
    
};

