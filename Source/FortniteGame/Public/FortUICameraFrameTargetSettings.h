#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EFortUICameraFrameTargetBoundingBehavior.h"
#include "FortUICameraFrameTargetBounds.h"
#include "FortUICameraFrameTargetSettings.generated.h"

USTRUCT(BlueprintType)
struct FFortUICameraFrameTargetSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector FocusPointToCenter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortUICameraFrameTargetBoundingBehavior BoundingBehavior;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortUICameraFrameTargetBounds BoundsToFrame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRotator FocusObjectRotation;
    
    FORTNITEGAME_API FFortUICameraFrameTargetSettings();
};

