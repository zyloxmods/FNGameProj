#include "FortAttributeListItem.h"


void UFortAttributeListItem::SetPreviewAttribute(const FFortDisplayAttribute& InPreviewAttribute) {
}

bool UFortAttributeListItem::SetDisplayAttribute(const FFortDisplayAttribute& InDisplayAttribute, FFortDisplayAttribute& DeltaAttribute) {
    return false;
}



void UFortAttributeListItem::GetDisplayPreviewCopy(FFortDisplayAttribute& OutPreviewAttribute) const {
}

void UFortAttributeListItem::GetDisplayAttributeCopy(FFortDisplayAttribute& OutDisplayAttribute) const {
}

void UFortAttributeListItem::GetCurrentAttributeCopy(FFortDisplayAttribute& OutDisplayAttribute) const {
}


void UFortAttributeListItem::ClearPreview() {
}

UFortAttributeListItem::UFortAttributeListItem() : UUserWidget(FObjectInitializer::Get()) {
    this->bHoverEnabled = false;
}

