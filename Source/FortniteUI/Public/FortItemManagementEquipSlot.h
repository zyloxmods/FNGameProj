#pragma once
#include "CoreMinimal.h"
#include "FortUserWidget.h"
#include "FortItemManagementEquipSlot.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortItemManagementEquipSlot : public UFortUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SlotIndex;
    
    UFortItemManagementEquipSlot();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateInventoryChangedDelegate();
    
};

