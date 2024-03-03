#pragma once
#include "CoreMinimal.h"
#include "DownloadCacheEntry.h"
#include "DownloadCache.generated.h"

USTRUCT(BlueprintType)
struct FDownloadCache {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Version;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FDownloadCacheEntry> Cache;
    
public:
    EPICCMS_API FDownloadCache();
};

