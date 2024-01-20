#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "OnAllEnemiesKilledSignatureDelegate.h"
#include "OnDefenseStateChangedSignatureDelegate.h"
#include "OnEncounterEndedDelegate.h"
#include "OnEncounterStartedDelegate.h"
#include "OnEncounterTimeoutSignatureDelegate.h"
#include "OnEventEndedSignatureDelegate.h"
#include "OnEventStartedSignatureDelegate.h"
#include "OnOnEventStoppedSignatureDelegate.h"
#include "OnWarmupEndedSignatureDelegate.h"
#include "Templates/SubclassOf.h"
#include "FortKeepDefenseManager.generated.h"

class UFortAIEncounterInfo;
class UFortAISpawnGroupProgressionInfo;
class UFortKeepEventInfo;
class UFortKeepEventList;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortKeepDefenseManager : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventStartedSignature OnEventStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnWarmupEndedSignature OnWarmupEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterTimeoutSignature OnEncounterTimeout;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEventEndedSignature OnEventEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnOnEventStoppedSignature OnEventStopped;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllEnemiesKilledSignature OnAllEnemiesKilled;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterStarted OnEncounterStarted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnEncounterEnded OnEncounterEnded;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDefenseStateChangedSignature OnDefenseStateChanged;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* ActiveAIEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAISpawnGroupProgressionInfo* ActiveAISpawnGroup;
    
public:
    AFortKeepDefenseManager();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StopEvent();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartEventFromList(UFortKeepEventList* EventList, int32 EventNumber);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void StartEvent(UFortKeepEventInfo* EventTemplate, int32 DifficultyLevelOffset);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UFortAIEncounterInfo* StartAIEncounter(TSubclassOf<UFortAIEncounterInfo> EncounterTemplate, AActor* TargetActor, UFortAISpawnGroupProgressionInfo* SpawnGroupProgressionInfo, int32 ActivationDelay, int32 EncounterDifficultyLevel, float AliveMultiplier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SkipWarmup();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GoToNextWave();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    FText GetWaveDescription();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    int32 GetNumberAliveEnemies();
    
};

