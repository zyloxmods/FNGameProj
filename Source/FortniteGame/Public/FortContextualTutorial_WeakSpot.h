#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorial.h"
#include "FortContextualTutorial_WeakSpot.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorial_WeakSpot : public UFortContextualTutorial {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumberOfWeakSpotHit;
    
public:
    UFortContextualTutorial_WeakSpot();
};

