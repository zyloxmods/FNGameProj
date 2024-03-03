#pragma once
#include "CoreMinimal.h"
#include "FortBaseLayerAnimInstance.h"
#include "FortItemLayerAnimInstance_DateGaunlets.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UFortItemLayerAnimInstance_DateGaunlets : public UFortBaseLayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsBoostJumping;
    
    UFortItemLayerAnimInstance_DateGaunlets();
};

