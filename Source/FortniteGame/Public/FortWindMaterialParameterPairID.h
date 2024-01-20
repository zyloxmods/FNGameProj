#pragma once
#include "CoreMinimal.h"
#include "FortMaterialParameterID.h"
#include "FortWindMaterialParameterPairID.generated.h"

USTRUCT(BlueprintType)
struct FFortWindMaterialParameterPairID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PairIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMaterialParameterID SpeedParameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMaterialParameterID OffsetParameter;
    
    FORTNITEGAME_API FFortWindMaterialParameterPairID();
};

