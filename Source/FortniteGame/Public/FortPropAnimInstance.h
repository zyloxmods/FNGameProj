#pragma once
#include "CoreMinimal.h"
#include "FortBaseAnimInstance.h"
#include "FortPropAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortPropAnimInstance : public UFortBaseAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsMoving2D;
    
    UFortPropAnimInstance();
};

