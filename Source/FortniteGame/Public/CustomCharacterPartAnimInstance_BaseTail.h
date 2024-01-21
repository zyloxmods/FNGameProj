#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartAnimInstance.h"
#include "FortAnimInput_Skydiving.h"
#include "CustomCharacterPartAnimInstance_BaseTail.generated.h"

UCLASS(Blueprintable, NonTransient)
class UCustomCharacterPartAnimInstance_BaseTail : public UCustomCharacterPartAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_Skydiving SkydivingState;
    
    UCustomCharacterPartAnimInstance_BaseTail();
};

