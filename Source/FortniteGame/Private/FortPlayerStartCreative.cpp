#include "FortPlayerStartCreative.h"
#include "FortCreativeVolumeLinkComponent.h"

bool AFortPlayerStartCreative::IsClaimedByPlayer(FUniqueNetIdRepl UniqueId) const {
    return false;
}

AFortPlayerStartCreative::AFortPlayerStartCreative() : APlayerStart(FObjectInitializer::Get()) {
    this->PortalIndex = 0;
    this->ApplicableTeam = 1;
    this->bUseAsIslandStart = false;
    this->PriorityGroup = 0;
    this->bIsEnabled = true;
    this->CreativeLinkComponent = CreateDefaultSubobject<UFortCreativeVolumeLinkComponent>(TEXT("CreativeLinkComponent"));
}

