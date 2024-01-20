#include "AthenaSquadPedestalGroup.h"
#include "Components/SceneComponent.h"

AAthenaSquadPedestalGroup::AAthenaSquadPedestalGroup() {
    this->MonitoredSquadIdx = -1;
    this->PedestalChildrenRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PedestalChildrenRoot"));
}

