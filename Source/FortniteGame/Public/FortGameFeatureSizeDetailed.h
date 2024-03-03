#pragma once
#include "CoreMinimal.h"
#include "FortGameFeatureSizeDetailed.generated.h"

USTRUCT(BlueprintType)
struct FFortGameFeatureSizeDetailed {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 DownloadSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 InstallSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 InstallOverheadSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 FreeSpace;
    
    FORTNITEGAME_API FFortGameFeatureSizeDetailed();
};

