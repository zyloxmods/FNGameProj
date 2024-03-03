#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortQuickbarBase.generated.h"

class UFortQuickBarSlotBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortQuickbarBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UFortQuickbarBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShouldShowBothQuickbarsChanged(bool bShouldShowBothQuickbars);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFortQuickBarSlotBase* GetSpecificSlot(int32 SlotNumber);
    
};

