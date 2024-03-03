#pragma once
#include "CoreMinimal.h"
#include "FortMeleeDeflectTransitionAnimData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FFortMeleeDeflectTransitionAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* TransitionAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NextDeflectDataIndex;
    
    FORTNITEGAME_API FFortMeleeDeflectTransitionAnimData();
};

