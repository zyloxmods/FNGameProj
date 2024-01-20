#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "Perception/AIPerceptionTypes.h"
#include "AI/Navigation/NavPathObserverInterface.h"
#include "AIBotSkills.h"
#include "EAlertLevel.h"
#include "EDBNOPlayStyle.h"
#include "FortAthenaInventoryInformation.h"
#include "FortAthenaLoadout.h"
#include "FortAthenaMutator_EQSProviderInterface.h"
#include "FortInventoryOwnerInterface.h"
#include "FortTeamActorInterface.h"
#include "TargetHandler.h"
#include "FortAthenaAIBotController.generated.h"

class AActor;
class AAthenaAIController;
class ABuildingActor;
class AFortAthenaMutator_Bots;
class AFortGameModeAthena;
class AFortInventory;
class AFortPawn;
class AFortPlayerPawnAthena;
class UBehaviorTree;
class UFortAthenaAIEvaluator;
class UFortServerBotManagerAthena;
class UFortWorldItem;

UCLASS(Blueprintable, Config=Game)
class FORTNITEGAME_API AFortAthenaAIBotController : public AAIController, public IFortTeamActorInterface, public INavPathObserverInterface, public IFortInventoryOwnerInterface, public IFortAthenaMutator_EQSProviderInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAthenaLoadout CustomizationLoadout;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBehaviorTree* BehaviorTree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortAthenaInventoryInformation> SlotItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerPawnAthena* PlayerBotPawn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortServerBotManagerAthena* CachedBotManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CachedGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Bots* CachedBotMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTargetHandler TargetHandler;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EAlertLevel CurrentAlertLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float VisualStimStrengthThresholdToBecomeThreatened;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortInventory* Inventory;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaAIEvaluator*> AIEvaluators;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Skill;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDBNOPlayStyle DBNOPlayStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIBotSkills AIBotSkills;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bWaitForMapReadyToStartLogic: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItem* CachedWorldItem;
    
public:
    AFortAthenaAIBotController();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPawnDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void OnTargetPawnDead(AFortPawn* FortPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetBuildingDestroyed(ABuildingActor* Building, AAthenaAIController* AIController);
    
    UFUNCTION(BlueprintCallable)
    void OnPerceptionSensed(AActor* SourceActor, FAIStimulus Stim);
    
    UFUNCTION(BlueprintCallable)
    void OnAgentDBNO(AFortPawn* InPlayer, bool bInIsDBNO);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
};

