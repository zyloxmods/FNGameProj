#include "FortContentEncryptionCollection.h"

FFortContentEncryptionCollection::FFortContentEncryptionCollection() {
    bEnabled = false;
    Grouping = EFortContentEncryptionCollectionGrouping::Individual;
    AllowedReferences = EFortContentEncryptionAllowedReferences::None;
}

