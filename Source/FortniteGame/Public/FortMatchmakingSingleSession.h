#pragma once
#include "CoreMinimal.h"
#include "FortInviteSessionParams.h"
#include "FortMatchmakingPolicy.h"
#include "FortMatchmakingSingleSession.generated.h"

class UFortSessionHelper;

UCLASS(Blueprintable)
class UFortMatchmakingSingleSession : public UFortMatchmakingPolicy {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortInviteSessionParams CurrentSessionParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortSessionHelper* SessionHelper;
    
public:
    UFortMatchmakingSingleSession();
};

