#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortCloudSaveInfo.h"
#include "FortBatchUpdatePlayer_DeployableBaseUpdate.generated.h"

USTRUCT(BlueprintType)
struct FFortBatchUpdatePlayer_DeployableBaseUpdate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUniqueNetIdRepl AccountId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DeployableBaseItemId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCloudSaveInfo CloudSaveInfo;
    
    FORTNITEGAME_API FFortBatchUpdatePlayer_DeployableBaseUpdate();
};

