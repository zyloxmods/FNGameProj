#include "FortVolumeManager.h"
#include "Net/UnrealNetwork.h"
#include "Templates/SubclassOf.h"

bool AFortVolumeManager::WillVolumeDeleteAfterActorSpawn(AFortVolume* Volume) const {
    return false;
}

bool AFortVolumeManager::VolumeContainsUser(const APlayerState* PlayerState, const AFortVolume* Volume) const {
    return false;
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

void AFortVolumeManager::ResaveBuildingFoundationActorFromHealthChange(AActor* Actor, float NewHealth) {
}

void AFortVolumeManager::ResaveActorWithVolume(AActor* Actor, AFortVolume* Volume) {
}

void AFortVolumeManager::ResaveActor(AActor* Actor) {
}

void AFortVolumeManager::RemovePawnNotRespawningInsideVolume(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
}

void AFortVolumeManager::RemoveBuildingFoundationActorFromSave(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum) {
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

void AFortVolumeManager::HandleBuildingFoundationLoaded(ABuildingFoundation* LoadedFoundation) {
}

void AFortVolumeManager::HandleActorHealthChanged(AActor* Actor, float NewHealth) {
}

void AFortVolumeManager::HandleActorExitedVolume(AActor* Actor, UActorComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume) {
}

void AFortVolumeManager::HandleActorEnteredVolume(AActor* Actor, UActorComponent* ActorComponent, APawn* InstigatorPawn, AFortVolume* Volume) {
}

bool AFortVolumeManager::GetVolumesForLocation(FVector Location, TArray<AFortVolume*>& Volumes) const {
    return false;
}

bool AFortVolumeManager::GetVolumesForActor(const AActor* Actor, TArray<AFortVolume*>& Volumes, const bool bUseActorBounds) const {
    return false;
}

void AFortVolumeManager::GetVolumeManager(const UObject* WorldContextObject, AFortVolumeManager*& OutVolumeManager, EVolumeValidityResult& OutIsValid) {
}

AFortVolume* AFortVolumeManager::GetVolumeForPlayerState(const APlayerState* PlayerState) const {
    return NULL;
}

AFortVolume* AFortVolumeManager::GetVolumeForLocationWithComponent(FVector Location, const TSubclassOf<UActorComponent>& ComponentType, TArray<UActorComponent*>& OutComponents) {
    return NULL;
}

AFortVolume* AFortVolumeManager::GetVolumeForLocation(FVector Location) const {
    return NULL;
}

AFortVolume* AFortVolumeManager::GetVolumeForActorWithComponent(const AActor* Actor, const TSubclassOf<UActorComponent>& ComponentType, TArray<UActorComponent*>& OutComponents, const bool bUseActorBounds) {
    return NULL;
}

AFortVolume* AFortVolumeManager::GetVolumeForActor(const AActor* Actor) const {
    return NULL;
}

AFortMinigameSettingsBuilding* AFortVolumeManager::GetSettingsActorForVolume(const AFortVolume* ContextVolume) {
    return NULL;
}

AFortMinigameSettingsBuilding* AFortVolumeManager::GetSettingsActor(const AActor* ContextActor) {
    return NULL;
}

AFortMinigame* AFortVolumeManager::GetMinigameFromVolume(const AActor* Actor) const {
    return NULL;
}

AFortMinigame* AFortVolumeManager::GetMinigameForVolume(const AFortVolume* Volume) {
    return NULL;
}

AFortMinigame* AFortVolumeManager::GetMinigameForPlayerState(const APlayerState* PlayerState) {
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

FEvaluationResult AFortVolumeManager::DoesThermometerHaveBudgetForActor(const AActor* InstigatorActor, AActor* TestActor, const FVector& Location, const FRotator& Rotation) const {
    return FEvaluationResult{};
}

void AFortVolumeManager::DecrementUserIslandLoading() {
}

bool AFortVolumeManager::CanCreatePlayset(AFortPlayerPawn* Thrower, const FVector& StartLocation, const FRotator& PlaysetRotation, UFortPlaysetItemDefinition* NewPlayset) {
    return false;
}

void AFortVolumeManager::AttemptAddToVolumeAfterDelay(AActor* Actor) {
}

bool AFortVolumeManager::AreIslandsLoading() const {
    return false;
}

void AFortVolumeManager::ApplyLevelSaveToWorld(ULevelSaveRecord* SaveToSpawnFrom, const bool bComplexShouldSpawn) {
}

void AFortVolumeManager::AddOrRemovePawnAfterVehicleChange(AFortPlayerPawn* FortPawn, AActor* NewVehicle, AActor* OldVehicle) {
}

void AFortVolumeManager::AddOrRemovePawn(AFortPawn* FortPawn) {
}

bool AFortVolumeManager::ActorsAreInSameVolume(const AActor* Left, const AActor* Right) const {
    return false;
}

void AFortVolumeManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortVolumeManager, VolumeActivePlayers);
    DOREPLIFETIME(AFortVolumeManager, bInSpawningStartup);
}

AFortVolumeManager::AFortVolumeManager() {
    BlackListClassesTable = NULL;
    BlackListObjectsTable = NULL;
    bInSpawningStartup = false;
    OverlapQueue = NULL;
    TraceQueue = NULL;
    FortCreativeGeneralThrottleManager = NULL;
}

