#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartAnimInstance.h"
#include "FortAnimInput_Skydiving.h"
#include "CustomCharacterPartAnimInstance_MechanicalEngBackpack.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCustomCharacterPartAnimInstance_MechanicalEngBackpack : public UCustomCharacterPartAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_Skydiving SkydivingState;
    
    UCustomCharacterPartAnimInstance_MechanicalEngBackpack();
};

