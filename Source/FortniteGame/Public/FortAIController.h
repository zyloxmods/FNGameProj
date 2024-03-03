#pragma once
#include "CoreMinimal.h"
#include "AIController.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavPathObserverInterface.h"
#include "AIHotSpotUseInfo.h"
#include "EFortTeam.h"
#include "EFortressAIType.h"
#include "FortAIEncounterInfoOwnerInterface.h"
#include "FortTeamActorInterface.h"
#include "Templates/SubclassOf.h"
#include "FortAIController.generated.h"

class AActor;
class ABuildingSMActor;
class AFortAIController;
class AFortAIPawn;
class UAIGoalComponent;
class UFortAIEncounterInfo;
class UFortPathFollowingComponent;

UCLASS(Blueprintable, MinimalAPI, Config=Game)
class AFortAIController : public AAIController, public IFortTeamActorInterface, public INavPathObserverInterface, public IFortAIEncounterInfoOwnerInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsingNavMesh: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAlwaysNotifyBumpWall: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bInstantRotation: 1;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bTurnTransitionsEnabled: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowHotspotAbilityLooping: 1;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPathFollowingComponent* FortPathFollowingComp;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIHotSpotUseInfo CurrentHotSpot;
    
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoalInfoUpdateRate;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* GoalActor;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GoalVisibilityPersistanceTime;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAIPawn* MyFortPawn;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAIGoalComponent* AIGoalComponent;
    
public:
    AFortAIController();
    UFUNCTION(BlueprintCallable)
    void WakeUp();
    
    UFUNCTION(BlueprintCallable)
    void UnlockMovementResource();
    
    UFUNCTION(BlueprintCallable)
    void UnlockBehaviorResource();
    
    UFUNCTION(BlueprintCallable)
    void SetupCustomVIM(UClass* VIM);
    
    UFUNCTION(BlueprintCallable)
    void SetTeamInt(uint8 InTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetTeam(TEnumAsByte<EFortTeam::Type> InTeam);
    
    UFUNCTION(BlueprintCallable)
    void SetPawnAIType(EFortressAIType NewAIType, AActor* SpawnSpot);
    
    UFUNCTION(BlueprintCallable)
    void SetIsSleeping(bool bNewSleepStatus);
    
    UFUNCTION(BlueprintCallable)
    void SetGoalActor(AActor* InActor, bool bLocationAlwaysKnown);
    
    UFUNCTION(BlueprintCallable)
    void SetFullPeripheralVision(bool bNewFullPeripheralVision);
    
    UFUNCTION(BlueprintCallable)
    void SetAlwaysGameplayRelevant(bool bInAlwaysGameplayRelevant);
    
    UFUNCTION(BlueprintCallable)
    void OnBuildingActorGoalDestroyed();
    
    UFUNCTION(BlueprintCallable)
    void LockMovementResource();
    
    UFUNCTION(BlueprintCallable)
    void LockBehaviorResource();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsIgnoringProximity(AFortAIController* FortAIController);
    
    UFUNCTION(BlueprintCallable)
    bool IsAllowedToSleep();
    
    UFUNCTION(BlueprintCallable)
    void IgnoreProximityForDuration(float DurationToIgnore);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetGoalActor() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAIEncounterInfo* GetEncounterInfo() const;
    
    UFUNCTION(BlueprintCallable)
    bool CreateBuildingActor(TSubclassOf<ABuildingSMActor> BuildingClass, FVector BuildLoc, FRotator BuildRot, bool bMirrored);
    
    UFUNCTION(BlueprintCallable)
    void ClearAllFocalPoints();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    uint8 GetTeam() const override PURE_VIRTUAL(GetTeam, return 0;);
    
};

