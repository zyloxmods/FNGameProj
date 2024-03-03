#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "AthenaSpectatorTrapsLoadoutBase.generated.h"

class UAthenaSpectatorInventorySlotBase;
class UFortWorldItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaSpectatorTrapsLoadoutBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UAthenaSpectatorInventorySlotBase*> ItemSlots;
    
public:
    UAthenaSpectatorTrapsLoadoutBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelectSlot(int32 SlotIdx);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnWorldItemListChanged(const TArray<UFortWorldItem*>& ItemsAdded, const TArray<UFortWorldItem*>& ItemsRemoved);
    
};

