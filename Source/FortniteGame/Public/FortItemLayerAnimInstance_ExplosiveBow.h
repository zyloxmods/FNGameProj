#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_BowWeapon.h"
#include "FortItemLayerAnimInstance.h"
#include "FortItemLayerAnimInstance_ExplosiveBow.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortItemLayerAnimInstance_ExplosiveBow : public UFortItemLayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_BowWeapon BowWeaponInput;
    
    UFortItemLayerAnimInstance_ExplosiveBow();
};

