#pragma once
#include "CoreMinimal.h"
#include "FortPortalOriginInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortPortalOriginInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaylistName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LinkCode;
    
    FORTNITEGAME_API FFortPortalOriginInfo();
};

