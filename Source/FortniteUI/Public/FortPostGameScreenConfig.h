#pragma once
#include "CoreMinimal.h"
#include "EPostGameClickCatcherMode.h"
#include "EPostGameHUDMode.h"
#include "FortPostGameScreenConfig.generated.h"

USTRUCT(BlueprintType)
struct FFortPostGameScreenConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostGameClickCatcherMode ClickCatcherState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPostGameHUDMode PostGameHUDMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSohwCinematicBars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowPlacementOverlay;
    
    FORTNITEUI_API FFortPostGameScreenConfig();
};

