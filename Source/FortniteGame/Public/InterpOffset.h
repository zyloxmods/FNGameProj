#pragma once
#include "CoreMinimal.h"
#include "InterpOffsetData.h"
#include "InterpOffset.generated.h"

USTRUCT(BlueprintType)
struct FInterpOffset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FInterpOffsetData> SamplePoints;
    
    FORTNITEGAME_API FInterpOffset();
};

