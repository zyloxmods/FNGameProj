#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortComicPanelMaskType.h"
#include "FortComicPanelTransition.h"
#include "FortComicPanel.generated.h"

USTRUCT(BlueprintType)
struct FFortComicPanel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D Size;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortComicPanelTransition ForwardTransition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortComicPanelMaskType Mask;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D MaskPoints[4];
    
    COMICREADER_API FFortComicPanel();
};

