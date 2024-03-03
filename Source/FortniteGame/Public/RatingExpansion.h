#pragma once
#include "CoreMinimal.h"
#include "RatingExpansion.generated.h"

USTRUCT(BlueprintType)
struct FRatingExpansion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RatingDelta;
    
    FORTNITEGAME_API FRatingExpansion();
};

