#include "SidecarInventorySys.h"

USidecarInventorySys::USidecarInventorySys() {
    this->InventoryDownloadUrl = TEXT("/api/inventory/v1/`inventory_name");
    this->InventoryLockUrl = TEXT("/api/inventory/v1/`inventory_name/lock");
    this->ItemUpdateUrl = TEXT("/api/inventory/v1/`inventory_name/update");
    this->ReleaseAllUrl = TEXT("/api/inventory/v1/*/release-all");
}

