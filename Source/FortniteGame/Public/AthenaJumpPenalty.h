#pragma once
#include "CoreMinimal.h"
#include "AthenaJumpPenalty.generated.h"

USTRUCT(BlueprintType)
struct FAthenaJumpPenalty {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float JumpScalar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementScalar;
    
    FORTNITEGAME_API FAthenaJumpPenalty();
};

