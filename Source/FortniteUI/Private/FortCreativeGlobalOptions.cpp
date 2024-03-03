#include "FortCreativeGlobalOptions.h"

void UFortCreativeGlobalOptions::UpdateCachedIndices() {
}

void UFortCreativeGlobalOptions::SetListDataSource(TEnumAsByte<UFortMatchmakingKnobsDataSource::Type> ListType) {
}

UFortCreativeOptionsCategory* UFortCreativeGlobalOptions::GetOptionListFromMemoryPointer() const {
    return NULL;
}

UFortCreativeGlobalOptions::UFortCreativeGlobalOptions() {
    this->CachedLastUsedIndexInCategory = 0;
    this->OptionsAsset = NULL;
    this->Category_Player = NULL;
    this->Category_MoveTool = NULL;
    this->Button_Accept = NULL;
    this->Button_Cancel = NULL;
    this->Text_ToolTipText = NULL;
    this->Image_DisplayImage = NULL;
}

