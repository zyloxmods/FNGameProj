#include "FortMissionLibrary.h"
#include "Templates/SubclassOf.h"

bool UFortMissionLibrary::UnregisterForMissionEvents(AActor* ActorToUnregister, FGuid MissionGuid) {
    return false;
}

bool UFortMissionLibrary::TeleportPlayerPawn(AFortPlayerPawn* PlayerPawn, FVector DestLocation, FRotator DestRotation, bool bIgnoreCollision, bool bIgnoreSupplementalKillVolumeSweep) {
    return false;
}

void UFortMissionLibrary::TeleportPawnNearLocation(AFortPawn* Pawn, FVector DestLocation) {
}

void UFortMissionLibrary::StopAIEncounterAgainstActor(UObject* WorldContextObject, AActor* TargetActor) {
}

void UFortMissionLibrary::StopAIEncounter(UObject* WorldContextObject, UFortAIEncounterInfo* ActiveEncounter, EFortObjectiveStatus ObjectiveStatus) {
}

void UFortMissionLibrary::StartPlayingMission(UObject* WorldContextObject, const FGuid& MissionGuid) {
}

UFortAIEncounterInfo* UFortMissionLibrary::StartAIEncounterWithEnvironmentQuery(UObject* WorldContextObject, FString& AssociatedMissionName, TSubclassOf<UFortAIEncounterInfo> EncounterTemplate, AActor* TargetActor, FEncounterEnvironmentQueryInfo EnvironmentQueryInfo, AActor* QueryActor, FGameplayTagContainer InjectedTags, FFortEncounterSettings EncounterSettings, int32 ActivationDelay) {
    return NULL;
}

UFortAIEncounterInfo* UFortMissionLibrary::StartAIEncounter(UObject* WorldContextObject, FString& AssociatedMissionName, TSubclassOf<UFortAIEncounterInfo> EncounterTemplate, AActor* TargetActor, FGameplayTagContainer InjectedTags, FFortEncounterSettings EncounterSettings, int32 ActivationDelay) {
    return NULL;
}

bool UFortMissionLibrary::SpawnPlacementMissionActor(UObject* WorldContextObject, const TSubclassOf<AActor>& ActorToSpawn, const FVector& SpawnLocation, const FRotator& SpawnRotation, AActor* PlacementLocationActor, AActor*& OutSpawnedActor) {
    return false;
}

AFortPickup* UFortMissionLibrary::SpawnMissionItemPickupInWorld(UObject* WorldContextObject, FGuid MissionGuid, UFortWorldItemDefinition* ItemDefinition, int32 NumberToSpawn, FVector position, FVector Direction, int32 OverrideMaxStackCount) {
    return NULL;
}

AFortPickup* UFortMissionLibrary::SpawnMissionItemPickup(UObject* WorldContextObject, FGuid MissionGuid, UFortMissionItemDefinition* MissionItemDefinition, FVector StartPosition, AFortPawn* TargetPawn) {
    return NULL;
}

ABuildingActor* UFortMissionLibrary::SpawnBuildingActorAtTransform(UObject* WorldContextObject, FGuid MissionGuid, TSubclassOf<ABuildingActor> BuildingClass, const FTransform& Transform) {
    return NULL;
}

TArray<AActor*> UFortMissionLibrary::SpawnAtPlacementActorsHelper(UObject* WorldContextObject, UClass* Entries, bool& bSucceeded) {
    return TArray<AActor*>();
}

void UFortMissionLibrary::SpawnAndCollectPlayerPickups(UObject* WorldContextObject, AFortPlayerController* PlayerController, FVector StartPosition, FName LootTierGroup, int32 LootTier) {
}

bool UFortMissionLibrary::ShouldUseAlternateAIDirectorBalance() {
    return false;
}

void UFortMissionLibrary::SetWorldSavingEnabled(UObject* WorldContextObject, bool bEnabled) {
}

