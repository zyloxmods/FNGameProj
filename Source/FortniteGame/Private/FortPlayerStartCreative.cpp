#include "FortPlayerStartCreative.h"
#include "FortCreativeVolumeLinkComponent.h"

AFortPlayerStartCreative::AFortPlayerStartCreative() : APlayerStart(FObjectInitializer::Get()) {
    this->PortalIndex = -1;
    this->ApplicableTeam = 1;
    this->bUseAsIslandStart = false;
    this->PriorityGroup = 2147483647;
    this->CreativeLinkComponent = CreateDefaultSubobject<UFortCreativeVolumeLinkComponent>(TEXT("CreativeLinkComponent"));
}

