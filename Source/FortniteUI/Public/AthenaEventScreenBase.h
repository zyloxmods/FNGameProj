#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaEventScreenBase.generated.h"

class UAthenaRemotePlayerViewData;
class UAthenaRemoteSquadViewData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaEventScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UAthenaEventScreenBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSquadDataAdded(UAthenaRemoteSquadViewData* InPlayerData);
    
    UFUNCTION(BlueprintCallable)
    void OnPlayerDataAdded(UAthenaRemotePlayerViewData* InPlayerData);
    
};

