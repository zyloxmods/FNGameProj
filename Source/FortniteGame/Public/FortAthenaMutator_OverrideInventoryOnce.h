#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator_InventoryOverride.h"
#include "FortAthenaMutator_OverrideInventoryOnce.generated.h"

class AFortPlayerState;

UCLASS(Blueprintable, MinimalAPI)
class AFortAthenaMutator_OverrideInventoryOnce : public AFortAthenaMutator_InventoryOverride {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<AFortPlayerState*> AlreadyProcessedPlayerStates;
    
public:
    AFortAthenaMutator_OverrideInventoryOnce();
    UFUNCTION(BlueprintCallable)
    void MarkPlayerInventoryImmune(AFortPlayerState* ImmunePlayer);
    
};

