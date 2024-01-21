#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortSearchBounceData.generated.h"

USTRUCT(BlueprintType)
struct FFortSearchBounceData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector BounceNormal;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 SearchAnimationCount;
    
    FORTNITEGAME_API FFortSearchBounceData();
};

