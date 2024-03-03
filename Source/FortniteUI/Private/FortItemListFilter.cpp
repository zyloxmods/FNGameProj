#include "FortItemListFilter.h"

FFortItemListFilter::FFortItemListFilter() {
    this->FilterType = EFortInventoryFilter::WeaponMelee;
    this->bInStorageVault = false;
    this->bIncludeVaultOverflow = false;
}

