#pragma once
#include "CoreMinimal.h"
#include "HomebaseSquadSlotId.h"
#include "EFortSquadSlottingRestrictionReason.h"
#include "FortItemTileButton.h"
#include "FortSquadSlotItemPickerTileButton.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSquadSlotItemPickerTileButton : public UFortItemTileButton {
    GENERATED_BODY()
public:
    UFortSquadSlotItemPickerTileButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleSlottingRestrictionReasonsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleItemSlottedToDifferentSquad(const FHomebaseSquadSlotId& SquadSlotId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<EFortSquadSlottingRestrictionReason> GetSlottingRestrictionReasons() const;
    
};

