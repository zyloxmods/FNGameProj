#pragma once
#include "CoreMinimal.h"
#include "FortItemDetailElementWidget.h"
#include "FortSquadSlotItemDetailElementWidget.generated.h"

class UFortItem;
class ULocalPlayer;

UCLASS(Blueprintable, EditInlineNew)
class UFortSquadSlotItemDetailElementWidget : public UFortItemDetailElementWidget {
    GENERATED_BODY()
public:
    UFortSquadSlotItemDetailElementWidget();
    UFUNCTION(BlueprintCallable)
    void SetIdOfSquadSlotToManageBP(const FName SquadId, const int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadSlotLockedBP() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePostDifferentSquadSlotSetBP();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemInSquadSlotBP(const ULocalPlayer* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIdOfSquadSlotToManageBP(FName OutSquadId, int32& OutSquadSlotIndex) const;
    
};

