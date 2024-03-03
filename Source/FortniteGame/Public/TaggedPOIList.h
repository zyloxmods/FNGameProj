#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "CenterOnTaggedPOI.h"
#include "TaggedPOIList.generated.h"

USTRUCT(BlueprintType)
struct FTaggedPOIList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ChanceToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCenterOnTaggedPOI> List;
    
    FORTNITEGAME_API FTaggedPOIList();
};

