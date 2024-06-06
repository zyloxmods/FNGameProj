#include "FortItemLayerAnimInstance_Lobster.h"

void UFortItemLayerAnimInstance_Lobster::AnimNotify_GuardLoopEntered() {
}

void UFortItemLayerAnimInstance_Lobster::AnimNotify_DeflectHold2Entered() {
}

void UFortItemLayerAnimInstance_Lobster::AnimNotify_DeflectHold1Entered() {
}

UFortItemLayerAnimInstance_Lobster::UFortItemLayerAnimInstance_Lobster() {
    DeflectEntry1Anim = NULL;
    DeflectHold1Anim = NULL;
    DeflectExit1Anim = NULL;
    DeflectTransition1_2Anim = NULL;
    DeflectHold2Anim = NULL;
    DeflectExit2Anim = NULL;
    DeflectTransition2_1Anim = NULL;
    ActiveDeflectionIndex = 0;
    NextDeflectionIndex = 0;
    bIsMeleeGuarding = false;
    bIsMeleeDeflecting = false;
    bIsMeleeDodging = false;
    bIsMeleeDodgingNorth = false;
    bIsMeleeDodgingSouth = false;
    bIsMeleeDodgingWest = false;
    bIsMeleeDodgingEast = false;
}

