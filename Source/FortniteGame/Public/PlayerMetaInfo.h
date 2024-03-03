#pragma once
#include "CoreMinimal.h"
#include "BaseSample.h"
#include "PlayerMetaInfo.generated.h"

USTRUCT(BlueprintType)
struct FPlayerMetaInfo : public FBaseSample {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchPlacement;
    
    FORTNITEGAME_API FPlayerMetaInfo();
};

