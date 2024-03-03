#pragma once
#include "CoreMinimal.h"
#include "BackendExportedClipInfo.generated.h"

USTRUCT(BlueprintType)
struct FBackendExportedClipInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_DatabaseId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_DatabaseIdPartitionKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_S3Bucket;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PGS_S3key;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PGS_Duration;
    
    FORTNITEGAME_API FBackendExportedClipInfo();
};

