#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "EFortEncounterDirection.h"
#include "EFortObjectiveStatus.h"
#include "EFortTeam.h"
#include "EPollActorsInVolumeTypes.h"
#include "EncounterEnvironmentQueryInfo.h"
#include "FortEncounterSettings.h"
#include "FortMissionEvent.h"
#include "FortMissionEventName.h"
#include "Templates/SubclassOf.h"
#include "TieredWaveSetCollectionData.h"
#include "TieredWaveSetData.h"
#include "FortMissionLibrary.generated.h"

class AActor;
class ABuildingActor;
class AFortBluGloManager;
class AFortMission;
class AFortPawn;
class AFortPickup;
class AFortPlacementActor;
class AFortPlayerController;
class AFortPlayerPawn;
class AFortPlayerStateZone;
class UBoxComponent;
class UDataAsset;
class UFortAIEncounterInfo;
class UFortMissionEventParams;
class UFortMissionInfo;
class UFortMissionItemDefinition;
class UFortSchematicItemDefinition;
class UFortWorldItemDefinition;
class UObject;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortMissionLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFortMissionLibrary();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool UnregisterForMissionEvents(AActor* ActorToUnregister, FGuid MissionGuid);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool TeleportPlayerPawn(AFortPlayerPawn* PlayerPawn, FVector DestLocation, FRotator DestRotation, bool bIgnoreCollision, bool bIgnoreSupplementalKillVolumeSweep);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void TeleportPawnNearLocation(AFortPawn* Pawn, FVector DestLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopAIEncounterAgainstActor(UObject* WorldContextObject, AActor* TargetActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StopAIEncounter(UObject* WorldContextObject, UFortAIEncounterInfo* ActiveEncounter, EFortObjectiveStatus ObjectiveStatus);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void StartPlayingMission(UObject* WorldContextObject, const FGuid& MissionGuid);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAIEncounterInfo* StartAIEncounterWithEnvironmentQuery(UObject* WorldContextObject, FString& AssociatedMissionName, TSubclassOf<UFortAIEncounterInfo> EncounterTemplate, AActor* TargetActor, FEncounterEnvironmentQueryInfo EnvironmentQueryInfo, AActor* QueryActor, FGameplayTagContainer InjectedTags, FFortEncounterSettings EncounterSettings, int32 ActivationDelay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAIEncounterInfo* StartAIEncounter(UObject* WorldContextObject, FString& AssociatedMissionName, TSubclassOf<UFortAIEncounterInfo> EncounterTemplate, AActor* TargetActor, FGameplayTagContainer InjectedTags, FFortEncounterSettings EncounterSettings, int32 ActivationDelay);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool SpawnPlacementMissionActor(UObject* WorldContextObject, const TSubclassOf<AActor>& ActorToSpawn, const FVector& SpawnLocation, const FRotator& SpawnRotation, AActor* PlacementLocationActor, AActor*& OutSpawnedActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortPickup* SpawnMissionItemPickupInWorld(UObject* WorldContextObject, FGuid MissionGuid, UFortWorldItemDefinition* ItemDefinition, int32 NumberToSpawn, FVector position, FVector Direction, int32 OverrideMaxStackCount);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortPickup* SpawnMissionItemPickup(UObject* WorldContextObject, FGuid MissionGuid, UFortMissionItemDefinition* MissionItemDefinition, FVector StartPosition, AFortPawn* TargetPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static ABuildingActor* SpawnBuildingActorAtTransform(UObject* WorldContextObject, FGuid MissionGuid, TSubclassOf<ABuildingActor> BuildingClass, const FTransform& Transform);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> SpawnAtPlacementActorsHelper(UObject* WorldContextObject, UClass* Entries, bool& bSucceeded);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SpawnAndCollectPlayerPickups(UObject* WorldContextObject, AFortPlayerController* PlayerController, FVector StartPosition, FName LootTierGroup, int32 LootTier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool ShouldUseAlternateAIDirectorBalance();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetWorldSavingEnabled(UObject* WorldContextObject, bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void SetOnlinePresenceDoNotDisturb(UObject* WorldContextObject, bool bDoNotDisturb, AFortPlayerController* SpecificPlayer);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool RegisterMissionInfoUIActor(AActor* AttachmentActor, FGuid MissionGuid, FVector AttachementOffset, float MaxVisibleDistance);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool RegisterForMissionEvents(AActor* ActorToRegister, FGuid MissionGuid);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 PollActorsInVolume(UObject* WorldContextObject, UBoxComponent* VolumeBoxComponent, TEnumAsByte<EPollActorsInVolumeTypes::Type> PollBuildingTypes, TSubclassOf<AActor> ActorClassToPoll);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PingMinimap(UObject* WorldContextObject, FVector WorldLocation, FLinearColor PingColor, TEnumAsByte<EFortTeam::Type> RequiredTeam);
    
    UFUNCTION(BlueprintCallable)
    static int32 NumBluGloFromPlayerState(AFortPlayerStateZone* PlayerState);
    
    UFUNCTION(BlueprintCallable)
    static int32 NumBluGloFromPlayerPawn(AFortPlayerPawn* PlayerPawn);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void LoadMission(UObject* WorldContextObject, UFortMissionInfo* MissionInfo);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool IsUsingNewMissionGeneration(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static bool HasTags(const FGameplayTagContainer& ContainerToCheck, const FGameplayTagContainer& TagsToCheck, bool bRequireAll, bool bCountEmptyAsMatch);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static bool GiveMissionSchematicItemDirectlyToPlayer(UObject* WorldContextObject, AFortPlayerController* TargetPlayer, FGuid MissionGuid, UFortSchematicItemDefinition* SchematicDefinition);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GiveMissionRewardsToPlayerAsPickups(UObject* WorldContextObject, FGuid MissionGuid, AFortPlayerController* PlayerController, FVector StartPosition, float Radius, FName LootTierGroup, int32 LootTier);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GiveMissionRewardsToPlayer(UObject* WorldContextObject, FGuid EventGuid, AFortPlayerController* PlayerController, FText TitleText, FText DescriptionText, FName LootTierGroup, int32 LootTier, float RewardDisplayTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void GetTieredWaveSet(FName TieredWaveCollectionName, int32 Tier, FTieredWaveSetCollectionData& WaveCollectionInfo, TArray<FTieredWaveSetData>& OutWaveData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetTieredWaveBaseWaveLength(UObject* WorldContextObject, FName BaseWaveLengthRowName, float OverrideDifficulty, float& OutBaseWaveLength);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetTieredWaveBaseNumKills(UObject* WorldContextObject, FName BaseNumOfKillsRowName, float OverrideDifficulty, float& OutBaseNumKills);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void GetTieredWaveBaseNumKillPoints(UObject* WorldContextObject, FName BaseNumOfKillPointsRowName, float OverrideDifficulty, float& OutBaseNumKillPoints);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortMission* GetPrimaryMission(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetMissionHUDTextLineHeightEstimate(FText Text);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortMission* GetMissionFromGuid(UObject* WorldContextObject, const FGuid& MissionGuid);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> GetMissionActorsInVectorDirection(UObject* WorldContextObject, TSubclassOf<AActor> ActorSubclass, FVector StartLocation, FVector DirectionToLookForActors, float Angle, float MaxDistance);
    
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static TArray<AActor*> GetMissionActorsInEncounterDirection(UObject* WorldContextObject, TSubclassOf<AActor> ActorSubclass, FVector StartLocation, TEnumAsByte<EFortEncounterDirection::Type> DirectionToLookForActors, float Angle, float MaxDistance);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLowestPlayerAccountLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetLocalPlayerAccountLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable)
    static float GetIronCityWorldDifficulty(int32 AccountLevel);
    
    UFUNCTION(BlueprintCallable)
    static bool GetIronCityMinMaxPowerLevels(int32 DifficultyLevel, float& MinPowerLevel, float& MaxPowerLevel);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AFortBluGloManager* GetBluGloManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static int32 GetAveragePlayerAccountLevel(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<AFortMission*> GetAllLoadedMissions(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static AFortPlacementActor* FindOriginatingPlacementActor(ABuildingActor* BuildingActor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static TArray<ABuildingActor*> FindActorsWithTags(UObject* WorldContextObject, const FGameplayTagContainer& Tags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteMissionEventEx(UObject* WorldContextObject, FFortMissionEventName EventType, FGuid MissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32 GenericInt, float GenericFloat, FText GenericText, const FGameplayTagContainer GameplayTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void ExecuteMissionEvent(UObject* WorldContextObject, FName EventType, FGuid MissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32 GenericInt, float GenericFloat, FText GenericText, const FGameplayTagContainer GameplayTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    static FFortMissionEvent CreateMissionEvent(UObject* WorldContextObject, FName EventType, FGuid MissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32 GenericInt, float GenericFloat, FText GenericText, const FGameplayTagContainer GameplayTags);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void CreateDynamicBuildingDeconstructor(UObject* WorldContextObject, FVector Origin, FVector BoxExtent, bool bIgnoreMissionActors, bool bShrinkAndDestroy);
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AdjustWaveBasedGameDifficulty(UObject* WorldContextObject, float fDifficultyAddMod);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddCompletionTagToMission(UObject* WorldContextObject, FGuid MissionGuid, FGameplayTag NewCompletionTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void AddCompletionTagsToMission(UObject* WorldContextObject, FGuid MissionGuid, FGameplayTagContainer NewCompletionTagContainer);
    
};

