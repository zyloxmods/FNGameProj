#pragma once
#include "CoreMinimal.h"
#include "ReppedLastServerIndexToIndex.generated.h"

USTRUCT(BlueprintType)
struct FReppedLastServerIndexToIndex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ReppedPointIdx;
    
    FORTNITEGAME_API FReppedLastServerIndexToIndex();
};

