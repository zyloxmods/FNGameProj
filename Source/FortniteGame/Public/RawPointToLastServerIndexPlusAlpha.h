#pragma once
#include "CoreMinimal.h"
#include "RawPointToLastServerIndexPlusAlpha.generated.h"

USTRUCT(BlueprintType)
struct FRawPointToLastServerIndexPlusAlpha {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float ReppedLastServerIndexPlusAlpha;
    
    FORTNITEGAME_API FRawPointToLastServerIndexPlusAlpha();
};

