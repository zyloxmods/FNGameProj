#pragma once
#include "CoreMinimal.h"
#include "FortDamageSource.generated.h"

class AActor;
class AController;

USTRUCT(BlueprintType)
struct FFortDamageSource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AController> InstigatorController;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> DamageCauser;
    
    FORTNITEGAME_API FFortDamageSource();
};