void UFortMissionLibrary::SetOnlinePresenceDoNotDisturb(UObject* WorldContextObject, bool bDoNotDisturb, AFortPlayerController* SpecificPlayer) {
}

bool UFortMissionLibrary::RegisterMissionInfoUIActor(AActor* AttachmentActor, FGuid MissionGuid, FVector AttachementOffset, float MaxVisibleDistance) {
    return false;
}

bool UFortMissionLibrary::RegisterForMissionEvents(AActor* ActorToRegister, FGuid MissionGuid) {
    return false;
}

int32 UFortMissionLibrary::PollActorsInVolume(UObject* WorldContextObject, UBoxComponent* VolumeBoxComponent, TEnumAsByte<EPollActorsInVolumeTypes::Type> PollBuildingTypes, TSubclassOf<AActor> ActorClassToPoll) {
    return 0;
}

void UFortMissionLibrary::PingMinimap(UObject* WorldContextObject, FVector WorldLocation, FLinearColor PingColor, TEnumAsByte<EFortTeam::Type> RequiredTeam) {
}

int32 UFortMissionLibrary::NumBluGloFromPlayerState(AFortPlayerStateZone* PlayerState) {
    return 0;
}

int32 UFortMissionLibrary::NumBluGloFromPlayerPawn(AFortPlayerPawn* PlayerPawn) {
    return 0;
}

void UFortMissionLibrary::LoadMission(UObject* WorldContextObject, UFortMissionInfo* MissionInfo) {
}

bool UFortMissionLibrary::IsUsingNewMissionGeneration(UObject* WorldContextObject) {
    return false;
}

bool UFortMissionLibrary::HasTags(const FGameplayTagContainer& ContainerToCheck, const FGameplayTagContainer& TagsToCheck, bool bRequireAll, bool bCountEmptyAsMatch) {
    return false;
}

bool UFortMissionLibrary::GiveMissionSchematicItemDirectlyToPlayer(UObject* WorldContextObject, AFortPlayerController* TargetPlayer, FGuid MissionGuid, UFortSchematicItemDefinition* SchematicDefinition) {
    return false;
}

void UFortMissionLibrary::GiveMissionRewardsToPlayerAsPickups(UObject* WorldContextObject, FGuid MissionGuid, AFortPlayerController* PlayerController, FVector StartPosition, float Radius, FName LootTierGroup, int32 LootTier) {
}

void UFortMissionLibrary::GiveMissionRewardsToPlayer(UObject* WorldContextObject, FGuid EventGuid, AFortPlayerController* PlayerController, FText TitleText, FText DescriptionText, FName LootTierGroup, int32 LootTier, float RewardDisplayTime) {
}

void UFortMissionLibrary::GetTieredWaveSet(FName TieredWaveCollectionName, int32 Tier, FTieredWaveSetCollectionData& WaveCollectionInfo, TArray<FTieredWaveSetData>& OutWaveData) {
}

void UFortMissionLibrary::GetTieredWaveBaseWaveLength(UObject* WorldContextObject, FName BaseWaveLengthRowName, float OverrideDifficulty, float& OutBaseWaveLength) {
}

void UFortMissionLibrary::GetTieredWaveBaseNumKills(UObject* WorldContextObject, FName BaseNumOfKillsRowName, float OverrideDifficulty, float& OutBaseNumKills) {
}

void UFortMissionLibrary::GetTieredWaveBaseNumKillPoints(UObject* WorldContextObject, FName BaseNumOfKillPointsRowName, float OverrideDifficulty, float& OutBaseNumKillPoints) {
}

AFortMission* UFortMissionLibrary::GetPrimaryMission(UObject* WorldContextObject) {
    return NULL;
}

float UFortMissionLibrary::GetMissionHUDTextLineHeightEstimate(FText Text) {
    return 0.0f;
}

AFortMission* UFortMissionLibrary::GetMissionFromGuid(UObject* WorldContextObject, const FGuid& MissionGuid) {
    return NULL;
}

