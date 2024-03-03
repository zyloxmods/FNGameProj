#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameFramework/Actor.h"
#include "EAssignmentCreationResult.h"
#include "FortAIAssignmentIdentifier.h"
#include "FortAIGoalInfo.h"
#include "FortInitializationInterface.h"
#include "PawnGoalSelectionTableEntry.h"
#include "Templates/SubclassOf.h"
#include "FortAIGoalManager.generated.h"

class AFortAIController;
class UEnvQuery;
class UFortAIAssignment;
class UFortAIAssignmentSettings;
class UFortAIGoalProvider;
class UObject;

UCLASS(Blueprintable)
class AFortAIGoalManager : public AActor, public IFortInitializationInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAIAssignment*> WorldAssignments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortAIAssignment*> WorldEnemyAssignments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIAssignment* DefaultAttackPlayersAssignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UEnvQuery*> CombinedQueries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIAssignmentSettings* DefaultEncounterAssignmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAIAssignmentSettings* DefaultEnemyAssignmentSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPawnGoalSelectionTableEntry> PawnGoalSelectionTable;
    
public:
    AFortAIGoalManager();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContext"))
    static void SetCurrentGoalDiscouragement(UObject* WorldContext, AFortAIController* AI);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveWorldAssignment(const UObject* WorldContextObject, FFortAIAssignmentIdentifier AssignmentIdentifier);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveGoalsFromWorldAssignment(UObject* WorldContextObject, const FFortAIAssignmentIdentifier& AssignmentIdentifier, const TArray<FFortAIGoalInfo> GoalInfos);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void RemoveGoalFromWorldAssignment(UObject* WorldContextObject, const FFortAIAssignmentIdentifier& AssignmentIdentifier, const FFortAIGoalInfo GoalInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MakeGoalsFromLocationsAndActor(TArray<FFortAIGoalInfo> Goals, const UObject* WorldContextObject, const TArray<FVector>& GoalLocations, const AActor* GoalActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MakeGoalsFromLocations(TArray<FFortAIGoalInfo> Goals, const UObject* WorldContextObject, const TArray<FVector>& GoalLocations);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MakeGoalsFromActors(TArray<FFortAIGoalInfo> Goals, const UObject* WorldContextObject, const TArray<AActor*>& GoalActors, bool bActorsAlwaysPerceived, bool bGoalActorsAllowUndermining);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MakeGoalFromLocation(FFortAIGoalInfo Goal, const UObject* WorldContextObject, const FVector& GoalLocation);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void MakeGoalFromActor(FFortAIGoalInfo Goal, const UObject* WorldContextObject, AActor* GoalActor, bool bActorAlwaysPerceived, bool bGoalActorAllowsUndermining);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateWorldAssignment(UObject* WorldContextObject, FFortAIAssignmentIdentifier WorldAssignmentIdentifier, UFortAIAssignmentSettings* AssignmentSettings, TSubclassOf<UFortAIGoalProvider> GoalProvider, FFortAIAssignmentIdentifier& AssignmentIdentifier, EAssignmentCreationResult& CreationResult);
    
    UFUNCTION(BlueprintCallable)
    UFortAIAssignment* AddWorldAssignment(UFortAIAssignmentSettings* AssignmentSettings, AActor* GoalActor);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddGoalToWorldAssignment(UObject* WorldContextObject, const FFortAIAssignmentIdentifier& AssignmentIdentifier, const FFortAIGoalInfo GoalInfo);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddGoalsToWorldAssignment(UObject* WorldContextObject, const FFortAIAssignmentIdentifier& AssignmentIdentifier, const TArray<FFortAIGoalInfo> GoalInfos);
    
    UFUNCTION(BlueprintCallable)
    void AddGoalActorToAssignment(UFortAIAssignment* Assignment, AActor* GoalActor);
    
    UFUNCTION(BlueprintCallable)
    void AddGoal(AActor* GoalActor, UFortAIAssignmentSettings* GoalSettings);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void WorldReady() override PURE_VIRTUAL(WorldReady,);
    
    UFUNCTION()
    bool NeedsWorldReady() const override PURE_VIRTUAL(NeedsWorldReady, return false;);
    
    UFUNCTION()
    void MatchStarted() override PURE_VIRTUAL(MatchStarted,);
    
};

