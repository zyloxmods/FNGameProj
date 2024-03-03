#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "AI/Navigation/NavAgentInterface.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "BattleBusPOI.h"
#include "CachedPOIVolumeLocations.h"
#include "ConstructionBuildingInfo.h"
#include "DebugMinimapData.h"
#include "EAthenaGamePhaseStep.h"
#include "FortAthenaAIBotRunTimeCustomizationData.h"
#include "FortServerBotInfo.h"
#include "NavigationPOI.h"
#include "FortServerBotManagerAthena.generated.h"

class AActor;
class ABuildingFoundation;
class AController;
class AFortAthenaMutator_Bots;
class AFortGameModeAthena;
class AFortGameStateAthena;
class AFortPlayerPawnAthena;
class AFortPlayerStartWarmup;
class AFortTeamInfoAthena;
class APawn;
class IFortSafeZoneInterface;
class UFortSafeZoneInterface;
class UAthenaAIPopulationTracker;
class UCacheSafeZoneLocation;
class UCurveFloat;
class UDataTable;
class UEnvQuery;
class UFortAthenaAIBotCustomizationData;
class UFortAthenaAIBotNameDataAsset;
class UFortAthenaAISpawnerDataComponentList;
class UFortAthenaBeaconComponent;

UCLASS(Blueprintable)
class UFortServerBotManagerAthena : public UObject, public INavAgentInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortServerBotInfo> DeadBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortServerBotInfo> PlayerBotsRestartLeft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameModeAthena* CachedGameMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortGameStateAthena* CachedGameState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaMutator_Bots* CachedBotMutator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebugMinimapData DebugMinimapData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBotHostileToHumanPlayersOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseAllBattleBusPOIsSquadRatio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCurveFloat* TagQueryWeightChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnvQuery> FindLocationsAroundPOIQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleBusPOI> BattleBusTagQueryPOIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBattleBusPOI> SecondaryBattleBusTagQueryPOIList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavigationPOI> OnGroundTagQueryPOIList;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FConstructionBuildingInfo ConstructionBuildingInfo[6];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseCustomSupportedItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* BotItemDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat UseRegionalNameList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAthenaAIBotNameDataAsset> BotNameDataAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThankBusDriverProbability;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThankBusDriverMinTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat ThankBusDriverMaxTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat MaxNumberOfBotsToSpawnAroundPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxAroundBotDistanceToSearchPOIToLand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SupportedItemTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FCachedPOIVolumeLocations> CachedValidPOIVolumeLocations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<ABuildingFoundation*> CachedBuildingFoundations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortPlayerStartWarmup* LastTeamPlayerStart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TMap<int32, UCacheSafeZoneLocation*> CacheSafeZoneLocationsMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DeadBotCleanupMinDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSet<FString> ReservedPlayerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<int32> LocationsInSafeZoneFreeIndices;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortTeamInfoAthena* CurrentFillingTeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FScalableFloat BotsUniqueIDUseValidAccountID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentBotControllerUID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortAthenaBeaconComponent*> BeaconList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaAIPopulationTracker* CachedAIPopulationTracker;
    
public:
    UFortServerBotManagerAthena();
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawnAthena* SpawnBot(const FVector& InSpawnLocation, const FRotator& InSpawnRotation, const UFortAthenaAIBotCustomizationData* InBotData, const FFortAthenaAIBotRunTimeCustomizationData& InRuntimeBotData);
    
    UFUNCTION(BlueprintCallable)
    APawn* SpawnAI(const FVector& InSpawnLocation, const FRotator& InSpawnRotation, const UFortAthenaAISpawnerDataComponentList* AISpawnerComponentList);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterface, const EAthenaGamePhaseStep GamePhaseStep);
    
public:
    UFUNCTION(BlueprintCallable)
    void KillBots(bool bKillPlayers, bool bKillNoneParticipants, uint8 TeamIndex, AActor* BotOwner);
    
    UFUNCTION(BlueprintCallable)
    void JoinTeam(const AController* SourceTeamController, AController* DestinationTeamController);
    
    
    // Fix for true pure virtual functions not being implemented
};

