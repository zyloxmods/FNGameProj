#include "FortDropdownDelegateRegistrar.h"

void UFortDropdownDelegateRegistrar::OnOpenStatusChanged(bool bIsOpen) {
}

UWidget* UFortDropdownDelegateRegistrar::GetOrCreateDropdownMenu() {
    return NULL;
}

UFortDropdownDelegateRegistrar::UFortDropdownDelegateRegistrar() {
    this->ContextProvider = NULL;
    this->Button = NULL;
    this->MenuAnchor = NULL;
    this->CachedDropdownMenu = NULL;
}

