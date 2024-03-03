#pragma once
#include "CoreMinimal.h"
#include "EHighlightReelTypes.h"
#include "HighlightReel.generated.h"

USTRUCT(BlueprintType)
struct FHighlightReel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalDurationSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHighlightReelTypes HighlightType;
    
    FORTNITEGAME_API FHighlightReel();
};

