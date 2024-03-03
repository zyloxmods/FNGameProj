#include "SidecarSys.h"
#include "SidecarDss.h"
#include "SidecarInventorySys.h"

USidecarSys::USidecarSys() {
    this->SidecarDss = CreateDefaultSubobject<USidecarDss>(TEXT("SidecarDss"));
    this->SidecarInventory = CreateDefaultSubobject<USidecarInventorySys>(TEXT("SidecarInventory"));
}

