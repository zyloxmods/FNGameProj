#include "LevelSaveBaseComponent.h"

void ULevelSaveBaseComponent::StopPeriodicSaveTimer() {
}

void ULevelSaveBaseComponent::StartPeriodicSaveTimer() {
}

void ULevelSaveBaseComponent::SaveOutLevelRecord() {
}

bool ULevelSaveBaseComponent::ResaveLevelStreamedActor(AActor* Actor) {
    return false;
}

bool ULevelSaveBaseComponent::ResaveActor(AActor* Actor) {
    return false;
}

bool ULevelSaveBaseComponent::RegisterNewActor(AActor* Actor) {
    return false;
}

void ULevelSaveBaseComponent::RegisterModificationToRollback(AActor* Actor) {
}

bool ULevelSaveBaseComponent::RegisteredDeletedLevelStreamedActor(AActor* Actor) {
    return false;
}

void ULevelSaveBaseComponent::RegisterDeletionToRollback(AActor* Actor) {
}

bool ULevelSaveBaseComponent::RegisterDeletedActor(AActor* Actor) {
    return false;
}

void ULevelSaveBaseComponent::RegisterCreationToRollback(AActor* Actor) {
}

void ULevelSaveBaseComponent::OnFinishSpawning(const FAsyncTaskResult& Result) {
}

void ULevelSaveBaseComponent::OnFinishedRecordWrite(const FAsyncTaskResult& Result) {
}

void ULevelSaveBaseComponent::OnFinishedRecordRead(const FAsyncTaskResult& Result) {
}

void ULevelSaveBaseComponent::LoadLevelRecord() {
}

void ULevelSaveBaseComponent::HandleVolumeStateChanged(EVolumeState NewState, AFortVolume* Volume) {
}

void ULevelSaveBaseComponent::ConstructNewLevelRecord(AActor* Owner) {
}

void ULevelSaveBaseComponent::ApplySaveToWorld(const bool bComplexShouldSpawn) {
}

ULevelSaveBaseComponent::ULevelSaveBaseComponent() {
    TimeBetweenSaves = 1;
    bAutoLoadRecord = false;
    LevelRecord = NULL;
}

