#pragma once
#include "CoreMinimal.h"
#include "AthenaEventScreenBase.h"
#include "AthenaBroadcastAllPlayersGridBase.generated.h"

class UAthenaRemotePlayerViewData;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBroadcastAllPlayersGridBase : public UAthenaEventScreenBase {
    GENERATED_BODY()
public:
    UAthenaBroadcastAllPlayersGridBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerDataAdded_BP(UAthenaRemotePlayerViewData* InPlayerData);
    
};

