#include "FortMissionStormSafeZone.h"
#include "Components/StaticMeshComponent.h"
#include "AbilitySystemComponent.h"
#include "Net/UnrealNetwork.h"

void AFortMissionStormSafeZone::SetSafeZoneRadius(const float InRadius) {
}


void AFortMissionStormSafeZone::OnRep_ZoneRadius() {
}

void AFortMissionStormSafeZone::OnRep_SafeZoneInStormStateChanged() {
}


float AFortMissionStormSafeZone::GetSafeZoneRadius() const {
    return 0.0f;
}

float AFortMissionStormSafeZone::GetConvertedSafeZoneRadius() const {
    return 0.0f;
}

void AFortMissionStormSafeZone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortMissionStormSafeZone, bSafeZoneInStormStateChanged);
    DOREPLIFETIME(AFortMissionStormSafeZone, SafeZoneRadius);
}

AFortMissionStormSafeZone::AFortMissionStormSafeZone() {
    SafeZoneMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("Safe Zone Mesh"));
    bScaleUniformly = true;
    bSafeZoneInStormStateChanged = false;
    SafeZoneRadius = 1;
    AbilityComponent = CreateDefaultSubobject<UAbilitySystemComponent>(TEXT("Ability Component"));
}

