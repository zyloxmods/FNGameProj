#include "FortCreativeIslandLinkScreen.h"

void UFortCreativeIslandLinkScreen::SetTargetPortal(AFortAthenaCreativePortal* Portal) {
}

void UFortCreativeIslandLinkScreen::SetFavoritesOnlyMode(bool bFavoritesOnly) {
}

void UFortCreativeIslandLinkScreen::RemoveIslandFromHistory(const FString& LinkCode) {
}

void UFortCreativeIslandLinkScreen::RemoveIslandFromFavorites(UFortCreativeIslandLink* LinkEntry) {
}



void UFortCreativeIslandLinkScreen::HandleIslandSelectionChanged(UObject* Item) {
}

void UFortCreativeIslandLinkScreen::HandleIslandLinkCommitted(const FText& InText, TEnumAsByte<ETextCommit::Type> CommitInfo) {
}

void UFortCreativeIslandLinkScreen::HandleIslandLinkChanged(const FText& Text) {
}

void UFortCreativeIslandLinkScreen::AddIslandToFavorites(UFortCreativeIslandLink* LinkEntry) {
}

UFortCreativeIslandLinkScreen::UFortCreativeIslandLinkScreen() {
    this->NumDebugIslandLinks = 0;
    this->EditableText_IslandLink = NULL;
    this->ListView_IslandLinks = NULL;
    this->LastLinkQueried = NULL;
    this->UserEnteredIslandLink = NULL;
    this->Button_Select = NULL;
    this->Button_CloseMobile = NULL;
    this->Button_Cancel = NULL;
    this->Button_Refresh = NULL;
    this->Button_Remove = NULL;
    this->Switcher_Tabs = NULL;
    this->TargetPortal = NULL;
    this->bCodeLookupRequestInFlight = false;
    this->bFriendsGetRequestInFlight = false;
    this->bFavoritesOnlyMode = false;
}

