#pragma once
#include "CoreMinimal.h"
#include "CustomCharacterPartAnimInstance.h"
#include "FortAnimInput_Facial.h"
#include "HeadPartAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class FORTNITEGAME_API UHeadPartAnimInstance : public UCustomCharacterPartAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortAnimInput_Facial FacialInput;
    
    UHeadPartAnimInstance();
};

