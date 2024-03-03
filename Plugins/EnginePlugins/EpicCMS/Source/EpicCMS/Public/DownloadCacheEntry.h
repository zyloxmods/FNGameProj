#pragma once
#include "CoreMinimal.h"
#include "DownloadCacheEntry.generated.h"

USTRUCT(BlueprintType)
struct FDownloadCacheEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SourceUrl;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double LastAccessTime;
    
    EPICCMS_API FDownloadCacheEntry();
};

