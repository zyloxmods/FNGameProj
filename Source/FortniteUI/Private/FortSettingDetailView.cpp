#include "FortSettingDetailView.h"

UFortSettingDetailView::UFortSettingDetailView() : UUserWidget(FObjectInitializer::Get()) {
    this->VisualData = NULL;
    this->CurrentSetting = NULL;
    this->Text_SettingName = NULL;
    this->RichText_Description = NULL;
    this->RichText_DynamicDetails = NULL;
    this->RichText_DisabledDetails = NULL;
    this->Box_DetailsExtension = NULL;
}

