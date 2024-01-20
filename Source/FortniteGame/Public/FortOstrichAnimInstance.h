#pragma once
#include "CoreMinimal.h"
#include "FortAnimInstance.h"
#include "FortOstrichAnimInstance.generated.h"

class AFortCharacterVehicle;

UCLASS(Blueprintable, NonTransient)
class UFortOstrichAnimInstance : public UFortAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortCharacterVehicle* Ostrich;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LocalAimYaw;
    
    UFortOstrichAnimInstance();
};

