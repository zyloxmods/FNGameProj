#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "CenterOnLocationPOI.h"
#include "LocationPOIList.generated.h"

USTRUCT(BlueprintType)
struct FLocationPOIList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat Enabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ChanceToApply;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCenterOnLocationPOI> List;
    
    FORTNITEGAME_API FLocationPOIList();
};

