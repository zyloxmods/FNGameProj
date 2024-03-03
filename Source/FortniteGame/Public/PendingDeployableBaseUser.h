#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortUserCloudRequestHandle.h"
#include "PendingDeployableBaseUser.generated.h"

class ADeployableBasePlot;
class UFortDeployableBaseRecord;

USTRUCT(BlueprintType)
struct FPendingDeployableBaseUser {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl UserNetId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUserCloudRequestHandle LoadingCloudRequestHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDeployableBaseRecord* BaseRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ADeployableBasePlot* BasePlot;
    
    FORTNITEGAME_API FPendingDeployableBaseUser();
};

