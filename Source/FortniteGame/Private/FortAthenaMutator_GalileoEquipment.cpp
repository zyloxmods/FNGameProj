#include "FortAthenaMutator_GalileoEquipment.h"

void AFortAthenaMutator_GalileoEquipment::MarkPlayerLoadoutChoice(AFortPlayerState* State, int32 Choice) {
}

void AFortAthenaMutator_GalileoEquipment::ApplyPlayerLoadout(AFortPlayerState* State) {
}

AFortAthenaMutator_GalileoEquipment::AFortAthenaMutator_GalileoEquipment() {
    StopDropsByApplyEffect = NULL;
    bShouldStopDropsAfterApplying = false;
    SlotToSwapToAfterGrant = 0;
}

