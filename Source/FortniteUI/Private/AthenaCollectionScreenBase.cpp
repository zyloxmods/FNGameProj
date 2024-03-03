#include "AthenaCollectionScreenBase.h"

void UAthenaCollectionScreenBase::CenterSelectedEntry() {
}






UAthenaCollectionScreenBase::UAthenaCollectionScreenBase() {
    this->UnknownText = FText::FromString(TEXT("Undiscovered"));
    this->UnknownDescription = FText::FromString(TEXT("You know nothing about this item."));
    this->PersonalBestMinimumFractionalDigits = 0;
    this->PersonalBestMaximumFractionalDigits = 0;
    this->ScrollBox_List = NULL;
    this->CollectionListView = NULL;
    this->Content_InfoOverlayContainer = NULL;
    this->InfoOverlay = NULL;
    this->Button_ToggleInfoOverlay = NULL;
    this->Button_Back = NULL;
    this->PlayerProgressContainer = NULL;
    this->bWantsToShowInfoOverlay = false;
    this->bForceOverlayToggleMobile = false;
    this->CollectionsDataTable = NULL;
    this->CollectionData = NULL;
}

