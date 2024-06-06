#include "FortAthenaSupplyDrop.h"
#include "FortSpectateClickableMapIcon.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

AFortPickup* AFortAthenaSupplyDrop::SpawnPickupFromItemEntry(UFortWorldItemDefinition* ItemDefinition, const FFortItemEntry& InItemEntry, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector position, FVector Direction) {
    return NULL;
}

AFortPickup* AFortAthenaSupplyDrop::SpawnPickup(UFortWorldItemDefinition* ItemDefinition, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector position, FVector Direction) {
    return NULL;
}

void AFortAthenaSupplyDrop::SpawningLootOnDestruction(AController* EventInstigator) {
}

AFortGameModePickup* AFortAthenaSupplyDrop::SpawnGameModePickup(UFortWorldItemDefinition* ItemDefinition, TSubclassOf<AFortGameModePickup> PickupClass, int32 NumberToSpawn, AFortPawn* TriggeringPawn, FVector position, FVector Direction) {
    return NULL;
}

void AFortAthenaSupplyDrop::SetLootTableNameOverride(FName TableNameToUse) {
}

void AFortAthenaSupplyDrop::SendSpawnLootAnalytics(AFortPlayerController* FortPC, const TArray<FFortItemEntry>& ItemsToSpawn) const {
}

void AFortAthenaSupplyDrop::OnRep_NumPlayersInteracting() {
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

void AFortAthenaSupplyDrop::GetSupplyDropSpeedData(float& MinSpeed, float& MaxSpeed) {
}

void AFortAthenaSupplyDrop::GetSupplyDropSpawnData(float& MinSpawnHeight, float& MaxSpawnHeight) {
}

FVector AFortAthenaSupplyDrop::FindGroundLocationAt(const FVector& InLocation) {
    return FVector{};
}

void AFortAthenaSupplyDrop::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaSupplyDrop, SpecialActorID);
    DOREPLIFETIME(AFortAthenaSupplyDrop, NumPlayersInteracting);
}

AFortAthenaSupplyDrop::AFortAthenaSupplyDrop() {
    WaveSpawnSoundCue = NULL;
    SpawnOffsetZ = 1;
    SearchingSoundCueLoop = NULL;
    bReplicateLongUseNotifies = false;
    CachedSpecialActorIdx = 0;
    CachedInStormDespawnTimeInSeconds = 1;
    LongInteractAudioComponent = NULL;
    SpectatorMapIcon = CreateDefaultSubobject<UFortSpectateClickableMapIcon>(TEXT("FortSpectateClickableMapIcon"));
    NumPlayersInteracting = 0;
    bVisualizePlayerInteractionChanges = false;
}

