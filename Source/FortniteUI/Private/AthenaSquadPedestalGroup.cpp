#include "AthenaSquadPedestalGroup.h"
#include "Components/SceneComponent.h"

AAthenaSquadPedestalGroup::AAthenaSquadPedestalGroup() {
    this->UsedSubgame = ESubGame::Campaign;
    this->MonitoredSquadIdx = 0;
    this->PedestalChildrenRoot = CreateDefaultSubobject<USceneComponent>(TEXT("PedestalChildrenRoot"));
}

