#pragma once
#include "CoreMinimal.h"
#include "FortItemPickerBase.h"
#include "FortTrapDefenderItemPicker.generated.h"

class ABuildingTrapDefender;
class UFortItem;
class UFortItemDetailsHostPanel;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTrapDefenderItemPicker : public UFortItemPickerBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemDetailsHostPanel* DetailsPanel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<ABuildingTrapDefender> DefenderTrap;
    
public:
    UFortTrapDefenderItemPicker();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSelectionCommittedBP(UFortItem* CommittedItem);
    
};

