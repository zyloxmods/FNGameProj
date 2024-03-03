#pragma once
#include "CoreMinimal.h"
#include "EFortComicPanelTransitionType.h"
#include "FortComicPanelTransition.generated.h"

USTRUCT(BlueprintType)
struct FFortComicPanelTransition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortComicPanelTransitionType Type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    COMICREADER_API FFortComicPanelTransition();
};

