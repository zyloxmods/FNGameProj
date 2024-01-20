#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortAthenaMutator_MovementSpeed.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_MovementSpeed : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MovementSpeed;
    
public:
    AFortAthenaMutator_MovementSpeed();
};

