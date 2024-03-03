#pragma once
#include "CoreMinimal.h"
#include "FortItemDetailsHostPanel.h"
#include "FortSquadSlotItemDetailsHostPanel.generated.h"

class UFortItem;
class ULocalPlayer;

UCLASS(Blueprintable, EditInlineNew)
class UFortSquadSlotItemDetailsHostPanel : public UFortItemDetailsHostPanel {
    GENERATED_BODY()
public:
    UFortSquadSlotItemDetailsHostPanel();
    UFUNCTION(BlueprintCallable)
    void SetIdOfSquadSlotToManageBP(const FName SquadId, const int32 SquadSlotIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsSquadSlotLockedBP() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortItem* GetItemInSquadSlotBP(const ULocalPlayer* LocalPlayer) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetIdOfSquadSlotToManageBP(FName OutSquadId, int32& OutSquadSlotIndex) const;
    
};

