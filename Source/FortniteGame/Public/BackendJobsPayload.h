#pragma once
#include "CoreMinimal.h"
#include "PegasusJob.h"
#include "PegasusJobMeta.h"
#include "BackendJobsPayload.generated.h"

USTRUCT(BlueprintType)
struct FBackendJobsPayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPegasusJob> JobsToRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPegasusJobMeta PayloadMeta;
    
    FORTNITEGAME_API FBackendJobsPayload();
};

