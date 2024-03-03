#include "GGCenterDisplayWidgetBase.h"


void UGGCenterDisplayWidgetBase::OnOtherPlayerAwardedWeapon(AFortPlayerStateAthena* OtherPlayer, UFortWeaponItemDefinition* NextWeapon) {
}

void UGGCenterDisplayWidgetBase::OnLocalPlayerAwardedWeapon(UFortWeaponItemDefinition* NextWeapon) {
}

UGGCenterDisplayWidgetBase::UGGCenterDisplayWidgetBase() {
    this->NumberOfSlotsFlankingLocalPlayer = 0;
}

