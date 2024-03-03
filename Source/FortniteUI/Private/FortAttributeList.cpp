#include "FortAttributeList.h"

void UFortAttributeList::SetPreviewData(const TArray<FFortDisplayAttribute>& Data) {
}

TArray<FFortDisplayAttribute> UFortAttributeList::SetData(const TArray<FFortDisplayAttribute>& Data) {
    return TArray<FFortDisplayAttribute>();
}

void UFortAttributeList::ClearPreviewData() {
}

void UFortAttributeList::Clear() {
}

UFortAttributeList::UFortAttributeList() {
    this->AttributeItemClass = NULL;
    this->bHoverEnabledOnElements = false;
    this->AttributeContainer = NULL;
}

