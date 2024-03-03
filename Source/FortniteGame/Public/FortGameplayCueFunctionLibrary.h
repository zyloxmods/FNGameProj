#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Engine/EngineTypes.h"
#include "GameplayEffectTypes.h"
#include "GameplayTagContainer.h"
#include "FortBurstEffectData.h"
#include "FortGameplayCueSpawnCondition.h"
#include "FortGameplayCueSpawnResult.h"
#include "FortGameplayCueFunctionLibrary.generated.h"

class AActor;

UCLASS(Blueprintable)
class UFortGameplayCueFunctionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortGameplayCueFunctionLibrary();
    UFUNCTION(BlueprintCallable)
    static void RemoveGameplayCueLocal(AActor* Target, FGameplayTag GameplayCueTag, const FGameplayCueParameters& CueParameters, bool bOnlyNotifies);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void PlayBurstEffect(const FFortBurstEffectData& BurstEffect, AActor* Target, const FGameplayCueParameters& CueParameters, FFortGameplayCueSpawnResult& OutResult);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static void ExecuteGameplayCueLocal(AActor* Target, FGameplayTag GameplayCueTag, const FGameplayCueParameters& CueParameters, bool bOnlyNotifies);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool CheckSpawnConditionForSource(AActor* Target, AActor* SourceActor, const FFortGameplayCueSpawnCondition& Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool CheckSpawnConditionForHitResult(AActor* Target, AActor* SourceActor, const FHitResult& HitResult, const FFortGameplayCueSpawnCondition& Condition);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    static bool CheckSpawnConditionForCueParameters(AActor* Target, const FGameplayCueParameters& CueParameters, const FFortGameplayCueSpawnCondition& Condition);
    
    UFUNCTION(BlueprintCallable)
    static void BuildCueParametersFromSource(AActor* SourceActor, FGameplayCueParameters& OutCueParameters);
    
    UFUNCTION(BlueprintCallable)
    static void BuildCueParametersFromHitResult(AActor* SourceActor, const FHitResult& HitResult, FGameplayCueParameters& OutCueParameters);
    
    UFUNCTION(BlueprintCallable)
    static void AddGameplayCueLocal(AActor* Target, FGameplayTag GameplayCueTag, const FGameplayCueParameters& CueParameters, bool bOnlyNotifies);
    
};

