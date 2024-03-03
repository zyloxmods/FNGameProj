#include "AthenaCatabaScreen.h"



void UAthenaCatabaScreen::HandleUserMouseUp(float ScrollAmount) {
}

void UAthenaCatabaScreen::HandlePurchaseOfferComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems) {
}

UAthenaCatabaScreen::UAthenaCatabaScreen() {
    this->bShowAvailableMTXBalance = false;
    this->AffiliateModalClass = NULL;
    this->StoreSelectionPopupClass = NULL;
    this->ScrollThreshold = 1;
    this->AffiliateModal = NULL;
    this->StoreSelectionPopup = NULL;
    this->ScrollBox_Sections = NULL;
    this->VBox_Sections = NULL;
    this->InvalidationBox_ItemShop = NULL;
    this->Container_AvailableAmount = NULL;
    this->Navigator_ShopSections = NULL;
    this->SwipePanel_SectionsNavigation = NULL;
    this->EntryBox_SectionsPips = NULL;
    this->Button_SupportACreator = NULL;
    this->Button_ScrollToTop = NULL;
    this->Image_DefaultBackground = NULL;
    this->ButtonGroup_SectionsPips = NULL;
}

