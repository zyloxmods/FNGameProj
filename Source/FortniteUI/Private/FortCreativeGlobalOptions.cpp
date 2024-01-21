#include "FortCreativeGlobalOptions.h"

void UFortCreativeGlobalOptions::SetListDataSource(TEnumAsByte<UFortMatchmakingKnobsDataSource::Type> ListType) {
}


void UFortCreativeGlobalOptions::OnHoveredItemChanged(UObject* Item, bool bIsHovered) {
}

void UFortCreativeGlobalOptions::OnCurrentItemSelectionChanged(UObject* Item) {
}


void UFortCreativeGlobalOptions::HandleCancelClicked_Implementation() {
}

UFortCreativeGlobalOptions::UFortCreativeGlobalOptions() {
    this->OptionsAsset = NULL;
    this->OptionsList = NULL;
    this->AcceptButton = NULL;
    this->CancelButton = NULL;
    this->Image_DisplayImage = NULL;
}

