#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortTutorialLobbyPopup.generated.h"

class UFortPlaylistAthena;
class UWidgetSwitcher;

UCLASS(Blueprintable, EditInlineNew)
class UFortTutorialLobbyPopup : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlaylistAthena* TutorialPlaylistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlaylistAthena* Tutorial_DefensiveBuildingPlaylistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlaylistAthena* SoloPlaylistData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_PopupTutorial;
    
public:
    UFortTutorialLobbyPopup();
private:
    UFUNCTION(BlueprintCallable)
    void StartTutorial();
    
    UFUNCTION(BlueprintCallable)
    void SkipTutorial();
    
};

