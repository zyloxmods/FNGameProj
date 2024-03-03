#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "AthenaGameMessageData.h"
#include "BagelAreaSpecialActorData.h"
#include "BagelDifficultySettings.h"
#include "BagelFriendsLeaderboard.h"
#include "BagelLeaderboardQuery.h"
#include "BagelLootTierOverrideAssetData.h"
#include "BagelObjectiveAreaInstanceData.h"
#include "BagelPlayerDataArray.h"
#include "BagelScoreData.h"
#include "BagelScoreMultiplierSpawnData.h"
#include "EAthenaGamePhaseStep.h"
#include "EBagelDifficulty.h"
#include "EBagelPhase.h"
#include "FortAthenaMutator.h"
#include "OnBagelPhaseChangedDelegate.h"
#include "OnBagelPlayerDataChangedDelegate.h"
#include "OnBagelVictoryDelegate.h"
#include "OnPlayerFriendLeaderboardUpdatedDelegate.h"
#include "OnTeamScoreMultiplierChangedDelegate.h"
#include "RiftDamagerInfo.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMutator_Bagel.generated.h"

class AActor;
class ABuildingActor;
class ABuildingRift;
class AController;
class AFortAIPawn;
class AFortPawn;
class AFortPlayerControllerAthena;
class AFortPlayerStart;
class AFortPlayerStateAthena;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UFortAIEncounterInfo;
class UFortDifficultyEncounterSettings;
class UMaterialInterface;
class UPrimitiveComponent;

UCLASS(Blueprintable)
class AFortAthenaMutator_Bagel : public AFortAthenaMutator {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTeamScoreMultiplierChanged OnTeamScoreMultiplierChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBagelPlayerDataChanged OnPlayerDataChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBagelPhaseChanged OnPhaseChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnBagelVictory OnBagelVictory;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerFriendLeaderboardUpdated OnPlayerFriendLeaderboardUpdated;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideReplicationSettingsDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxAIPerClient;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ReplicateGameplayCues;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EBagelDifficulty CurrentDifficulty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> StormMaterialOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ObjectiveObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> FinalPhaseObjectiveObjectClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag StartingAreaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ObjectiveAreaTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsPreparationPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsSurvivePhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsMovingPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsAftermathPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat IsFinalPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RefillPlayerHealth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RefillPlayerShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat OnlyRespawnAtNewPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ShouldRespawnDeadPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnScoreMultiplierTraceStartHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnSscoreMultiplierTraceEndHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBagelAreaSpecialActorData AreaSpecialActorData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBagelScoreMultiplierSpawnData ScoreMutliplierSpawnData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDifficultyEncounterSettings* DifficultyEncounterSettingsStatic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDifficultyEncounterSettings* DifficultyEncounterSettingsDynamic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortDifficultyEncounterSettings* DifficultyEncounterSettingsFinalPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DisplayIntroGameMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_Intro;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat DisplayOnTeamMultiplierIncreasedGameMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaGameMessageData GameMsg_OnTeamMultiplierIncreased;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBagelDifficultySettings DifficultySettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseLootTierOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBagelLootTierOverrideAssetData> LootTierOverrides;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HeadshotGameplayTag;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FBagelScoreData ScoreEventList[14];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ObjectiveAreaCompletedScoreMultiplierBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat RiftDestroyedScoreMultiplierBonus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StreakScoreMultiplierUseSpecialMechanicToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StreakScoreMultiplierResetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StreakScoreMultiplierKillThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StreakScoreMultiplierTimeThresholdToActivate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StreakScoreMultiplierMaxLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat StreakScoreMultiplierValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlayerStatsNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FriendsLeaderboardDisplayedNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeSecRetreiveLeaderboardTimeOut;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bIsGameOver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool bIsRespawningAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 CurrentObjectiveAreaIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    uint8 TotalObjectiveAreaCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBagelObjectiveAreaInstanceData> ObjectiveAreas;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* CurrentEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAIEncounterInfo* FinalPhaseEncounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CurrentLootTierGroupOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TeamScoreMultiplier, meta=(AllowPrivateAccess=true))
    uint8 TeamScoreMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_PlayerData, meta=(AllowPrivateAccess=true))
    FBagelPlayerDataArray PlayerDataArray;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_CurrentPhase, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBagelPhase::Type> CurrentPhase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStart* RespawnLocationActor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FRiftDamagerInfo> RiftDamagerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AFortAIPawn* FinalBoss;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBagelFriendsLeaderboard LocalPlayerFriendsLeaderboard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FBagelLeaderboardQuery LocalPlayerFriendsLeaderboardQuery;
    
public:
    AFortAthenaMutator_Bagel();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void RetrievePlayerFriendsLeaderBoard(AFortPlayerControllerAthena* AthenaPC);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ResetStreakScoreMultiplier(AFortPlayerStateAthena* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    void OverrideStormMaterial();
    
    UFUNCTION(BlueprintCallable)
    void OnScoreMultiplierInteractionCompleted(ABuildingActor* SelfActor, AFortPawn* InteractingPawn);
    
    UFUNCTION(BlueprintCallable)
    void OnSafeZoneUpdated();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamScoreMultiplier();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_PlayerData();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_CurrentPhase();
    
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
    UFUNCTION(BlueprintCallable)
    void HandleRiftSpawned(UFortAIEncounterInfo* Encounter, ABuildingRift* Rift);
    
    UFUNCTION(BlueprintCallable)
    void HandleRiftDying(UFortAIEncounterInfo* Encounter, ABuildingRift* Rift, AController* Controller, AActor* DamageActor);
    
    UFUNCTION(BlueprintCallable)
    void HandleRiftDamaged(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void HandleFinalPhaseAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy);
    
    UFUNCTION(BlueprintCallable)
    void HandleFinalPhaseAIDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
    UFUNCTION(BlueprintCallable)
    void HandleAISpawned(UFortAIEncounterInfo* Encounter, AFortAIPawn* SpawnedEnemy);
    
    UFUNCTION(BlueprintCallable)
    void HandleAIDied(AActor* DamagedActor, float Damage, AController* InstigatedBy, AActor* DamageCauser, FVector HitLocation, UPrimitiveComponent* FHitComponent, FName BoneName, FVector Momentum);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerScore(AFortPlayerControllerAthena* AthenaPC, int32& OutScore) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetPlayerBestScore(AFortPlayerControllerAthena* AthenaPC, int32& OutStatValue) const;
    
};

