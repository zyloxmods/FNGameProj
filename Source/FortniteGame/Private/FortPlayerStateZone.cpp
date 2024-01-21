#include "FortPlayerStateZone.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerStateZone::OnRep_SpectatingTarget() {
}

void AFortPlayerStateZone::OnRep_QuickbarEquippedItems() {
}

void AFortPlayerStateZone::OnRep_NumRejoins() {
}

void AFortPlayerStateZone::OnRep_AccumulatedItems() {
}

void AFortPlayerStateZone::MulticastTriggerOnGadgetTrackedAttributeDestroyedFX_Implementation(const UFortGadgetItemDefinition* GadgetItemDefinition) {
}

bool AFortPlayerStateZone::IsPlayerDead() const {
    return false;
}

int32 AFortPlayerStateZone::GetSpectatorCount() {
    return 0;
}

float AFortPlayerStateZone::GetSimulatedAttributeValue(const FGameplayAttribute& Attribute, const float DefaultValue) const {
    return 0.0f;
}

FString AFortPlayerStateZone::GetPlayerNameForStreaming() const {
    return TEXT("");
}

int32 AFortPlayerStateZone::GetNumOfAccumulatedItem(const UFortWorldItemDefinition* ItemDefinition) const {
    return 0;
}

int32 AFortPlayerStateZone::GetNumOfAccumulatedBluGlo() const {
    return 0;
}

void AFortPlayerStateZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerStateZone, SpectatingTarget);
    DOREPLIFETIME(AFortPlayerStateZone, Spectators);
    DOREPLIFETIME(AFortPlayerStateZone, KickedFromSessionReason);
    DOREPLIFETIME(AFortPlayerStateZone, CarriedObject);
    DOREPLIFETIME(AFortPlayerStateZone, NumRejoins);
    DOREPLIFETIME(AFortPlayerStateZone, bInvincibleDueToUI);
    DOREPLIFETIME(AFortPlayerStateZone, CurrentHealth);
    DOREPLIFETIME(AFortPlayerStateZone, MaxHealth);
    DOREPLIFETIME(AFortPlayerStateZone, CurrentShield);
    DOREPLIFETIME(AFortPlayerStateZone, MaxShield);
    DOREPLIFETIME(AFortPlayerStateZone, AccumulatedItems);
    DOREPLIFETIME(AFortPlayerStateZone, SimulatedAttributes);
    DOREPLIFETIME(AFortPlayerStateZone, bHasEverSkydivedFromBus);
    DOREPLIFETIME(AFortPlayerStateZone, bHasEverSkydivedFromBusAndLanded);
    DOREPLIFETIME(AFortPlayerStateZone, QuickbarEquippedItems);
}

AFortPlayerStateZone::AFortPlayerStateZone() {
    this->SpectatingTarget = NULL;
    this->KickedFromSessionReason = EFortKickReason::NotKicked;
    this->CarriedObject = NULL;
    this->NumRejoins = 0;
    this->OldTotalScoreStat = 0;
    this->bInvincibleDueToUI = false;
    this->CurrentHealth = 0.00f;
    this->MaxHealth = 0.00f;
    this->CurrentShield = 0.00f;
    this->MaxShield = 0.00f;
    this->PendingDestroyedGadgetItemDefinition = NULL;
    this->bHasEverSkydivedFromBus = false;
    this->bHasEverSkydivedFromBusAndLanded = false;
}

