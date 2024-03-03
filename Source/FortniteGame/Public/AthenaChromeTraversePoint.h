#pragma once
#include "CoreMinimal.h"
#include "AthenaLTMTraversePoint.h"
#include "AthenaChromeTraversePoint.generated.h"

class AAthenaHoldingArea;

UCLASS(Blueprintable)
class AAthenaChromeTraversePoint : public AAthenaLTMTraversePoint {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AAthenaHoldingArea* HoldingArea;
    
public:
    AAthenaChromeTraversePoint();
};

