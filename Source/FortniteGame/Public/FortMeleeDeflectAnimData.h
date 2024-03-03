#pragma once
#include "CoreMinimal.h"
#include "FortMeleeDeflectTransitionAnimData.h"
#include "FortMeleeDeflectAnimData.generated.h"

class UAnimSequence;

USTRUCT(BlueprintType)
struct FFortMeleeDeflectAnimData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* EntryFromGuardAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* HoldAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequence* ExitToGuardAnim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMeleeDeflectTransitionAnimData> TransitionsToNextDeflection;
    
    FORTNITEGAME_API FFortMeleeDeflectAnimData();
};

