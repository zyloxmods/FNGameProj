#include "AthenaHUDMenu.h"

void UAthenaHUDMenu::StartPostGame() {
}

void UAthenaHUDMenu::SetInventoryPanelOverride(UUserWidget* InInventoryPanelOverride) {
}

void UAthenaHUDMenu::RecoverFromPostGame() {
}

void UAthenaHUDMenu::PostBindCheckConditions() {
}


void UAthenaHUDMenu::NativeHandleCursorModeChanged(bool bCursorModeEnabled, FName ActionName, UUserWidget* CursorModeContentWidget) {
}

void UAthenaHUDMenu::HandlePreviewScreenshotCameraActivated(bool bActivated) {
}

void UAthenaHUDMenu::HandleMinigameStateChanged(AFortMinigame* Minigame, EFortMinigameState MinigameState) {
}

void UAthenaHUDMenu::HandleLocalPlayerRevived() {
}

void UAthenaHUDMenu::HandleLocalPlayerOrTeamWon() {
}

void UAthenaHUDMenu::HandleLocalPlayerLost(EEndOfMatchReason LostReason) {
}

void UAthenaHUDMenu::HandleLocalPlayerDied(const FFortPlayerDeathReport& DeathReport) {
}

UAthenaGameOverDisplay* UAthenaHUDMenu::CreateOrShowGameOverScreen() {
    return NULL;
}

void UAthenaHUDMenu::ClearGameOverScreen() {
}



UAthenaHUDMenu::UAthenaHUDMenu() {
    this->Overlay_AllContent = NULL;
    this->DualBladeMenu = NULL;
    this->InventoryPanel = NULL;
    this->BottomBar = NULL;
    this->WidgetStack_PrimaryContent = NULL;
    this->Container_ServerShutdownTimer = NULL;
    this->GameOverScreenClass = NULL;
    this->PostGameScreenRootClass = NULL;
    this->PostGameScreenRoot = NULL;
    this->bShowingGameOverScreen = false;
    this->bShowingWinnerScreen = false;
    this->bStartedPostGame = false;
    this->GameOverScreen = NULL;
    this->InventoryPanelOverride = NULL;
}

