#pragma once
#include "CoreMinimal.h"
#include "FortPlayerAnimInstance.h"
#include "FortPlayerAnimInstance_Gauntlet.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFortPlayerAnimInstance_Gauntlet : public UFortPlayerAnimInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float FullBodyOverrideWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EmoteIKAlphaInterpSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float EmoteIKAlphaCurrent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCarmineJumpCharge: 1;
    
    UFortPlayerAnimInstance_Gauntlet();
};

