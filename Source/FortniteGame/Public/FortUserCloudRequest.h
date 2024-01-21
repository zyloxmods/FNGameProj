#pragma once
#include "CoreMinimal.h"
#include "FortUserCloudRequestPayload.h"
#include "FortUserCloudRequest.generated.h"

USTRUCT(BlueprintType)
struct FFortUserCloudRequest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUserCloudRequestPayload RequestPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bNeedsFileEnumeration: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bStartedProcessing: 1;
    
    FORTNITEGAME_API FFortUserCloudRequest();
};

