#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaSpectatorInventorySlotBase.generated.h"

class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorInventorySlotBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UAthenaSpectatorInventorySlotBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetItem(const UFortItem* Item);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetIsSelected(bool bIsSelected);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    UFortItem* GetItem() const;
    
};

