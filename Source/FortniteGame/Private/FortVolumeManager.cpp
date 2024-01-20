#include "FortVolumeManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool AFortVolumeManager::WillVolumeDeleteAfterActorSpawn(AFortVolume* Volume) const {
    return false;
}

bool AFortVolumeManager::VolumeContainsUser(APlayerState* PlayerState, AFortVolume* Volume) const {
    return false;
}

void AFortVolumeManager::UpdateVolumeLevelStreams() {
}

void AFortVolumeManager::UpdatePublishWatermarkFlagForVolume(AFortVolume* Volume) {
}

void AFortVolumeManager::TryActivateQueuedVolumes(EAthenaGamePhase GamePhase) {
}

AFortVolume* AFortVolumeManager::SpawnVolume(TSubclassOf<AFortVolume> VolumeActor, UFortPlaysetItemDefinition* Playset, FVector Location, FRotator Rotation) {
    return NULL;
}

bool AFortVolumeManager::ShouldSpawnActor(UWorld* WorldContext, TSubclassOf<AActor> ActorClass, const FVector& Location, const FRotator& Rotation) const {
    return false;
}

bool AFortVolumeManager::ShouldShowPublishWatermarkForVolume(AFortVolume* Volume, FString& CreatorName, FString& CreativeMnemonic, FText& Title) const {
    return false;
}

void AFortVolumeManager::ResetVolumeAndLevelRecord(AFortVolume* Volume, AFortPlayerController* RequestingFortPC) {
}

void AFortVolumeManager::ResaveActorWithVolume(AActor* Actor, AFortVolume* Volume) {
}

void AFortVolumeManager::ResaveActor(AActor* Actor) {
}

void AFortVolumeManager::RemoveDeadBuildingActor(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortVolumeManager::OnRep_ClientBudgetData() {
}

void AFortVolumeManager::MinigameExitReadOnlyForVolume(AFortVolume* Volume) {
}

void AFortVolumeManager::IncrementUserIslandLoading() {
}

void AFortVolumeManager::HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume) {
}

void AFortVolumeManager::HandleVolumeReset(AFortVolume* VolumeResetting) {
}

void AFortVolumeManager::HandlePlayerPawnPossessed(APawn* Pawn) {
}

void AFortVolumeManager::HandleOnActorSpawned(AActor* Actor) {
}

void AFortVolumeManager::HandleActorHealthChanged(AActor* Actor, float NewHealth) {
}

void AFortVolumeManager::HandleActorExitedVolume(AActor* Actor, UPrimitiveComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume) {
}

void AFortVolumeManager::HandleActorEnteredVolume(AActor* Actor, UPrimitiveComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume) {
}

void AFortVolumeManager::HandleActorEndPlay(AActor* Actor, const TEnumAsByte<EEndPlayReason::Type> EndPlayReason) {
}

bool AFortVolumeManager::GetVolumesForLocation(FVector Location, TArray<AFortVolume*>& Volumes) const {
    return false;
}

bool AFortVolumeManager::GetVolumesForActor(AActor* Actor, TArray<AFortVolume*>& Volumes) const {
    return false;
}

void AFortVolumeManager::GetVolumeManager(const UObject* WorldContextObject, AFortVolumeManager*& OutVolumeManager, EVolumeValidityResult& OutIsValid) {
}

AFortVolume* AFortVolumeManager::GetVolumeForPlayerState(const APlayerState* PlayerState) const {
    return NULL;
}

AFortVolume* AFortVolumeManager::GetVolumeForLocation(FVector Location) const {
    return NULL;
}

AFortVolume* AFortVolumeManager::GetVolumeForActor(const AActor* Actor) const {
    return NULL;
}

AFortMinigame* AFortVolumeManager::GetMinigameForVolume(const AFortVolume* Volume) {
    return NULL;
}

TArray<APlayerState*> AFortVolumeManager::GetAllPlayerStatesInVolume(AFortVolume* Volume) const {
    return TArray<APlayerState*>();
}

TArray<AController*> AFortVolumeManager::GetAllPlayersInVolume(AFortVolume* Volume) const {
    return TArray<AController*>();
}

void AFortVolumeManager::FinishedSpawningCurrentLevelRecord(const FAsyncTaskResult& Result) {
}

void AFortVolumeManager::EnterReadOnlyForVolume(AFortVolume* Volume) {
}

void AFortVolumeManager::DecrementUserIslandLoading() {
}

bool AFortVolumeManager::CanCreatePlayset(AFortPlayerPawn* Thrower, const FVector& StartLocation, const FRotator& PlaysetRotation, UFortPlaysetItemDefinition* NewPlayset) {
    return false;
}

bool AFortVolumeManager::AreIslandsLoading() const {
    return false;
}

void AFortVolumeManager::ApplyLevelSaveToWorld(ULevelSaveRecord* SaveToSpawnFrom, const bool bComplexShouldSpawn) {
}

void AFortVolumeManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortVolumeManager, VolumeActivePlayers);
    DOREPLIFETIME(AFortVolumeManager, ClientBudgetData);
    DOREPLIFETIME(AFortVolumeManager, bInSpawningStartup);
}

AFortVolumeManager::AFortVolumeManager() {
    this->BlackListClassesTable = NULL;
    this->BlackListObjectsTable = NULL;
    this->bInSpawningStartup = false;
    this->OverlapQueue = NULL;
}

