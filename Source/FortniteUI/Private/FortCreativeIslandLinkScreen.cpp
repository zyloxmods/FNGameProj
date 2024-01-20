#include "FortCreativeIslandLinkScreen.h"

void UFortCreativeIslandLinkScreen::SetTargetPortal(AFortAthenaCreativePortal* Portal) {
}

void UFortCreativeIslandLinkScreen::SetFavoritesOnlyMode(bool bFavoritesOnly) {
}

void UFortCreativeIslandLinkScreen::RemoveIslandFromFavorites(const FString& LinkCode) {
}



void UFortCreativeIslandLinkScreen::HandleIslandSelectionChanged(UObject* Item) {
}

void UFortCreativeIslandLinkScreen::HandleIslandLinkCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo) {
}

void UFortCreativeIslandLinkScreen::HandleIslandLinkChanged(const FText& Text) {
}

UFortCreativeIslandLinkScreen::UFortCreativeIslandLinkScreen() {
    this->NumDebugIslandLinks = 20;
    this->EditableText_IslandLink = NULL;
    this->ListView_IslandLinks = NULL;
    this->Button_Select = NULL;
    this->Button_Cancel = NULL;
    this->Button_Refresh = NULL;
    this->Button_Remove = NULL;
    this->TargetPortal = NULL;
    this->bCodeLookupRequestInFlight = false;
    this->bFriendsGetRequestInFlight = false;
    this->bFavoritesOnlyMode = false;
}

