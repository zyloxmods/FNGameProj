#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortMissionEventParams.h"
#include "FortPlayerAbandonParams.generated.h"

UCLASS(Blueprintable)
class UFortPlayerAbandonParams : public UFortMissionEventParams {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl AbandoningPlayerId;
    
    UFortPlayerAbandonParams();
};

