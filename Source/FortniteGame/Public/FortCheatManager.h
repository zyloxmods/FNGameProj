#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GameplayTagContainer.h"
#include "EAthenaCustomizationCategory.h"
#include "EFortAILODLevel.h"
#include "EFortCrucibleWhitelistLevel.h"
#include "EFortEncounterDirection.h"
#include "EFortInputFilterLevel.h"
#include "EFortReplicatedStat.h"
#include "ERiftCosmeticState.h"
#include "FriendCode.h"
#include "Templates/SubclassOf.h"
#include "FortCheatManager.generated.h"

class AActor;
class AFortPawn;
class AFortPlayerPawn;
class AFortReplayMovableSpotLight;
class APlayerController;
class UBuildingTextureData;
class UChildCheatManager;

UCLASS(Blueprintable, MinimalAPI, Config=Game, Within=FortPlayerController)
class UFortCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugInteractTrace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugPickupSpline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableScoreboard: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugBounceCurve: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDebugBeautyMode: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDisplayWindDebugging: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bDebugStructuralSupportSystem: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bInfiniteStamina: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShowGameDifficultyHUD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShowIntensityHUD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShowMaxAIHUD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShowItemIDsOnCards: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bEnableContextMenus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUnlimitedHealth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bCanExitWorld: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUnlimitedAIHealth: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bFreezeAILOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bForceAILOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AbilitySystemCycleCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortAILODLevel ForcedAILODValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBuildingTextureData> TransparentTextureData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortReplayMovableSpotLight* CurrentReplaySpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UChildCheatManager*> ChildCheatManagers;
    
