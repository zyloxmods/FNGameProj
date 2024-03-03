#pragma once
#include "CoreMinimal.h"
#include "AttributeSet.h"
#include "ItemLoadoutContainer.h"
#include "ItemLoadoutBucket.generated.h"

USTRUCT(BlueprintType)
struct FItemLoadoutBucket {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat bEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FItemLoadoutContainer> Loadouts;
    
    FORTNITEGAME_API FItemLoadoutBucket();
};

