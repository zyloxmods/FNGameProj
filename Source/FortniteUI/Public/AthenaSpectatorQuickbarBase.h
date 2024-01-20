#pragma once
#include "CoreMinimal.h"
#include "EFortQuickBars.h"
#include "FortHUDElementWidget.h"
#include "AthenaSpectatorQuickbarBase.generated.h"

class UAthenaSpectatorInventorySlotBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorQuickbarBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSpectatorInventorySlotBase*> ItemSlots;
    
public:
    UAthenaSpectatorQuickbarBase();
private:
    UFUNCTION(BlueprintCallable)
    void OnQuickbarSlotFocusChanged(EFortQuickBars QuickbarIndex, int32 FocusedSlotIdx);
    
    UFUNCTION(BlueprintCallable)
    void OnQuickbarContentsChanged(EFortQuickBars QuickbarIndex, const TArray<int32>& ChangedSlots);
    
};

