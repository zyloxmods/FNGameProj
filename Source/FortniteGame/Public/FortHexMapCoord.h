#pragma once
#include "CoreMinimal.h"
#include "FortHexMapCoord.generated.h"

USTRUCT(BlueprintType)
struct FFortHexMapCoord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Horizontal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Vertical;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Depth;
    
    FORTNITEGAME_API FFortHexMapCoord();
};

