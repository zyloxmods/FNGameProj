#include "FortAthenaLivingWorldManager.h"

void UFortAthenaLivingWorldManager::OnSpawnedActorDestroy(AActor* DestroyedActor) {
}

void UFortAthenaLivingWorldManager::OnPatrolPathAdded(AFortAthenaPatrolPath* PatrolPath) {
}

void UFortAthenaLivingWorldManager::OnCurrentPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerUnregisterPointProvider(AActor* PointProvider) {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleVerboseLogging() {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleGenerateEvents() {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerToggleActorMinimap() {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerRegisterPointProvider(AActor* PointProvider) {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerProviderDebugActor(int32 ProviderIndex) {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerGenerateEvents() {
}

void UFortAthenaLivingWorldManager::LivingWorldManagerFlush() {
}

UFortAthenaLivingWorldManager::UFortAthenaLivingWorldManager() {
    this->CachedGameState = NULL;
}

