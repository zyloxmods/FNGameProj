#pragma once
#include "CoreMinimal.h"
#include "BackendExportedClipInfo.h"
#include "BackendExportedTimelineEvents.h"
#include "DriverInstanceInfo.h"
#include "EVideoManagerStates.h"
#include "PegasusJobMeta.h"
#include "BackendJobCompletePayload.generated.h"

USTRUCT(BlueprintType)
struct FBackendJobCompletePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_RenderJobMessageHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_RenderQueueUrl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_ASGName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackendExportedClipInfo> PGS_ExportedVideos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBackendExportedTimelineEvents> PGS_ExportedTimelines;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPegasusJobMeta PGS_PayloadMeta;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EVideoManagerStates, float> PGS_VideoManagerStateDurations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDriverInstanceInfo PGS_InstanceInfo;
    
    FORTNITEGAME_API FBackendJobCompletePayload();
};

