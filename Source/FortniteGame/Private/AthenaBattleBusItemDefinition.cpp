#include "AthenaBattleBusItemDefinition.h"

USoundBase* UAthenaBattleBusItemDefinition::GetLobbyLoopingSound() const {
    return NULL;
}

USoundBase* UAthenaBattleBusItemDefinition::GetLobbyLoopingMusic() const {
    return NULL;
}

USoundBase* UAthenaBattleBusItemDefinition::GetIgnitionSound() const {
    return NULL;
}

USoundBase* UAthenaBattleBusItemDefinition::GetFlightLoopingSound() const {
    return NULL;
}

USoundBase* UAthenaBattleBusItemDefinition::GetFlightLoopingMusic() const {
    return NULL;
}

TSoftClassPtr<ABattleBusCosmeticInstanceBase> UAthenaBattleBusItemDefinition::GetBusPrefabClass() const {
    return NULL;
}

UAthenaBattleBusItemDefinition::UAthenaBattleBusItemDefinition() {
    ItemType = EFortItemType::AthenaBattleBus;
}

