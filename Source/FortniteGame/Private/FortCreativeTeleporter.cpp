#include "FortCreativeTeleporter.h"
#include "FortGameplayReceiverMessageComponent.h"

bool AFortCreativeTeleporter::IsTeleporterBlocked(const AActor* ActorToTeleport, const FRotator& InPawnTeleportedRotation) const {
    return false;
}

AFortCreativeTeleporter::AFortCreativeTeleporter() {
    TeleporterAbility = NULL;
    Knob_TeleporterGroup = EFortCreativeTeleporterGroup::Group_A;
    Knob_TargetTeleporterGroup = EFortCreativeTeleporterGroup::Group_A;
    TeleportToWhenReceived = CreateDefaultSubobject<UFortGameplayReceiverMessageComponent>(TEXT("TeleportToWhenReceived"));
}

