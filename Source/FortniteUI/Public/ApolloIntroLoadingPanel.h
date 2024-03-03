#pragma once
#include "CoreMinimal.h"
#include "AthenaLoadingScreenPreviewPanelBase.h"
#include "ApolloIntroLoadingPanel.generated.h"

class UFortPlaylistAthena;

UCLASS(Blueprintable, EditInlineNew)
class UApolloIntroLoadingPanel : public UAthenaLoadingScreenPreviewPanelBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlaylistAthena* ApolloIntroPlaylist;
    
    UApolloIntroLoadingPanel();
};

