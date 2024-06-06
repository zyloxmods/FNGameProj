#include "FortPlayerStateZone.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerStateZone::ServerSetInAircraft_Implementation(bool bNewInAircraft) {
}
bool AFortPlayerStateZone::ServerSetInAircraft_Validate(bool bNewInAircraft) {
    return true;
}

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

void AFortPlayerStateZone::GetHealthAndShields(float& Health, float& HealthMax, float& Shield, float& ShieldMax) {
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
    DOREPLIFETIME(AFortPlayerStateZone, CurrentSignalInStorm);
    DOREPLIFETIME(AFortPlayerStateZone, MaxSignalInStorm);
    DOREPLIFETIME(AFortPlayerStateZone, AccumulatedItems);
    DOREPLIFETIME(AFortPlayerStateZone, SimulatedAttributes);
    DOREPLIFETIME(AFortPlayerStateZone, bInAircraft);
    DOREPLIFETIME(AFortPlayerStateZone, bHasEverSkydivedFromBus);
    DOREPLIFETIME(AFortPlayerStateZone, bHasEverSkydivedFromBusAndLanded);
    DOREPLIFETIME(AFortPlayerStateZone, QuickbarEquippedItems);
}

AFortPlayerStateZone::AFortPlayerStateZone() {
    SpectatingTarget = NULL;
    KickedFromSessionReason = EFortKickReason::NotKicked;
    CarriedObject = NULL;
    NumRejoins = 0;
    OldTotalScoreStat = 0;
    bInvincibleDueToUI = false;
    CurrentHealth = 1;
    MaxHealth = 1;
    CurrentShield = 1;
    MaxShield = 1;
    CurrentSignalInStorm = 1;
    MaxSignalInStorm = 1;
    PendingDestroyedGadgetItemDefinition = NULL;
    bInAircraft = false;
    bHasEverSkydivedFromBus = false;
    bHasEverSkydivedFromBusAndLanded = false;
}

