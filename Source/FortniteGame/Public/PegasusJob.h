#pragma once
#include "CoreMinimal.h"
#include "ClipInfo.h"
#include "PegasusJob.generated.h"

USTRUCT(BlueprintType)
struct FPegasusJob {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ReplayId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bExportShotsIndividually;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FClipInfo> ClipsToExport;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateTimelineEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bJobAllowsFailure;
    
    FORTNITEGAME_API FPegasusJob();
};

