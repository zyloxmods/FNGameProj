#pragma once
#include "CoreMinimal.h"
#include "FortGameplayMutator.h"
#include "FortGameplayMutator_AILevelVariance.generated.h"

UCLASS(Blueprintable)
class AFortGameplayMutator_AILevelVariance : public AFortGameplayMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinVariance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxVariance;
    
public:
    AFortGameplayMutator_AILevelVariance();
};

