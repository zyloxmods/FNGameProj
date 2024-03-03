#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EEndOfMatchReason.h"
#include "EFortMinigameState.h"
#include "FortPlayerDeathReport.h"
#include "GameplayTagContainer.h"
#include "Templates/SubclassOf.h"
#include "AthenaHUDMenu.generated.h"

class AFortMinigame;
class UAthenaGameOverDisplay;
class UAthenaInventoryPanelBase;
class UCommonActivatableWidgetStack;
class UFortDualBladeMenu;
class UFortPostGameScreenRoot;
class UOverlay;
class UUserWidget;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaHUDMenu : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_AllContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDualBladeMenu* DualBladeMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaInventoryPanelBase* InventoryPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* BottomBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonActivatableWidgetStack* WidgetStack_PrimaryContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Container_ServerShutdownTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer HideOnMenuTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer TagsToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaGameOverDisplay> GameOverScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPostGameScreenRoot> PostGameScreenRootClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPostGameScreenRoot* PostGameScreenRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowingGameOverScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowingWinnerScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStartedPostGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaGameOverDisplay* GameOverScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UUserWidget* InventoryPanelOverride;
    
public:
    UAthenaHUDMenu();
    UFUNCTION(BlueprintCallable)
    void StartPostGame();
    
    UFUNCTION(BlueprintCallable)
    void SetInventoryPanelOverride(UUserWidget* InInventoryPanelOverride);
    
    UFUNCTION(BlueprintCallable)
    void RecoverFromPostGame();
    
private:
    UFUNCTION(BlueprintCallable)
    void PostBindCheckConditions();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnWidgetStackCleared();
    
private:
    UFUNCTION(BlueprintCallable)
    void NativeHandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget);
    
    UFUNCTION(BlueprintCallable)
    void HandlePreviewScreenshotCameraActivated(bool bActivated);
    
    UFUNCTION(BlueprintCallable)
    void HandleMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerRevived();
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerOrTeamWon();
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerLost(EEndOfMatchReason LostReason);
    
    UFUNCTION(BlueprintCallable)
    void HandleLocalPlayerDied(const FFortPlayerDeathReport& DeathReport);
    
    UFUNCTION(BlueprintCallable)
    UAthenaGameOverDisplay* CreateOrShowGameOverScreen();
    
    UFUNCTION(BlueprintCallable)
    void ClearGameOverScreen();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPostGameStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnPostGameEnded();
    
};