public:
    UFortCheatManager();
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void WriteLootReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WriteLevelSaveComponentsToDisk();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WargameDebug(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WannaGun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ViewStuck();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void UploadLogs(const FString& LogPrefix, int32 TailSizeKb);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockPerk(int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockDebugCamera();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void UnloadGameFeaturePlugin(const FString& PluginURL);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void UnforceAILODs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TutorialRemoveHighlight(FName Highlight);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TutorialRemoveHidden(FName Hidden);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TutorialListHighlights();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TutorialListHidden();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TutorialListAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TutorialAddHighlight(FName Highlight);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TutorialAddHidden(FName Hidden);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TurnOnAllReplaySpotLightsDebugDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TurnOffAllReplaySpotLightsDebugDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerOutOfStaminaFeedback();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void TriggerEndOfMatch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TriggerDelayReturnToLobby(int32 MinTime, int32 MaxTime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWindDebugVolumeDisplay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWindDebugDisplay(float NewRefreshRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWindDebugDeltaBoundsDisplay();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleWalkOnWalls();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleVoiceDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleUtilitiesGraph();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleUseNewItemCards();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleUnlimitedHealth();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleUnlimitedAIHealth();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleTreeVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSpawnPointsHUD();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleSpawningEnabled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSimulatedSquadSpeaking();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleShotLogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleRBAN();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerNames();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePIDValuesGraph();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePIDContributionsGraph();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePickupSpline();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleNoCoolDown();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMustUseJetpackToggle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMaxAIHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleLogCharacterCustomization();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleItemIdsOnCards();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIsLobbyTimerPaused();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInWorldScoreNumbers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInteractTrace();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIntensityHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIntensityGraph();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleInfiniteStamina();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleInfiniteDurability();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleInfiniteAmmo();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleIgnoreAll();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ToggleHeroVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGameDifficultyHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFreezeAILOD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleExplorationLogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleExplorationBadgeView();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleEncounterModifierTags();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleEncounterEQSDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDrawTurnTransitionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDrawTargetSelectionDebugByClass(TSubclassOf<AActor> TargetSelectionDebugSourceClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDrawTargetSelectionDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDrawRunVariationDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleDebugHUDObjectiveHeight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleContextMenus();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBuildingHighlights();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleBuildingActorsTransparency();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAutoRestartMinigame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAISpawning();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAISpawnCap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIDirectorLogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIDespawning();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleAIAnim();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestTournamentOver();
    
    UFUNCTION(BlueprintAuthorityOnly, Exec)
    void TestSuddenPortChange(uint32 NumConnections);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestSafeZoneLocations(int32 NumPasses, int32 PhaseToDraw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestRegenId();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestPlayerCollector(int32 NumPackets, const FString& Payload);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestPartyMemberRange(int32 StartIndex, int32 EndIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestPartyMember(const FString& ContextName, const FString& OptionalFriend);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestLeaveGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestJoin();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestFindTeleport(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestEncryptAPI(const FString& InUserId, const FString& InSessionId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestDisconnect();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCloseClientConfirmationMessage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCheckBansAtMatchStart();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestChangePartySize(int32 NewSize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestChangePartyPrivacy(bool bPrivate, bool bLeaderFriendsOnly, bool bLeaderInvitesOnly);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestCancelLobby();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void TestCalendarEvents(const FString& EventsString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestBanhammer(const FString& InUserId, const FString& BanCode, const FString& BanReason, int32 DesiredAction, int32 BanhammerActivation, int32 BanhammerTiming, int32 BanhammerMessageType, const FString& BanhammerCustomMessage, const FString& BanhammerDetails);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestAllDevPartyMembers();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void TeleportToMe();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void TeleportToMapMarker();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToLocation(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToActor(const FString& ClassOrInstanceName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void TakeoverScriptedPawn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TakeGameplayAutomationScreenshot(const FString& ScreenshotName, const FString& MapName, const float& MaxGlobalError, const float& MaxLocalError);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SwitchTeam();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SummonLoadIfNeeded(const FString& ClassName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopHighlights();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopDummyDebugEncounter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Stats_ClearPlayerStatsCache();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Stats_ClearGlobalLeaderboardCache();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Stats_ClearCohortLeaderboardCache();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartWeatherEvent(int32 WeatherEventIndex, float Intensity, float Duration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartMinigame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartLiveStreamingWindow(float Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartLavaMovement();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartFillFloorMovement();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SpawnVehicle(const FString& CarName, int32 ForcedMaterialVariantIndex);
    
    UFUNCTION(BlueprintCallable)
    AFortPlayerPawn* SpawnSimplePawn();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SpawnScriptedPawnsInFormation(const FString& ProfileName, int32 RowWidth, int32 ColumnDepth, float Spacing, float Health, float Shields);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    AFortPlayerPawn* SpawnScriptedPawnAtLocation(const FString& ProfileName, const float X, const float Y, const float Z, const float Pitch, const float Yaw, const float Roll);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    AFortPlayerPawn* SpawnScriptedPawn(const FString& ProfileName);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnReplaySpotLightEx(float X, float Y, float Z, float Yaw, float Pitch, bool bDebugDrawOn, int32 R, int32 G, int32 B, float InnerAngle, float OuterAngle, float Intensity, float Temp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnReplaySpotLight();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SpawnPickup(const FString& ItemName, int32 NumItems, float SpawnDistance, float SpawnRotation);
    
    UFUNCTION(BlueprintCallable, Exec)
    AFortPawn* SpawnPawn(const FString& PawnType);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    AFortPlayerPawn* SpawnFriendlyPlayer(float MaxHealth, float MaxShield);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnFoodFightObjective();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    AFortPlayerPawn* SpawnEnemyPlayer(float MaxHealth, float MaxShield);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnContainer(const FString& ContainerClassName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SpawnBattleLabDevice(const FString& InName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAthenaSupplyDrop(const FString& SupplyDropInfoName, bool bShouldCenterGroundCheckAtFoundLocation);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SpawnAndDriveVehicle(const FString& CarName, int32 ForcedMaterialVariantIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAIGroupWithUpgrade(const FString& SpawnGroupName, const FString& UpgradeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAIGroupFromExternalSpawner(const FString& SpawnGroupName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAIGroup(const FString& SpawnGroupName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SkipSafeZones();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SkipAircraft();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SimulateLootDrops();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SimulateLoot(const FName TierGroup, int32 LootTier, int32 LootLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowLootPlacement(const FGameplayTag& InTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowHUDElement(FGameplayTag HUDElementTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowHighlightSummary();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowGameplayCaptureUI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowFakeError(const FString& DisplayString, const FString& ErrorCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowEventsDebugInfo(bool bShowDebugInfo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowAllMinimapIcons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowActiveGameplayModifiers();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldUseNewHeroLoadoutUI(const APlayerController* PC);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SetWorldDaysElapsed(float days);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWallTimer(float Seconds);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SetViewportResolution(int32 ResX, int32 ResY);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SetVehicleConfigVariable(const FString& VehicleName, const FString& ConfigName, float ConfigValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetUnlimitedHealth(bool bInValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetTeamOnScriptedPawn(int32 NewTeamIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTeam(int32 TeamIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetSignalInStormPercent(float Percent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetShieldPercent(float Percent);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetScriptedPawnVariantChannel(const FString& ChannelTag, const FString& ActiveTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetScriptedPawnTargeting(bool bIsTargeting);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetScriptedPawnRotation(float Yaw);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetScriptedPawnLocation(float X, float Y, float Z);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetSafeZoneRadius(float NewRadius);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetSafeZoneLocationToPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRiftCosmeticState(ERiftCosmeticState NewValue);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SetRespawnTimerOverride(float TimeUntilRespawn);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void SetReplStat(TEnumAsByte<EFortReplicatedStat::Type> Stat, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetReplaySpotLightTemperature(float Temp);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetReplaySpotLightIntensity(float Intensity);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetReplaySpotLightColor(int32 R, int32 G, int32 B);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetReplaySpotLightAngles(float InnerAngle, float OuterAngle);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetRandomAircraftFlightPath();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNavIndestructibility(bool bMakeIndestructible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMinigameClassSlot(int32 ClassSlotIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaxClouds(int32 MaxClouds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLFG(bool bLFG);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetJumpStaminaCost(FName ModeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInteractionDistances(float InteractionDistance, float InteractionHighlightDistance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInteractExtent(float Extent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInputPresetName(const FString& PresetName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetInfiniteAmmo(bool bInValue);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void SetHideSpatialCustomizationText(bool bShouldHide);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHideSpatialCustomizationIcons(bool bShouldHide);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetHealthPercent(float Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHeadHealthPercent(float HealthPercent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGlobalWind(float Magnitude, float HeadingDegrees);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameStat(const FString& StatName, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetGameDifficultyOverride(float GameDifficultyOverrideValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFrameSyncMode(int32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEventsStyleOverride(const FString& StyleId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEventCalendarTime(const FString& TimeString);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEncounterTopUtilityPercentages(const FString& UtilitiesAndPercentages);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEncounterSpawnPointsCurve(const FString& CurveName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEncounterSpawnPointsCap(int32 SpawnPointsCap);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEncounterSimulatedNumberOfPlayers(int32 NumPlayers);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEncounterGraphsHistoryLength(int32 Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetEncounterDirections(TArray<TEnumAsByte<EFortEncounterDirection::Type>> Directions);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDifficultyIncreaseRewardTier(int32 RewardTier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCurrentEncounterToDebug(int32 EncounterIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCullValues(float MinCullObjectSize, float MinCullDistance, float MaxCullObjectSize, float MaxCullDistance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCrossplayPreference(int32 NewPreference);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetConsole60FPSMode(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCloudAltitude(float CloudAltitude);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCapturePercentage(float NewCapturePercentage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCanMeleeOneHitBuildings(const bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetCanBeDamagedOnTraceActor(bool bCanBeDamaged);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraPrototype(FName ProtoName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraFOVMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraDistanceMultiplier(float XMultiplier, float YMultiplier, float ZMultiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBuildFree(const bool bNewValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetBackpackOnScriptedPawn(const FString& NewBackpack);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetAthenaHeroOnScriptedPawn(const FString& NewHeroName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAthenaHero(const FString& NewHeroName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SetAircraftFlightPath(float StartDegrees, float OffsetFactor);
    
    UFUNCTION(BlueprintAuthorityOnly, Exec)
    void SetAimMode(uint32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetActionMappingEnabled(FName Action, bool bEnabled);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ServerStopProfiling();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ServerStartProfiling();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendTwitchToastNotification(const FString& Title, const FString& Description);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendTargetedRemoteBotCommand(const FString& TargetName, const FString& CommandToSend);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendRemoteBotCommand(const FString& CommandToSend);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SendQuestEvent(FName Type, FString& TargetTag, FString& SourceTag, FString& ContextTag, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SelectNextSpotLight();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ScriptedPawnToggleFiringWithInfiniteAmmo();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ScriptedPawnToggleCrouch();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ScriptedPawnStopIntervalFiring();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ScriptedPawnIntervalFiring(float TimeBetweenShots, int32 BurstAmount, float TimeBetweenBursts);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SaveReplaySpotLights(const FString& SaveName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void SafeTeleport(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RunPerfMemCheatScript(bool bStartStatFiles);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RunPawnScriptLocally(const FString& ProfileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReviveFromDBNO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RetestFailedBanhammerActions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RestartMinigame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RespawnPlayspacePlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RespawnPlayerServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RespawnPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetWall();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetMaxAITracking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetItemShopLanding();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ResetForcedAthenaCosmeticItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetEncounterWave();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ReRandomizeTiles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RequestNextCarouselOffer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReplayLastPerfTest(const FString& Params);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveGrantedGameplayTag(FName Tag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void RemoveGameplayModifier(const FString& ModifierName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveFavoriteIsland(const FString& IslandCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveDebugSpawnAIGroupTag(FName Tag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RemoveDebugEncounterTag(FName Tag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReloadUMG();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReloadUI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReloadLevelStream();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ReleaseScriptedPawn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReleasePortal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReInitHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshTournamentManager();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshTheaters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshCMS();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void RefreshAllCalendars();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RedoHuskSpecialEventModifiers(float TargetRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReAimReplaySpotLight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReadLevelSaveComponentsFromDisk();
    
    UFUNCTION(BlueprintCallable, Exec)
    void QueryHighlightCount();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PrintTileWorld();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintShotReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintScriptedActionManagerState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PreviewSkinWeightProfile(int32 State);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PlayAthenaEmoteOnScriptedPawn(const FString& EmoteName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerfMemStatMonitor(const FString& ToggleState);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void PauseWarmup();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Pain(float Amount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void OpenAllContainersAndWriteLootEconomy();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ModItemDurability(float InValue);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void MMS(const FString& Command);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void McpTestVerifyProfileToken();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpTestGetClientFeatureKeys();
    
    UFUNCTION(BlueprintCallable)
    void McpTestFriendCodes_OnQueryUnredeemedFriendCodes(bool bSuccess, const TArray<FFriendCode>& FriendCodes);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpTestFriendCodes(const FString& TokenId);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void McpRefreshProfile();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void McpRefreshCatalog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpRedeemPurchases();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpPrintPartyInviteToken(bool OnlyPrintIfJoinable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpPrintFriendInviteToken(const FString& FriendName, bool OnlyPrintIfJoinable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpLogout();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpJoinFromPartyInviteToken(const FString& Token, bool bIsFromInvite);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpIssueCodeToken(const FString& TokenId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpHostGetPlayers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetVersion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetUnredeemedCodes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetPrivacySettings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetCurrencyAmount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpForceHttpFailRate(float Factor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpEarnScore(int32 ScoreAmount);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void McpCheatCampaign() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpCheatAthena() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpCheat() const;
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void McpApplyStash(const FString& StashName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MassSuicide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MakeGods(TSubclassOf<AFortPawn> aClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MakeBuildingActorsGod();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MakeAIsGod();
    
private:
    UFUNCTION(BlueprintCallable, Exec)
    void LogSelectedActorCost();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogAssetClassCost(const FString& AssetPath);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void LogAllReplaySpotLights();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LogAllMinigameComponents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LockDebugCamera();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadReplaySpotLights(const FString& SaveName, bool bReplaceAllLights);
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void LoadGameFeaturePlugin(const FString& PluginURL);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void LoadCreativePlotFromMnemonic(const FString& Mnemonic);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LiveStreamingSelectedViewers(TArray<FString> Names);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListWeapons() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListTraps() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListSupplyDrops();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListSpawnGroups();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListPlayerIDs();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListGadgets() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListEmotes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListConsumables() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListCheats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListAthenaGadgets() const;
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListAthenaEmotes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListAllFavoriteIslands();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListAIUtilities();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListActiveEncounters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillSkyCap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillPawns(TSubclassOf<AFortPawn> aClass);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void KillBots(bool bKillPlayers, bool bKillNoneParticipants, uint8 TeamIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void JoinFriendGameAsSpectator(const FString& FriendDisplayName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void JoinFriendGame(const FString& FriendId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Island_MMS(const FString& IslandCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Island_Destroy(const FString& Island_ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Island_Create(const FString& NewIslandTemplateId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InGameMapSetCaptureLocation(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void InGameMapSetActorBoundaries(float ZA, float ZB);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideHUDElement(FGameplayTag HUDElementTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideGameplayCaptureUI();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void HermesUnloadCurrentContentAndLoadNewContent(const FString& ContentId, const FString& OverrideLabelOrVersion);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HermesUnloadCurrentContent();
    
    UFUNCTION(BlueprintCallable, Exec)
    void HermesAttemptDownload(const FString& AssetToDownload);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HermesAddContentToBeaconHost(const FString& ContentId, const FString& OverrideLabelOrVersion);
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void GrantGameplayTag(FName Tag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GPadV2_ToggleDebugDraw();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GoFast(float NewSpeed);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveWood(int32 Amount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveWeaponToScriptedPawn(const FString& WeaponName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveWeapons(FName Tag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveWeapon(const FString& WeaponName, int32 RequestedLevel, int32 Count);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveWads(int32 Amount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveTrap(const FString& TrapName, int32 RequestedLevel, int32 NumTrapsToGive);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveStone(int32 Amount);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveSpecificItem(const FString& ItemPath, int32 ItemAmount, int32 ItemLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveResources(int32 Amount);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GivePickaxe(const FString& PickName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GivePerkRerolls(int32 NumOfRolls);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GivePerk(const FString& PerkName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveMetal(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveGoodWeapons();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveGold(int32 Amount);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveGadgets(const FString& GadgetName, int32 Quantity, int32 ItemLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveGadget(const FString& GadgetName, int32 ItemLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveConsumable(const FString& ConsumableName, int32 RequestedLevel, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaWeapons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaTraps();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaLoadout();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveAthenaGadgets(const FString& GadgetName, int32 Quantity, int32 ItemLevel);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveAthenaGadget(const FString& GadgetName, int32 ItemLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaFullKit();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaCosmeticPassWeapons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaConsumables();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveApolloLoadout();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveAmmo(const FString& AmmoNameAndAmmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllWeapons();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveAllTraps(int32 NumItems);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllShotguns();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllRifles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllPistols();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllMelee();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveAllIngredients(int32 NumIngredients);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GiveAllConsumables(int32 NumItems);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetWTFRotations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetReplStat(TEnumAsByte<EFortReplicatedStat::Type> Stat);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPoiVolumeData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPoiInfoForPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetGameStat(const FString& StatName);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void GetFishingEconomyForCurrentLure(int32 NumFishToCatch, bool bWantExplosion);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetAllReplStats();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateTravelLogEntries(int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GeneratePolysInPathingRange(float MaxDistance, float MinDistance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GenerateMockMatchReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FortVolumeResetTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FortVolumeAsyncTest();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FortniteForceCharLOD(int32 LOD);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ForceServerShutdown(int32 ExitCode);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ForceReviveFromDBNO();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ForcePersonalInputFilter(EFortInputFilterLevel InputFilter);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ForceMatchInputFilter(EFortInputFilterLevel InputFilter);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceExternalRichPresenceUpdate();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceByPassNavMeshForAISpawning(bool bInValue);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ForceAthenaCosmeticItemInSlot(const FString& TemplateId, EAthenaCustomizationCategory Slot, int32 SlotIndex);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ForceAthenaCosmeticItem(const FString& TemplateId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceAILODs(EFortAILODLevel inForcedAILODValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FinishCurrentStormCircle(float TimeToShrink);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FakeXPEvents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FakeKillHighlight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FakeDownHighlight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExtAuthReset(bool bWipeDeviceAccountInfo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EventsRefreshPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnvPain(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnduranceDebug(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EndLiveStreamingWindow();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EncounterTopUtilityPercentages();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EncounterSpawnProbabilities();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EncounterSetDifficultyLevel(float NewDifficulty);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EncounterInitialUtilities();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EncounterCurrentUtilities();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableSubtitles(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableNewCustomizationPanel(bool bEnable);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void EnableFixedTimeStep(int32 AsIfItWasFPS);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpMatchAnalytics();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpGameStats(const FString& FilterName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpActiveGameplayEffects();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void DoAnalyticsAthenaPlayerEndPhaseReportOnServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DiscardAILogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAllParticleComponents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyReplaySpotLight();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void DestroyAllScriptedPawns();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllReplaySpotLights();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void DestroyAllPickups();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugUseDedicatedServer(bool bUse);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugThisAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugStructuralSupport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugNativeActions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugLoadingScreen(const FString& MissionGen, bool bShowBullets);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugKickPlayerDueToInactivity();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugHotSpots();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugHideLoadingScreen();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugForceEnsure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBuildingGroups();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugBuildingDetection();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAttributeModifiers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAttributeClear();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAttribute(FString& Attribute);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DebugAbilityTags();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void DeactivateGameFeaturePlugin(const FString& PluginURL);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void DBNO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CycleTheaterDisplayed();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CycleEncounterEQSQueryToDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CycleDebugAbilitySystem();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CycleCurrentEncounterToDebug();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Crucible_SetWhitelisted(EFortCrucibleWhitelistLevel WhitelistLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateProfileGoCollectionForSublevels(const FString& SublevelSearchString, int32 GridStepsX, int32 GridStepsY, int32 RotationSteps, int32 Quad);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void CreateProfileGoCollectionForCreativeIslands(int32 GridStepsX, int32 GridStepsY, int32 RotationSteps, int32 Quad);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CraftFree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CountPlayerBuiltBuildingActors();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ConstructTileWorld(int32 MaxTiles, int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CompleteAllQuestsByName(FString& QuestPartialName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CommunityVotingRefreshVotingState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Collection_ShowFishCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Collection_ShowFishCompletion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Collection_QueryFishyFriends();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Collection_MarkFishSeen(const FString& Species);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Collection_FlushPending();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Collection_FakeMatchEnd();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Collection_CollectNextFishVariant(float Length);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Collection_CollectFish(const FString& Species, float Length);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Collection_CollectALoadOfFish();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Collection_CollectAllFishVariants(float Length);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ClearScriptedPawnVariantChannels();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ClearRespawnTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearMapFog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearFortVolume();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearEncounterSpawnPointsCurve();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearEncounterSpawnPointsCap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearEncounterSimulatedNumberOfPlayers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearDebugSpawnAIGroupTags();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearDebugEncounterTags();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClaimPortal();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void CheatMountExitVan();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeTeam(uint8 NewTeamNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeBotModule(const FString& PilotCategory, const FString& NewModule, bool bResetNow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CaptureTeamToggleInput();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void CanExitWorld(bool bValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildWith(const FString& ResourceTypeAndOrLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BuildFree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BringDownWall();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BounceContainer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotStopDogpile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotStartDogpile();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void BotSpectate(const FString& BotCommand);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void BotFillUp(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BeautyMode();
    
public:
    UFUNCTION(BlueprintCallable, Exec)
    void BattleLabSetInstanceLimiting(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BattleLabResetSave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BattleLabForceSave();
    
protected:
    UFUNCTION(BlueprintCallable, Exec)
    void Badass();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BackpackSetSize(int32 Size);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AthenaGiveScoreTo(int32 PlayerStateIdx, int32 Score);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void AthenaForceVictory_Delayed(bool bVictory, float DelayTime);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void AthenaForceVictory(bool bVictory);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void AthenaEndlessGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AthenaEmote(const FString& EmoteName);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreContextMenusEnabled(const APlayerController* PC);
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, Exec)
    void ApplyGameplayModifier(const FString& ModifierName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AllowRespawn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddUtilityScore(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddKillFeedMessage();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddFavoriteIsland(const FString& IslandCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddDebugSpawnAIGroupTag(FName Tag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddDebugEncounterTag(FName Tag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddCombatScore(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddBuildingScore(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AddAllScores(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AcceptEULA();
    
};

