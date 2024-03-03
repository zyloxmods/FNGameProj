#pragma once
#include "CoreMinimal.h"
#include "ChildCheatManager.h"
#include "FortCheatManagerMissionsInterface.h"
#include "FortCheatManagerMissions.generated.h"

UCLASS(Blueprintable)
class UFortCheatManagerMissions : public UChildCheatManager, public IFortCheatManagerMissionsInterface {
    GENERATED_BODY()
public:
    UFortCheatManagerMissions();
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSecondaryMissionHeaders();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToMissionActor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendMissionEvent(const FString& MissionEventName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RegenerateZoneMissionsWithDifficultyLevel(float DifficultyLevelOverride);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RegenerateZoneMissions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MissionForceSuccess(const FString& MissionName, float FractionCompleted);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MissionForcePrimarySuccess(float FractionCompleted);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MissionForcePrimaryFailure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MissionForceFailure(const FString& MissionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadMissionGenerator(const FString& GeneratorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadMission(const FString& MissionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListMissions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListMissionGenerators();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSaveMissionStateAndWorld(const FString& SaveFileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceCompleteDumpedObjective(const FString& MissionName, const int32 ObjectiveIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceCompleteDisplayedObjective(const int32 ObjectiveIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecuteNewMissionGeneration(float DifficultyLevel, const FString& GeneratorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EndDeimosSpawning();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllDisplayedMissions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllActorsWithAssetTags();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllActiveMissions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpActorsWithAssetTags(const FString& TagList);
    
    
    // Fix for true pure virtual functions not being implemented
};

