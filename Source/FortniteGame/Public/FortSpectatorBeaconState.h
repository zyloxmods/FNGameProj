#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SpectatorBeaconState.h"
#include "FortSpectatorBeaconState.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortSpectatorBeaconState : public USpectatorBeaconState {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl GameSessionOwner;
    
public:
    UFortSpectatorBeaconState();
};