TArray<AActor*> UFortMissionLibrary::GetMissionActorsInVectorDirection(UObject* WorldContextObject, TSubclassOf<AActor> ActorSubclass, FVector StartLocation, FVector DirectionToLookForActors, float Angle, float MaxDistance) {
    return TArray<AActor*>();
}

TArray<AActor*> UFortMissionLibrary::GetMissionActorsInEncounterDirection(UObject* WorldContextObject, TSubclassOf<AActor> ActorSubclass, FVector StartLocation, TEnumAsByte<EFortEncounterDirection::Type> DirectionToLookForActors, float Angle, float MaxDistance) {
    return TArray<AActor*>();
}

int32 UFortMissionLibrary::GetLowestPlayerAccountLevel(UObject* WorldContextObject) {
    return 0;
}

int32 UFortMissionLibrary::GetLocalPlayerAccountLevel(UObject* WorldContextObject) {
    return 0;
}

float UFortMissionLibrary::GetIronCityWorldDifficulty(int32 AccountLevel) {
    return 0.0f;
}

bool UFortMissionLibrary::GetIronCityMinMaxPowerLevels(int32 DifficultyLevel, float& MinPowerLevel, float& MaxPowerLevel) {
    return false;
}

AFortBluGloManager* UFortMissionLibrary::GetBluGloManager(UObject* WorldContextObject) {
    return NULL;
}

int32 UFortMissionLibrary::GetAveragePlayerAccountLevel(UObject* WorldContextObject) {
    return 0;
}

TArray<AFortMission*> UFortMissionLibrary::GetAllLoadedMissions(UObject* WorldContextObject) {
    return TArray<AFortMission*>();
}

AFortPlacementActor* UFortMissionLibrary::FindOriginatingPlacementActor(ABuildingActor* BuildingActor) {
    return NULL;
}

TArray<ABuildingActor*> UFortMissionLibrary::FindActorsWithTags(UObject* WorldContextObject, const FGameplayTagContainer& Tags) {
    return TArray<ABuildingActor*>();
}

void UFortMissionLibrary::ExecuteMissionEventEx(UObject* WorldContextObject, FFortMissionEventName EventType, FGuid MissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32 GenericInt, float GenericFloat, FText GenericText, const FGameplayTagContainer GameplayTags) {
}

void UFortMissionLibrary::ExecuteMissionEvent(UObject* WorldContextObject, FName EventType, FGuid MissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32 GenericInt, float GenericFloat, FText GenericText, const FGameplayTagContainer GameplayTags) {
}

FFortMissionEvent UFortMissionLibrary::CreateMissionEvent(UObject* WorldContextObject, FName EventType, FGuid MissionGuid, FGameplayTagContainer ObjectiveHandle, UFortMissionEventParams* Params, bool DO_NOT_USE_THIS_OR_VARIABLES_BELOW, UObject* EventFocus, UDataAsset* EventContent, AActor* EventInstigator, int32 GenericInt, float GenericFloat, FText GenericText, const FGameplayTagContainer GameplayTags) {
    return FFortMissionEvent{};
}

void UFortMissionLibrary::CreateDynamicBuildingDeconstructor(UObject* WorldContextObject, FVector Origin, FVector BoxExtent, bool bIgnoreMissionActors, bool bShrinkAndDestroy) {
}

void UFortMissionLibrary::AdjustWaveBasedGameDifficulty(UObject* WorldContextObject, float fDifficultyAddMod) {
}

void UFortMissionLibrary::AddCompletionTagToMission(UObject* WorldContextObject, FGuid MissionGuid, FGameplayTag NewCompletionTag) {
}

void UFortMissionLibrary::AddCompletionTagsToMission(UObject* WorldContextObject, FGuid MissionGuid, FGameplayTagContainer NewCompletionTagContainer) {
}

UFortMissionLibrary::UFortMissionLibrary() {
}

