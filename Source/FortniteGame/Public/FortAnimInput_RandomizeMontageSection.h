#pragma once
#include "CoreMinimal.h"
#include "FortAnimInput_RandomizeMontageSection.generated.h"

class UAnimSequenceBase;

USTRUCT(BlueprintType)
struct FFortAnimInput_RandomizeMontageSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* CurrentAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName MontageSectionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float TimeUntilNextSectionChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSectionParamIndex;
    
    FORTNITEGAME_API FFortAnimInput_RandomizeMontageSection();
};

