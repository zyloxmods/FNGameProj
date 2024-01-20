#include "AthenaSpectatorPlayerListBase.h"

void UAthenaSpectatorPlayerListBase::SetSortMethod(ESpectatorPlayerListSortMethod InNewSortMethod) {
}

void UAthenaSpectatorPlayerListBase::FocusListView(UAthenaRemotePlayerViewData* ItemToFocus) {
}

UAthenaSpectatorPlayerListBase::UAthenaSpectatorPlayerListBase() {
    this->ListView = NULL;
    this->CurrentSortMethod = ESpectatorPlayerListSortMethod::Count;
}

