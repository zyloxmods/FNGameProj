#include "FortPlayerStartCreative.h"
#include "FortCreativeVolumeLinkComponent.h"

bool AFortPlayerStartCreative::IsClaimedByPlayer(FUniqueNetIdRepl UniqueId) const {
    return false;
}

AFortPlayerStartCreative::AFortPlayerStartCreative() : APlayerStart(FObjectInitializer::Get()) {
    PortalIndex = 0;
    ApplicableTeam = 1;
    bUseAsIslandStart = false;
    PriorityGroup = 0;
    bIsEnabled = true;
    CreativeLinkComponent = CreateDefaultSubobject<UFortCreativeVolumeLinkComponent>(TEXT("CreativeLinkComponent"));
}

