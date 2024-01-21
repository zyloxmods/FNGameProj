#pragma once
#include "CoreMinimal.h"
#include "GameFramework/CheatManager.h"
#include "GameplayTagContainer.h"
#include "EAthenaCustomizationCategory.h"
#include "EFortAILODLevel.h"
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
class APlayerController;
class UBuildingTextureData;
class UObject;

UCLASS(Blueprintable, MinimalAPI, Config=Game, Within=FortPlayerController)
class UFortCheatManager : public UCheatManager {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugInteractTrace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugPickupSpline: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDebugFloorsOnMiniMap: 1;
    
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
    uint8 bPickersUseLeftThumbstick: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bFreezeAILOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bForceAILOD: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUnlockAllDefenders: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bUseNewFrontEndCameraManagement: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 AbilitySystemCycleCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortAILODLevel ForcedAILODValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UBuildingTextureData> TransparentTextureData;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UObject*> ChildCheatManagers;
    
public:
    UFortCheatManager();
    UFUNCTION(BlueprintCallable, Exec)
    void WriteLootReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WriteLevelSaveComponentsToDisk();
    
    UFUNCTION(BlueprintCallable, Exec)
    void WargameDebug(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void WannaGun();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ViewStuck();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UpgradePlaneGuns(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllZones();
    
    UFUNCTION(BlueprintCallable, Exec)
    void UnlockAllDefenders(bool inUnlockAllDefenders);
    
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
    void TriggerOutOfStaminaFeedback();
    
    UFUNCTION(BlueprintCallable, Exec)
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
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSpawningEnabled();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleShotLogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleSecondaryMissionHeaders();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePlayerNames();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePIDValuesGraph();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePIDContributionsGraph();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePickupSpline();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TogglePickers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleNoCoolDown();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleNewFrontEndCameraManagement();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMustUseJetpackToggle();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleMaxAIHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleLogCharacterCustomization();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleItemIdsOnCards();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInWorldScoreNumbers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInvincibleCornerstones();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInteractTrace();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIntensityHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIntensityGraph();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInfiniteStamina();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInfiniteDurability();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleInfiniteAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIndestructibleKeep();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleIgnoreAll();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleHeroVisibility();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleGameDifficultyHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFreezeAILOD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFloorsOnMiniMap();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleFactorGraph();
    
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
    void ToggleCombatGraph();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCharacterHeadAccessories();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ToggleCharacterBackpack();
    
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
    void TestUpgradeOutpostItem(const FString& ItemTemplateID);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestTournamentOver();
    
    UFUNCTION(Exec)
    void TestSuddenPortChange(uint32 NumConnections);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestStun(float StunStime);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestSetOutpostDefenseActive(bool bActive);
    
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
    void TestOutpostUI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestLeaveGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestKnockback(float KnockbackMagnitude, float KnockbackZAngle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestJoin();
    
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
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestBanhammer(const FString& InUserId, int32 BanCode, const FString& BanReason, int32 DesiredAction, int32 BanhammerActivation, int32 BanhammerTiming, int32 BanhammerMessageType, const FString& BanhammerCustomMessage, const FString& BanhammerDetails);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TestAllDevPartyMembers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToMissionActor();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToMapMarker();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToLocation(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TeleportToActor(const FString& ClassOrInstanceName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void TakeoverScriptedPawn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void TakeGameplayAutomationScreenshot(const FString& ScreenshotName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwitchTeam();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SwapPickerThumbstick();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopHighlights();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopGooseDrops();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StopDummyDebugEncounter();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StealPlane();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartLiveStreamingWindow(float Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartLavaMovement();
    
    UFUNCTION(BlueprintCallable, Exec)
    void StartGooseDrops();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnVehicle(const FString& CarName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnScriptedPawnsInFormation(const FString& ProfileName, int32 RowWidth, int32 ColumnDepth, float Spacing);
    
    UFUNCTION(BlueprintCallable, Exec)
    AFortPlayerPawn* SpawnScriptedPawn(const FString& ProfileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnPickup(const FString& ItemName, int32 NumItems, float SpawnDistance, float SpawnRotation);
    
    UFUNCTION(BlueprintCallable, Exec)
    AFortPawn* SpawnPawn(const FString& PawnType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnFoodFightObjective();
    
    UFUNCTION(BlueprintCallable, Exec)
    AFortPlayerPawn* SpawnEnemyPlayer(float MaxHealth, float MaxShield);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnContainer(const FString& ContainerClassName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAthenaSupplyDrop(const FString& SupplyDropInfoName, bool bShouldCenterGroundCheckAtFoundLocation);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAndDriveVehicle(const FString& CarName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAIGroupWithUpgrade(const FString& SpawnGroupName, const FString& UpgradeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAIGroupFromExternalSpawner(const FString& SpawnGroupName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SpawnAIGroup(const FString& SpawnGroupName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkipSafeZones();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SkipAircraft();
    
    UFUNCTION(BlueprintCallable, Exec)
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
    void ShowEventsDebugInfo(bool bShowDebugInfo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowAllMinimapIcons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ShowActiveGameplayModifiers();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool ShouldUseNewHeroLoadoutUI(const APlayerController* PC);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWorldLevel(float Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWorldDaysElapsed(float days);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWaxWinAmount(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWaxTokens(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWaxLives(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetWallTimer(float Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetVehicleConfigVariable(const FString& VehicleName, const FString& ConfigName, float ConfigValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetUnlimitedHealth(bool bInValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTeamOnScriptedPawn(int32 NewTeamIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetTeam(int32 TeamIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetShieldPercent(float Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetScriptedPawnVariantChannel(const FString& ChannelTag, const FString& ActiveTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetScriptedPawnTargeting(bool bIsTargeting);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetScriptedPawnRotation(float Yaw);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetScriptedPawnLocation(float X, float Y, float Z);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSafeZoneRadius(float NewRadius);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSafeZoneLocationToPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRiftCosmeticState(ERiftCosmeticState NewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRespawnTimerOverride(float TimeUntilRespawn);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetReplStat(TEnumAsByte<EFortReplicatedStat::Type> Stat, int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRandomAircraftFlightPath();
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPvPStalemateTime(int32 NumSeconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPvPRoundTime(int32 NumSeconds, int32 CriticalThreshold);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlaneLives(int32 NewLives);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlaneHealthPercent(float Percent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNavIndestructibility(bool bMakeIndestructible);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetMaxClouds(int32 MaxClouds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLFG(bool bLFG);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetJumpStaminaCost(FName ModeName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInteractionDistances(float InteractionDistance, float InteractionHighlightDistance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInteractExtent(float Extent);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInputPresetName(const FString& PresetName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetInfiniteAmmo(bool bInValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHordePlotExpansionSize(int32 XSize, int32 YSize, int32 ZSize);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHeroLevel(int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHeroClass(const FString& NewHeroName, int32 Level);
    
    UFUNCTION(BlueprintCallable, Exec)
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
    void SetCombatGraphHistoryLength(int32 Seconds);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCloudAltitude(float CloudAltitude);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCapturePercentage(float NewCapturePercentage);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCanBeDamagedOnTraceActor(bool bCanBeDamaged);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraPrototype(FName ProtoName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraFOVMultiplier(float Multiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetCameraDistanceMultiplier(float XMultiplier, float YMultiplier, float ZMultiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBuildFree(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBackpackOnScriptedPawn(const FString& NewBackpack);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAthenaHeroOnScriptedPawn(const FString& NewHeroName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAthenaHero(const FString& NewHeroName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAircraftFlightPath(float StartDegrees, float OffsetFactor);
    
    UFUNCTION(Exec)
    void SetAimMode(uint32 Mode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetActionMappingEnabled(FName Action, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ServerStopProfiling();
    
    UFUNCTION(BlueprintCallable, Exec)
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
    void SendMissionEvent(const FString& MissionEventName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScriptedPawnToggleFiringWithInfiniteAmmo();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScriptedPawnToggleCrouch();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScriptedPawnStopIntervalFiring();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ScriptedPawnIntervalFiring(float TimeBetweenShots, int32 BurstAmount, float TimeBetweenBursts);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SafeTeleport(float X, float Y, float Z, float Pitch, float Yaw, float Roll);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RunPerfMemCheatScript(bool bStartStatFiles);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RunPawnScriptLocally(const FString& ProfileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RunMonteCarlo(int32 X, int32 Y, const FString& TileGroup, int32 NumIterations);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReviveFromDBNO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RetestFailedBanhammerActions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RestartMinigame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RespawnPlayerServer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RespawnPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetWall();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetMaxAITracking();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetForcedAthenaCosmeticItems();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ResetEncounterWave();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReRandomizeTiles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReplayLastPerfTest(const FString& Params);
    
    UFUNCTION(BlueprintCallable, Exec)
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
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReleaseScriptedPawn();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReleasePortal();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReInitHUD();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RegenerateZoneMissionsWithDifficultyLevel(float DifficultyLevelOverride);
    
    UFUNCTION(BlueprintCallable, Exec)
    void RegenerateZoneMissions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshTournamentManager();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshTheaters();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RefreshAllCalendars();
    
    UFUNCTION(BlueprintCallable, Exec)
    void RedoHuskSpecialEventModifiers(float TargetRate);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ReadLevelSaveComponentsFromDisk();
    
    UFUNCTION(BlueprintCallable, Exec)
    void QueryHighlightCount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintTileWorld();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintShotReport();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PrintScriptedActionManagerState();
    
    UFUNCTION(BlueprintCallable, Exec)
    void PlayAthenaEmoteOnScriptedPawn(const FString& EmoteName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PerfMemStatMonitor(const FString& ToggleState);
    
    UFUNCTION(BlueprintCallable, Exec)
    void PauseWarmup();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Pain(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void OpenAllContainersAndWriteLootEconomy();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ModItemDurability(float InValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MMS(const FString& Command);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MissionForceSuccess(const FString& MissionName, float FractionCompleted);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MissionForcePrimarySuccess(float FractionCompleted);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MissionForcePrimaryFailure();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MissionForceFailure(const FString& MissionName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpUpgradeItem(const FString& ItemToUpgrade);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpTestVerifyProfileToken();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpTestGetClientFeatureKeys();
    
    UFUNCTION(BlueprintCallable)
    void McpTestFriendCodes_OnQueryUnredeemedFriendCodes(bool bSuccess, const TArray<FFriendCode>& FriendCodes);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpTestFriendCodes(const FString& TokenId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpStorageTransfer(const TArray<FString>& ItemIdsToMoveToOutpost, const TArray<FString>& ItemIdsToMoveToTheater);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpSlotItem(const FString& ItemToSlot);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpResetPersistence();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpRemoveAllTestProfileMocks();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpRefreshProfile();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpRefreshCatalog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpRedeemPurchases();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpRecycleItem(const FString& ItemToRecycle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpPrintPartyInviteToken(bool OnlyPrintIfJoinable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpPrintFriendInviteToken(const FString& FriendName, bool OnlyPrintIfJoinable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpOpenCardPack(const FString& CardPackItemId, int32 SelectionIdx);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpLogout();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpJoinFromPartyInviteToken(const FString& Token, bool bIsFromInvite);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpIssueCodeToken(const FString& TokenId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpHostGetPlayers();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpHostGetAllPlayerCachedPersistence();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetVersion();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetUnredeemedCodes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetSchematicXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetPrivacySettings();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetPersonnelXP();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetHexMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetCurrencyAmount();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpGetCachedPersistence();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpForceHttpFailRate(float Factor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpEquipCharCosmetic(const FString& CharacterId, const FString& CosmeticId, int32 CosmeticType);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpEarnScore(int32 ScoreAmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpConvertItem(const FString& ItemToConvert, int32 ConversionIdx);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpCompleteHexMission();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpClaimAllResourceCollectors(bool bDebugPrint);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpClaimAllAvailableCollectionBookRewards();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpCheat();
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpApplyStash(const FString& StashName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpApplyAlteration(const FString& Schematic, const FString& Alteration);
    
    UFUNCTION(BlueprintCallable, Exec)
    void McpAddTestStatsMock();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MassSuicide();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MakeGods(TSubclassOf<AFortPawn> aClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void MakeBuildingActorsGod();
    
    UFUNCTION(BlueprintCallable, Exec)
    void MakeAIsGod();
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadMissionGenerator(const FString& GeneratorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void LoadMission(const FString& MissionName);
    
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
    void ListMissions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ListMissionGenerators();
    
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
    void KillPlaneSquad();
    
    UFUNCTION(BlueprintCallable, Exec)
    void KillPawns(TSubclassOf<AFortPawn> aClass);
    
    UFUNCTION(BlueprintCallable, Exec)
    void JoinFriendGameAsSpectator(const FString& FriendDisplayName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void JoinFriendGame(const FString& FriendId);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool IsUsingNewFrontEndCameraManagement();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Island_Destroy(const FString& Island_ItemId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void Island_Create(const FString& NewIslandTemplateId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void IronCityAutoAmplifierPlacement(int32 Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideHUDElement(FGameplayTag HUDElementTag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void HideGameplayCaptureUI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GPadV2_ToggleDebugDraw();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GoFast(float NewSpeed);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveWood(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveWeaponToScriptedPawn(const FString& WeaponName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveWeapons(FName Tag);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveWeapon(const FString& WeaponName, int32 RequestedLevel, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveUsefulThings(int32 NumOfUsefulThings);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveTrap(const FString& TrapName, int32 RequestedLevel, int32 NumTrapsToGive);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveStone(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveSpecificItem(const FString& ItemPath, int32 ItemAmount, int32 ItemLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveSBA(const FString& StrategicBuildingName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveResources(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GivePlaneEffect(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GivePickaxe(const FString& PickName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveMetal(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveLTMPlaneHealthGE(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveLTMPlaneBoostGE(int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveGoodWeapons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveGadgets(const FString& GadgetName, int32 Quantity, int32 ItemLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveGadget(const FString& GadgetName, int32 ItemLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveDeployablePlotAllIngredients(int32 NumIngredients);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveConsumable(const FString& ConsumableName, int32 RequestedLevel, int32 Count);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveCheatInventory();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveBluGlo(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaWeapons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaTraps();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaLoadout();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAthenaGadgets(const FString& GadgetName, int32 Quantity, int32 ItemLevel);
    
    UFUNCTION(BlueprintCallable, Exec)
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
    void GiveAmmo(const FString& AmmoNameAndAmmount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllWeapons();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllTraps(int32 NumItems);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllShotguns();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllRifles();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllPistols();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllMelee();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllIngredients(int32 NumIngredients);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GiveAllConsumables(int32 NumItems);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetWTFRotations();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetWorldLevel();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetWorldDifficulty();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetReplStat(TEnumAsByte<EFortReplicatedStat::Type> Stat);
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPoiVolumeData();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetPoiInfoForPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void GetGameStat(const FString& StatName);
    
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
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceUnlockHordeTiers(int32 MaxTierNumber);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSetHeroRemoteCharacter(int32 PartyMemberIndex, bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceServerShutdown(int32 ExitCode);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceSaveMissionStateAndWorld(const FString& SaveFileName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceReviveFromDBNO();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForcePersonalInputFilter(EFortInputFilterLevel InputFilter);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceMatchInputFilter(EFortInputFilterLevel InputFilter);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceHeroType(const FString& HeroPersistentName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceExternalRichPresenceUpdate();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceByPassNavMeshForAISpawning(bool bInValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceAthenaCosmeticItemInSlot(const FString& TemplateId, EAthenaCustomizationCategory Slot, int32 SlotIndex);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceAthenaCosmeticItem(const FString& TemplateId);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ForceAILODs(EFortAILODLevel inForcedAILODValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FinishCurrentStormCircle(float TimeToShrink);
    
    UFUNCTION(BlueprintCallable, Exec)
    void FakeKillHighlight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void FakeDownHighlight();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExtAuthReset(bool bWipeDeviceAccountInfo);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ExecuteNewMissionGeneration(float DifficultyLevel, const FString& GeneratorName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EvolveHero();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EventsRefreshPlayer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnvPain(float Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnduranceDebug(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EndLiveStreamingWindow();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EndDeimosSpawning();
    
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
    void EnableWaxRespawningLogic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableSubtitles(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableNewCustomizationPanel(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void EnableFixedTimeStep(int32 AsIfItWasFPS);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpMatchAnalytics();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpGameStats(const FString& FilterName);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAppliedHomebaseEffectsWithCoreAttributes();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllActorsWithAssetTags();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpAllActiveMissions();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpActorsWithAssetTags(const FString& TagList);
    
    UFUNCTION(BlueprintCallable, Exec)
    void DumpActiveGameplayEffects();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DiscardAILogging();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableWaxRespawningLogic();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAllParticleComponents();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DisableAI();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DevSkipTutorial();
    
    UFUNCTION(BlueprintCallable, Exec)
    void DestroyAllScriptedPawns();
    
    UFUNCTION(BlueprintCallable, Exec)
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
    
    UFUNCTION(BlueprintCallable, Exec)
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
    void Crucible_SetEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateProfileGoCollectionForSublevels(const FString& SublevelSearchString, int32 GridStepsX, int32 GridStepsY, int32 RotationSteps, int32 Quad);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CreateProfileGoCollectionForCreativeIslands(int32 GridStepsX, int32 GridStepsY, int32 RotationSteps, int32 Quad);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CraftFree();
    
    UFUNCTION(BlueprintCallable, Exec)
    void CountPlayerBuiltBuildingActors();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ConstructTileWorld(int32 MaxTiles, int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearScriptedPawnVariantChannels();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearRespawnTimer();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearMapFog();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ClearKeepSave();
    
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
    
    UFUNCTION(BlueprintCallable, Exec)
    void CheatMountExitVan();
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeTeam(uint8 NewTeamNum);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeHeroClass(const int32 Index);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ChangeBotModule(const FString& PilotCategory, const FString& NewModule, bool bResetNow);
    
    UFUNCTION(BlueprintCallable, Exec)
    void CaptureTeamToggleInput();
    
    UFUNCTION(BlueprintCallable, Exec)
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
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotSpectate(const FString& BotCommand);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BotFillUp(int32 Amount);
    
    UFUNCTION(BlueprintCallable, Exec)
    void BeautyMode();
    
    UFUNCTION(BlueprintCallable, Exec)
    void Badass();
    
    UFUNCTION(BlueprintCallable, Exec)
    void BackpackSetSize(int32 Size);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AthenaGiveScoreTo(int32 PlayerStateIdx, int32 Score);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AthenaForceVictory(bool bVictory);
    
    UFUNCTION(BlueprintCallable, Exec)
    void AthenaEndlessGame();
    
    UFUNCTION(BlueprintCallable, Exec)
    void AthenaEmote(const FString& EmoteName);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static bool AreContextMenusEnabled(const APlayerController* PC);
    
    UFUNCTION(BlueprintCallable, Exec)
    void ApplyWeaponAlteration(const FString& AlterationName);
    
    UFUNCTION(BlueprintCallable, Exec)
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
    
};

