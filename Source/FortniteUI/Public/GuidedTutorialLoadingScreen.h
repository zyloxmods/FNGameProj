#pragma once
#include "CoreMinimal.h"
#include "AthenaLoadingScreenPreviewPanelBase.h"
#include "GuidedTutorialLoadingScreen.generated.h"

class UFortPlaylistAthena;

UCLASS(Blueprintable, EditInlineNew)
class UGuidedTutorialLoadingScreen : public UAthenaLoadingScreenPreviewPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlaylistAthena* GuidedTutorialPlaylist;
    
    UGuidedTutorialLoadingScreen();
};

