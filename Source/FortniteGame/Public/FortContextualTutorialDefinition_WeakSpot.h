#pragma once
#include "CoreMinimal.h"
#include "FortContextualTutorialDefinition.h"
#include "FortContextualTutorialDefinition_WeakSpot.generated.h"

UCLASS(Blueprintable)
class UFortContextualTutorialDefinition_WeakSpot : public UFortContextualTutorialDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumerOfWeakSpotHitRequired;
    
public:
    UFortContextualTutorialDefinition_WeakSpot();
};

