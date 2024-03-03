#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "FortBotMissionLogic.generated.h"

class AActor;
class AFortAIController;
class AFortBotController;
class AFortBotStructureBuilder;
class AFortMission;
class UBehaviorTree;
class UFortBuildingInstructions;

UCLASS(Blueprintable)
class UFortBotMissionLogic : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortMission* Mission;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Goals;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortBotStructureBuilder*> Builders;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBehaviorTree* CurrentBehaviorAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AFortBotController*> AssignedAI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<uint8> GoalHasLocator;
    
    UFortBotMissionLogic();
    UFUNCTION(BlueprintCallable)
    AFortBotStructureBuilder* SpawnStructureBuilder(AActor* MissionGoal, UFortBuildingInstructions* BuildingInstructions);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalsInvulnerable(bool bGodMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCurrentBehavior(UBehaviorTree* Behavior);
    
    UFUNCTION(BlueprintCallable)
    void ResetBehavior();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionActivated();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnInteractWithMissionGoal(AFortAIController* BotAI, AActor* MissionGoal);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    bool OnCanStartOtherMission(AFortAIController* BotAI, AFortMission* OtherMission);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAssignedBehavior(AFortAIController* BotAI);
    
    UFUNCTION(BlueprintCallable)
    void MarkSingleLocator(const AActor* LocatorActor);
    
    UFUNCTION(BlueprintCallable)
    void MarkAllLocated();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllLocated();
    
};

