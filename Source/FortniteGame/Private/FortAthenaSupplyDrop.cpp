#include "FortAthenaSupplyDrop.h"
#include "FortSpectateClickableMapIcon.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFortPickup* AFortAthenaSupplyDrop::SpawnPickupFromItemEntry(UFortWorldItemDefinition* ItemDefinition, const FFortItemEntry& InItemEntry, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector Position, FVector Direction) {
    return NULL;
}

AFortPickup* AFortAthenaSupplyDrop::SpawnPickup(UFortWorldItemDefinition* ItemDefinition, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector Position, FVector Direction) {
    return NULL;
}

void AFortAthenaSupplyDrop::SpawningLootOnDestruction(AController* EventInstigator) {
}

AFortGameModePickup* AFortAthenaSupplyDrop::SpawnGameModePickup(UFortWorldItemDefinition* ItemDefinition, TSubclassOf<AFortGameModePickup> PickupClass, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector Position, FVector Direction) {
    return NULL;
}

void AFortAthenaSupplyDrop::SetLootTableNameOverride(FName TableNameToUse) {
}

void AFortAthenaSupplyDrop::SendSpawnLootAnalytics(AFortPlayerController* FortPC, const TArray<FFortItemEntry>& ItemsToSpawn) const {
}

void AFortAthenaSupplyDrop::OnLootSpawned() {
}

void AFortAthenaSupplyDrop::OnDespawnDueToStorm() {
}

void AFortAthenaSupplyDrop::OnCheckForBeingInStorm() {
}

bool AFortAthenaSupplyDrop::IsPlayingAReplay() const {
    return false;
}

bool AFortAthenaSupplyDrop::GroundTrace(const FVector& TraceStart, const FVector& TraceEnd, FHitResult& OutHit) const {
    return false;
}

void AFortAthenaSupplyDrop::GetSupplyDropSpawnData(float& MinSpawnHeight, float& MaxSpawnHeight) {
}

FVector AFortAthenaSupplyDrop::FindGroundLocationAt(const FVector& InLocation) {
    return FVector{};
}

void AFortAthenaSupplyDrop::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaSupplyDrop, SpecialActorID);
}

AFortAthenaSupplyDrop::AFortAthenaSupplyDrop() {
    this->WaveSpawnSoundCue = NULL;
    this->SpawnOffsetZ = 0.00f;
    this->SearchingSoundCueLoop = NULL;
    this->CachedSpecialActorIdx = 0;
    this->CachedInStormDespawnTimeInSeconds = -1.00f;
    this->SpectatorMapIcon = CreateDefaultSubobject<UFortSpectateClickableMapIcon>(TEXT("FortSpectateClickableMapIcon"));
}

