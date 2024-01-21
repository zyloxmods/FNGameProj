#include "FortAttributeListItem_NUI.h"


void UFortAttributeListItem_NUI::SetPreviewAttribute(const FFortDisplayAttribute& InPreviewAttribute) {
}

void UFortAttributeListItem_NUI::SetDisplayAttribute(const FFortDisplayAttribute& InDisplayAttribute) {
}



bool UFortAttributeListItem_NUI::HasPreviewAttribute() const {
    return false;
}

void UFortAttributeListItem_NUI::GetDisplayPreviewCopy(FFortDisplayAttribute& OutPreviewAttribute) const {
}

void UFortAttributeListItem_NUI::GetDisplayAttributeCopy(FFortDisplayAttribute& OutDisplayAttribute) const {
}

void UFortAttributeListItem_NUI::GetCurrentAttributeCopy(FFortDisplayAttribute& OutDisplayAttribute) const {
}


void UFortAttributeListItem_NUI::ClearPreview() {
}

UFortAttributeListItem_NUI::UFortAttributeListItem_NUI() {
    this->bHoverEnabled = false;
}

