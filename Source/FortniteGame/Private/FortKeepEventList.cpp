#include "FortKeepEventList.h"

FText UFortKeepEventList::GetEventDescription(int32 idx) {
    return FText::GetEmpty();
}

FKeepEventInfo UFortKeepEventList::GetEvent(int32 idx) {
    return FKeepEventInfo{};
}

UFortKeepEventList::UFortKeepEventList() {
}

