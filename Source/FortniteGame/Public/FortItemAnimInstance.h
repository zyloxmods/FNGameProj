#pragma once
#include "CoreMinimal.h"
#include "EFortCustomGender.h"
#include "FortBaseAnimInstance.h"
#include "FortItemAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortItemAnimInstance : public UFortBaseAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCustomGender Gender;
    
    UFortItemAnimInstance();
};

