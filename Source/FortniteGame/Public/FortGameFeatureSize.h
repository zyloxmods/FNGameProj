#pragma once
#include "CoreMinimal.h"
#include "FortGameFeatureSize.generated.h"

USTRUCT(BlueprintType)
struct FFortGameFeatureSize {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 DownloadSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 InstallSize;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 FreeSpace;
    
    FORTNITEGAME_API FFortGameFeatureSize();
};

