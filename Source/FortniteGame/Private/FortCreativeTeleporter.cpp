#include "FortCreativeTeleporter.h"
#include "FortGameplayReceiverMessageComponent.h"

bool AFortCreativeTeleporter::IsTeleporterBlocked(const AActor* ActorToTeleport, const FRotator& InPawnTeleportedRotation) const {
    return false;
}

AFortCreativeTeleporter::AFortCreativeTeleporter() {
    this->TeleporterAbility = NULL;
    this->Knob_TeleporterGroup = EFortCreativeTeleporterGroup::Group_A;
    this->Knob_TargetTeleporterGroup = EFortCreativeTeleporterGroup::Group_A;
    this->TeleportToWhenReceived = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TeleportToWhenReceived"));
}

