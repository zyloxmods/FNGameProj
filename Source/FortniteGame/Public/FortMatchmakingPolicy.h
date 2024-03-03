#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MatchmakingParams.h"
#include "FortMatchmakingPolicy.generated.h"

class UFortSearchPass;

UCLASS(Blueprintable, Config=Game)
class UFortMatchmakingPolicy : public UObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMatchmakingInProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName SessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FMatchmakingParams CurrentParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSearchPass* MMPass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ChanceToHostAttempt;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldCampaignForceCrossplayConfig;
    
public:
    UFortMatchmakingPolicy();
};

