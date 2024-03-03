#include "FortItemLayerAnimInstance_Lobster.h"

void UFortItemLayerAnimInstance_Lobster::AnimNotify_GuardLoopEntered() {
}

void UFortItemLayerAnimInstance_Lobster::AnimNotify_DeflectHold2Entered() {
}

void UFortItemLayerAnimInstance_Lobster::AnimNotify_DeflectHold1Entered() {
}

UFortItemLayerAnimInstance_Lobster::UFortItemLayerAnimInstance_Lobster() {
    this->DeflectEntry1Anim = NULL;
    this->DeflectHold1Anim = NULL;
    this->DeflectExit1Anim = NULL;
    this->DeflectTransition1_2Anim = NULL;
    this->DeflectHold2Anim = NULL;
    this->DeflectExit2Anim = NULL;
    this->DeflectTransition2_1Anim = NULL;
    this->ActiveDeflectionIndex = 0;
    this->NextDeflectionIndex = 0;
    this->bIsMeleeGuarding = false;
    this->bIsMeleeDeflecting = false;
    this->bIsMeleeDodging = false;
    this->bIsMeleeDodgingNorth = false;
    this->bIsMeleeDodgingSouth = false;
    this->bIsMeleeDodgingWest = false;
    this->bIsMeleeDodgingEast = false;
}

