#include "FortContentEncryptionCollection.h"

FFortContentEncryptionCollection::FFortContentEncryptionCollection() {
    this->bEnabled = false;
    this->Grouping = EFortContentEncryptionCollectionGrouping::Individual;
    this->AllowedReferences = EFortContentEncryptionAllowedReferences::None;
}

