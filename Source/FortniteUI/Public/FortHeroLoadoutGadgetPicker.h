#pragma once
#include "CoreMinimal.h"
#include "FortItemPickerBase.h"
#include "FortHeroLoadoutGadgetPicker.generated.h"

class UFortCampaignHeroLoadoutItem;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHeroLoadoutGadgetPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortCampaignHeroLoadoutItem> TargetLoadoutItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetSlotIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortItem*> TemporaryGadgetItemInstances;
    
public:
    UFortHeroLoadoutGadgetPicker();
    UFUNCTION(BlueprintCallable)
    void SetTargetLoadoutSlot(const UFortCampaignHeroLoadoutItem* LoadoutItem, const int32 SlotIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleDifferentTargetLoadoutSlotSetBP();
    
};

