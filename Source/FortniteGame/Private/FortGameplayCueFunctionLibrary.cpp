#include "FortGameplayCueFunctionLibrary.h"

void UFortGameplayCueFunctionLibrary::RemoveGameplayCueLocal(AActor* Target, FGameplayTag GameplayCueTag, const FGameplayCueParameters& CueParameters, bool bOnlyNotifies) {
}

void UFortGameplayCueFunctionLibrary::PlayBurstEffect(const FFortBurstEffectData& BurstEffect, AActor* Target, const FGameplayCueParameters& CueParameters, FFortGameplayCueSpawnResult& OutResult) {
}

void UFortGameplayCueFunctionLibrary::ExecuteGameplayCueLocal(AActor* Target, FGameplayTag GameplayCueTag, const FGameplayCueParameters& CueParameters, bool bOnlyNotifies) {
}

bool UFortGameplayCueFunctionLibrary::CheckSpawnConditionForSource(AActor* Target, AActor* SourceActor, const FFortGameplayCueSpawnCondition& Condition) {
    return false;
}

bool UFortGameplayCueFunctionLibrary::CheckSpawnConditionForHitResult(AActor* Target, AActor* SourceActor, const FHitResult& HitResult, const FFortGameplayCueSpawnCondition& Condition) {
    return false;
}

bool UFortGameplayCueFunctionLibrary::CheckSpawnConditionForCueParameters(AActor* Target, const FGameplayCueParameters& CueParameters, const FFortGameplayCueSpawnCondition& Condition) {
    return false;
}

void UFortGameplayCueFunctionLibrary::BuildCueParametersFromSource(AActor* SourceActor, FGameplayCueParameters& OutCueParameters) {
}

void UFortGameplayCueFunctionLibrary::BuildCueParametersFromHitResult(AActor* SourceActor, const FHitResult& HitResult, FGameplayCueParameters& OutCueParameters) {
}

void UFortGameplayCueFunctionLibrary::AddGameplayCueLocal(AActor* Target, FGameplayTag GameplayCueTag, const FGameplayCueParameters& CueParameters, bool bOnlyNotifies) {
}

UFortGameplayCueFunctionLibrary::UFortGameplayCueFunctionLibrary() {
}

