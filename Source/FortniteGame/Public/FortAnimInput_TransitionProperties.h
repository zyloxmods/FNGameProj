#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_TransitionProperties.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_TransitionProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTransition_DoubleJump_Fast: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTransition_DoubleJump: 1;
    
    FORTNITEGAME_API FFortAnimInput_TransitionProperties();
};

