#pragma once
#include "CoreMinimal.h"
#include "FortDialogExternalLatentActionHandle.h"
#include "FortItemPickerBase.h"
#include "FortCollectionBookPicker.generated.h"

class UFortAccountItem;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
    DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOnSlotItemConfirmed, UFortItem*, ItemToSlot, FName, SlotId, FFortDialogExternalLatentActionHandle, LatentActionHandle);
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnSlotItemConfirmed OnSlotItemConfirmationCompleteEvent;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAccountItem* CurrentSlottedItem;
    
public:
    UFortCollectionBookPicker();
protected:
    UFUNCTION(BlueprintCallable)
    void SlotItemConfirmationComplete(UFortItem* CommittedItem, FFortDialogExternalLatentActionHandle LatentActionHandle);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItem* GetCurrentSlottedItem() const;
    
};

