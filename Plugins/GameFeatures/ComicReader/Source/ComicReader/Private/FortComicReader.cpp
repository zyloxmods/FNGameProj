#include "FortComicReader.h"

void UFortComicReader::ToggleViewMode() {
}

void UFortComicReader::SetCurrentPage(int32 InPageIndex) {
}

void UFortComicReader::Previous() {
}

void UFortComicReader::Next() {
}

EFortComicViewMode UFortComicReader::GetViewMode() const {
    return EFortComicViewMode::Page;
}

int32 UFortComicReader::GetTotalPageNumber() const {
    return 0;
}

int32 UFortComicReader::GetNumPanelsOnPage(int32 InPageNum) const {
    return 0;
}

int32 UFortComicReader::GetCurrentPanelIndex() const {
    return 0;
}

int32 UFortComicReader::GetCurrentPageNumber() const {
    return 0;
}

int32 UFortComicReader::GetCurrentPageIndex() const {
    return 0;
}

UFortComicReader::UFortComicReader() {
    this->ViewMode = EFortComicViewMode::Page;
}

