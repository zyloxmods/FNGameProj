#pragma once
#include "CoreMinimal.h"
#include "FortBaseAnimInstance.h"
#include "FortBaseLayerAnimInstance.generated.h"

class UFortPlayerAnimInstance;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class UFortBaseLayerAnimInstance : public UFortBaseAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortPlayerAnimInstance> MainAnimInstanceWeakPtr;
    
    UFortBaseLayerAnimInstance();
};

