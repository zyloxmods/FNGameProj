#include "FortCollectionBookPage.h"

EFortCollectionBookState UFortCollectionBookPage::GetSectionState(FName SectionId) const {
    return EFortCollectionBookState::Active;
}

EFortCollectionBookState UFortCollectionBookPage::GetPageState() const {
    return EFortCollectionBookState::Active;
}

UFortCollectionBookPage::UFortCollectionBookPage() {
    State = EFortCollectionBookState::Active;
}

