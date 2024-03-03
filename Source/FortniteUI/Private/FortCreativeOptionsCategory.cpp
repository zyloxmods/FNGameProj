#include "FortCreativeOptionsCategory.h"


UCommonListView* UFortCreativeOptionsCategory::GetOptionsList() const {
    return NULL;
}

UFortCreativeOptionsCategory::UFortCreativeOptionsCategory() : UUserWidget(FObjectInitializer::Get()) {
    this->GlobalOptionsUI = NULL;
    this->ListView_Options = NULL;
    this->Text_CategoryText = NULL;
}

