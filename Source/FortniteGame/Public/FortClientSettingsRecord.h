#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "SocialTypes.h"
#include "Party/PartyTypes.h"
#include "ESubtitleDisplayBackgroundOpacity.h"
#include "ESubtitleDisplayTextBorder.h"
#include "ESubtitleDisplayTextColor.h"
#include "ESubtitleDisplayTextSize.h"
#include "EAndroidAppStoreTypes.h"
#include "ECloudFileState.h"
#include "EColorBlindMode.h"
#include "EFortAllowBackgroundAudioSetting.h"
#include "EFortAutoMulchCategory.h"
#include "EFortAutoMulchMode.h"
#include "EFortGamepadLookInputCurve.h"
#include "EFortGamepadSensitivity.h"
#include "EFortInventoryCustomFilter.h"
#include "EFortMotionYawAxis.h"
#include "EFortRarity.h"
#include "ELicensedAudioTreatment.h"
#include "EQuestMapScreenMode.h"
#include "ESelectableVoiceChatSetting.h"
#include "ESpectatorSquadIdMode.h"
#include "ESubGame.h"
#include "EThirdPersonAutoFollowMode.h"
#include "ETouchInteractMode.h"
#include "FortActionKeyMapping.h"
#include "FortGamepadUserOptions.h"
#include "FortGenericRecord.h"
#include "FortMobileHUDProfileContainer.h"
#include "HUDLayoutData.h"
#include "PlayerLastSelectedPreferredProvider.h"
#include "UserActionBindings.h"
#include "FortClientSettingsRecord.generated.h"

UCLASS(Blueprintable, Within=FortLocalPlayer)
class FORTNITEGAME_API UFortClientSettingsRecord : public UFortGenericRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortGamepadUserOptions LocalGamepadUserOptions;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HUDScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialHUDScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoHideBuildingMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity ShowPickupDotsOnMapByRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortGamepadUserOptions GamepadUserOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector2D GamepadLookSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadMoveStickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadLookStickDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TargetingSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScopedSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadTargetingSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadScopedSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadBuildingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GamepadEditModeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionTargetingSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionScopedSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MotionHarvestingToolSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivityX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivityY;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MouseSensitivityMultiplierForAircraftValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialMouseSensitivityMultiplierForAircraft;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchLookAccelerationMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchLookSensitivitySetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchTargetingSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchScopedSlow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchBuildingMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchEditModeMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TouchVerticalMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bMotionControlsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMotionYawAxis MotionYawAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GyroSensitivity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ControllerPlatform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputKBMPresetNameForCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputKBMPresetNameForAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputPresetNameForCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputPresetNameForAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputPresetNameForAthenaMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputTemplatePresetNameForCampaign;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString InputTemplatePresetNameForAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XboxSafeZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PendingCulture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortActionKeyMapping> UserActionBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<ESubGame, FUserActionBindings> UserBindingsPerSubGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortActionKeyMapping> DisabledActionBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortActionKeyMapping> CustomGamepadActionBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedLook;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedLookMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedPitchForMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedPitchForAircraftPrimary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedPitchForAircraftSecondary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedYawMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInvertedYawForMotion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bToggleSprint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSprintByDefault;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSprintByDefaultMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSprintCancelsReload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTapInteractEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETouchInteractMode TouchInteractionMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetingToggleable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTargetingToggleableMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoEquipBetterItems;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAimAssistEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTouchAimAssistEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTouchEditEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEditConfirmOnReleaseEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bQuickEditEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bForceFeedbackEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeviceFeedbackBlockedWithAttachedController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bContextTutorialEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBuildingPossessionShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLocalNotificationsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseFirstPersonCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGamepadEditModeAimAssist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseHoldToSwapPickup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseGamepadAutoRun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusOnFirstBuildingPieceWhenQuickbarSwapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewFocusOnFirstBuildingPieceWhenQuickbarSwapped;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNewFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurboBuild;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTurboBuildMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreativeTurboDelete;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoChangeMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoChangeMaterialMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoOpenDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoOpenDoorsNonMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPickupWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoPickupWeaponsConsolePC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoSortConsumablesToRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableTryBuildOnFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float EditButtonHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUnlockConsoleFPS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsoleFPS60;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> UserHUDVisibiltyMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FGameplayTag, bool> UserHUDDefaultMappings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPartyType LastPartyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastLeaderInvitesOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLastLeaderFriendsOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bAudioVolumesInitialized;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MusicVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SoundFXVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DialogVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ChatVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CinematicsVolume;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableSubtitles;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayTextSize SubtitleTextSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayTextColor SubtitleTextColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayTextBorder SubtitleTextBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESubtitleDisplayBackgroundOpacity SubtitleBackgroundOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVoiceChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVoiceChat3D;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableVoiceChatPTT;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanVoiceChatWithUnknowns;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnablePeripheralLighting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowViewerCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnonymousMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAnonymousCharacterMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideOtherPlayerNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HiddenMatchmakingDelayMaxSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bReplayRecordingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLargeTeamReplayRecordingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCreativeModeReplayRecordingEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShadowPlayHighlightsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlaceDangerMarkerWhenTargeting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowGlobalChatEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialGammaValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialUseTapToShoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialAutoOpenDoors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialAutoPickupWeapons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialAutoPickupWeaponsConsolePC;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialAutoSortConsumablesToRight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInitialEnableTryBuildOnFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InitialEditButtonHoldTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStWQuickbarUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldShowBothQuickbars;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ELicensedAudioTreatment LicensedAudioTreatment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EColorBlindMode ColorBlindMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ColorBlindStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVisualizeAudioSources;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EColorBlindMode InitialColorBlindMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float InitialColorBlindStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnoreGamepadInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInitialIgnoreGamepadInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLockPrimaryInputMethodToMouse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bLockPrimaryInputMethodToMouseInitial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnableRudderControl;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RudderDeadZone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RudderMaxThrottle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SelectedRegionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString PrevSavedRegion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastKnownBestRegionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CrossplayPreference;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<EFortInventoryCustomFilter> CustomInventoryFilterSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FName> WatchedVideoIDs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowAudioInBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortAllowBackgroundAudioSetting AllowAudioInBackground;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUsePowerSavingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHidePerkRecombobulatorHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideStwItemRefundHelp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAndroidAppStoreTypes SelectedAndroidAppStore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AndroidStoreSelectionRevision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasDisabledAutoSlottingOfSurvivorSquadsAfterQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasEnabledAutoSlottingOfSurvivorSquadsDuringOnboarding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWantsAutoSlottingOfSurvivorSquads;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHUDLayoutData> CustomHUDLayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresHUDConversion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMobileHUDProfileContainer HUDProfileContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EQuestMapScreenMode QuestMapMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString QuestMapEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoJoinGameServerChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowVoiceIndicatorsNotifications;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FString> SeenEventFlags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, int32> ContextTutorialSeenCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCompletedGuidedTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasCompletedHUDLayoutToolV2Tutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FortClientSettingRecord;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTemperature;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bNotifyUsersWhenPlaying;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowFriendSubscriptionNudges;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerSurveysAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime FlagSelectionLastUpdated;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseSmallInventoryTiles;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint8, uint32> LastSeenHashByShopSection;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, uint32> LastSeenHashByShopSectionId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool HasSeenCommunityVotingTutorial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastSeenCommunityVotingTutorialVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSeenCommunityVotingVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastSeenReloadMtxIntroVersion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LastSeenStandaloneOfferId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EFortAutoMulchCategory, EFortAutoMulchMode> AutoMulchModeMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FPlayerLastSelectedPreferredProvider> LastPlayerSelectedPreferredProvider;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoExposureEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualExposureBias;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FocalLength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Aperture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoFocusEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ManualFocusDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPlayerOutlinesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bStormEffectsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeZoneOpacity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRelevancyZoneVisible;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHighQualityFxEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDamageFxEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EThirdPersonAutoFollowMode ThirdPersonAutoFollowMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ThirdPersonDistanceToSubject;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bThirdPersonCameraCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShareLensSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDroneIgnoreJump;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowSessionIDWatermark;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleMapShowTimeIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleMapShowNearbyChests;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleMapShowAllSquadMembers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bBattleMapAutomaticCameraPlacement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bNamePlatesEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowTeamColor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ViewDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowDetailDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrowDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bScalingOptionsEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighDetailScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HighDetailScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowDetailScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LowDetailScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrowScaleMin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ArrowScaleMax;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bArrowColorEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESpectatorSquadIdMode SquadIdMode;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDirty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bSaveToCloud: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECloudFileState CloudFileState;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint32 bDisableCloudSave;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastRequestSaveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LastAttemptedSaveCount;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double LastSaveAttemptTime;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    double NextCloudSaveTime;
    
public:
    UFortClientSettingsRecord();
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatWithUnknownsEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatPTTEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChatEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVoiceChat3DEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetVisualizeAudioSources(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetViewDistance(float InViewDistance);
    
    UFUNCTION(BlueprintCallable)
    void SetUsePowerSavingMode(bool bNewUsePowerSavingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetUseLegacyControls(bool NewUseLegacyControls);
    
    UFUNCTION(BlueprintCallable)
    void SetUseHoldToSwapPickup(bool InUseHoldToSwapPickup);
    
    UFUNCTION(BlueprintCallable)
    void SetUseGamepadEditModeAimAssist(bool InUseGamepadEditModeAimAssist);
    
    UFUNCTION(BlueprintCallable)
    void SetUseGamepadAutoRun(bool InUseGamepadAutoRun);
    
    UFUNCTION(BlueprintCallable)
    void SetUseFirstPersonCamera(bool bUseFirstPerson);
    
    UFUNCTION(BlueprintCallable)
    void SetUseAdvancedOptions(bool NewUseAdvancedOptions);
    
    UFUNCTION(BlueprintCallable)
    void SetTurboBuild(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchVerticalMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchTargetingMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchScopedMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchLookSensitivitySetting(float InSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchLookAccelerationMultiplier(float InSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchInteractMode(const ETouchInteractMode bNewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchEditModeMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchEditEnabled(bool bTouchEdit);
    
    UFUNCTION(BlueprintCallable)
    void SetTouchBuildingMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetToggleSprint(bool bToggle);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetThirdPersonDistanceToSubject(float InThirdPersonDistanceToSubject);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetThirdPersonCameraCollision(bool bInThirdPersonCameraCollision);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetThirdPersonAutoFollowMode(EThirdPersonAutoFollowMode InThirdPersonAutoFollowMode);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetingToggleableWithTouch(bool bToggle);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetingToggleable(bool bToggle);
    
    UFUNCTION(BlueprintCallable)
    void SetTargetingMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetTapInteract(bool bTapInteract);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesTextSize(ESubtitleDisplayTextSize Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesTextColor(ESubtitleDisplayTextColor Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesTextBorder(ESubtitleDisplayTextBorder Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesEnabled(bool Value);
    
    UFUNCTION(BlueprintCallable)
    void SetSubtitlesBackgroundOpacity(ESubtitleDisplayBackgroundOpacity Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetStormEffectsEnabled(bool bInStormEffectsEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSquadIdMode(ESpectatorSquadIdMode InSquadIdMode);
    
    UFUNCTION(BlueprintCallable)
    void SetSprintCancelsReload(bool bInSprintCancelsReload);
    
    UFUNCTION(BlueprintCallable)
    void SetSoundFXVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetShowVoiceIndicators(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetShowViewerCountEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetShowTemperature(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetShowTeamColor(bool bInShowTeamColor);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetShowSessionIDWatermark(bool bInSessionIDWatermark);
    
    UFUNCTION(BlueprintCallable)
    void SetShowPickupDotsOnMapByRarity(EFortRarity InRarity);
    
    UFUNCTION(BlueprintCallable)
    void SetShowGlobalChatEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldSprintByDefault(bool bShouldSprintByDefault);
    
    UFUNCTION(BlueprintCallable)
    void SetShouldShowBothQuickbars(bool bNewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetShareLensSettings(bool bInShareLensSettings);
    
    UFUNCTION(BlueprintCallable)
    void SetShadowPlayHighlightsEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetScopedMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetScalingOptionsEnabled(bool bInScalingOptionsEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetSafeZoneOpacity(float InSafeZoneOpacity);
    
    UFUNCTION(BlueprintCallable)
    void SetRudderMaxThrottle(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetRudderDeadZone(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetReplayRecordingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetRelevancyZoneVisible(bool bInRelevancyZoneVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetQuickEditEnabled(bool bNewQuickEditEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPlayerSurveysAllowed(bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetPlayerOutlinesEnabled(bool bInPlayerOutlinesEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetPlaceDangerMarkerWhenTargeting(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetPeripheralLightingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetNotifyUsersWhenPlaying(const bool Value);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetNameplatesEnabled(bool bInNameplatesEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetMusicVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityY(float InSensitivityY);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityX(float InSensitivityX);
    
    UFUNCTION(BlueprintCallable)
    void SetMouseSensitivityMultiplierForAircraft(float InSensitivityMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionYawAxisSetting(EFortMotionYawAxis InSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionTargetingMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionScopedMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionHarvestingToolMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetMotionControlsEnabledSetting(bool InSetting);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetManualFocusDistance(float InManualFocusDistance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetManualExposureBias(float InManualExposureBias);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLowDetailScaleMin(float InLowDetailScaleMin);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLowDetailScaleMax(float InLowDetailScaleMax);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetLowDetailDistance(float InLowDetailDistance);
    
    UFUNCTION()
    void SetLookVerticalSpeedAds(uint32 NewValue);
    
    UFUNCTION()
    void SetLookVerticalSpeed(uint32 NewValue);
    
    UFUNCTION()
    void SetLookVerticalBoostSpeedAds(uint32 NewValue);
    
    UFUNCTION()
    void SetLookVerticalBoostSpeed(uint32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLookSensitivityPresetAds(EFortGamepadSensitivity NewPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetLookSensitivityPreset(EFortGamepadSensitivity NewPreset);
    
    UFUNCTION(BlueprintCallable)
    void SetLookInputCurve(EFortGamepadLookInputCurve NewValue);
    
    UFUNCTION()
    void SetLookHorizontalSpeedAds(uint32 NewValue);
    
    UFUNCTION()
    void SetLookHorizontalSpeed(uint32 NewValue);
    
    UFUNCTION()
    void SetLookHorizontalBoostSpeedAds(uint32 NewValue);
    
    UFUNCTION()
    void SetLookHorizontalBoostSpeed(uint32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLookEditModeMultiplier(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLookEaseTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLookBuildModeMultiplier(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLookBoostAccelerationTimeAds(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLookBoostAccelerationTime(float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetLockPrimaryInputMethodToMouse(bool bLock);
    
    UFUNCTION(BlueprintCallable)
    void SetLocalNotificationsEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetLicensedAudioTreatment(ELicensedAudioTreatment InLicensedAudioTreatment);
    
    UFUNCTION(BlueprintCallable)
    void SetLargeTeamReplayRecordingEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertedYawForMotion(bool bInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertedYaw(bool bInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertedPitchForMotion(bool bInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertedPitchForAircraftSecondary(bool bInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertedPitchForAircraftPrimary(bool bInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetInvertedPitch(bool bInvert);
    
    UFUNCTION(BlueprintCallable)
    void SetInstantBoostWhenBuilding(bool NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetIgnoreGamepadInput(bool bIgnore);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDScaleMultiplier(float InHUDScaleMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetHUDScale(float InScale);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHighQualityFxEnabled(bool bInHighQualityFxEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHighDetailScaleMin(float InHighDetailScaleMin);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetHighDetailScaleMax(float InHighDetailScaleMax);
    
    UFUNCTION(BlueprintCallable)
    void SetHideOtherPlayerNames(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetHiddenMatchmakingDelayMax(int32 Value);
    
    UFUNCTION(BlueprintCallable)
    void SetGyroLookSensitivitySetting(float InSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadTargetingMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadScopedMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadMoveStickDeadZone(const float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadLookStickDeadZone(const float NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadLookSensitivityY(float InSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadLookSensitivityX(float InSensitivity);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadEditModeMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetGamepadBuildingMultiplier(float InMultiplier);
    
    UFUNCTION(BlueprintCallable)
    void SetFromVoiceChatSettings(ESelectableVoiceChatSetting InSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetForceFeedbackEnabled(bool bForceFeedback);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena(bool InFocusOnFirstBuildingPieceWhenQuickbarSwapped);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusOnFirstBuildingPieceWhenQuickbarSwapped(bool InFocusOnFirstBuildingPieceWhenQuickbarSwapped);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetFocalLength(float InFocalLength);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableTryBuildOnFocus(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetEnableRudderControl(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetEditConfirmOnReleaseEnabled(bool bNewEditConfirmOnRelease);
    
    UFUNCTION(BlueprintCallable)
    void SetEditButtonHoldTime(const float NewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDroneIgnoreJump(bool bInDroneIgnoreJump);
    
    UFUNCTION(BlueprintCallable)
    void SetDialogueVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetDeviceFeedbackBlockedWithAttachedController(bool bForceFeedbackBlocked);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetDamageFxEnabled(bool bInDamageFxEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetCrossplayPreference(ECrossplayPreference NewPreference);
    
    UFUNCTION(BlueprintCallable)
    void SetCreativeTurboDelete(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCreativeModeReplayRecordingEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetContextTutorialEnabled(bool bEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetConsoleFPSUnlocked(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindStrength(int32 InColorBlindStrength);
    
    UFUNCTION(BlueprintCallable)
    void SetColorBlindMode(EColorBlindMode InMode);
    
    UFUNCTION(BlueprintCallable)
    void SetCinematicsVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetChatVolume(float InVolume);
    
    UFUNCTION(BlueprintCallable)
    void SetBuildingPossessionShown(bool bShown);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBattleMapShowTimeIndicator(bool bInBattleMapShowTimeIndicator);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBattleMapShowNearbyChests(bool bInBattleMapShowNearbyChests);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBattleMapShowAllSquadMembers(bool bInBattleMapShowAllSquadMembers);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetBattleMapAutomaticCameraPlacement(bool bInBattleMapAutomaticCameraPlacement);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoSortConsumablesToRight(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPickupWeaponsConsolePC(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPickupWeapons(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoOpenDoors(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoMulchMode(EFortAutoMulchCategory Category, EFortAutoMulchMode NewMode);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoJoinGameVoiceChannel(bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoHideBuildingMaterials(bool InAutoHideBuildingMats);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAutoFocusEnabled(bool bInAutoFocusEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAutoExposureEnabled(bool bInAutoExposureEnabled);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoEquipBetterItems(bool bAutoEquip);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoChangeMaterial(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetArrowScaleMin(float InArrowDetailScaleMin);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetArrowScaleMax(float InArrowScaleMax);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetArrowDistance(float InArrowDistance);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetArrowColorEnabled(bool bInArrowColorEnabled);
    
    UFUNCTION(BlueprintCallable, Exec)
    void SetAperture(float InAperture);
    
    UFUNCTION(BlueprintCallable)
    void SetAnonymousModeEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAnonymousCharacterModeEnabled(bool bEnable);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowFriendSubscriptionNudges(bool bAllow);
    
    UFUNCTION(BlueprintCallable)
    void SetAllowAudioInBackgroundSetting(EFortAllowBackgroundAudioSetting Value);
    
    UFUNCTION()
    void SetAimAssistStrength(uint32 NewValue);
    
    UFUNCTION(BlueprintCallable)
    void SetAimAssistEnabled(const bool bNewValue);
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingHoldToSwapPickup() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingGamepadEditModeAimAssist() const;
    
    UFUNCTION(BlueprintCallable)
    bool IsUsingGamepadAutoRun() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetVoiceChatWithUnknownsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    ESelectableVoiceChatSetting GetVoiceChatSettings() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetVoiceChatPTTEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetVoiceChatEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetVoiceChat3DEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetVisualizeAudioSources() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUsePowerSavingMode() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetUseFirstPersonCamera() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTurboBuild() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTouchVerticalMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTouchTargetingMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTouchScopedMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTouchLookSensitivitySetting() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTouchLookAccelerationMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    ETouchInteractMode GetTouchInteractionMode() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTouchEditModeMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTouchEditEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTouchBuildingMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetToggleSprint() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTargetingToggleableWithTouch() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTargetingToggleable() const;
    
    UFUNCTION(BlueprintCallable)
    float GetTargetingMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetTapInteract() const;
    
    UFUNCTION(BlueprintCallable)
    ESubtitleDisplayTextSize GetSubtitlesTextSize() const;
    
    UFUNCTION(BlueprintCallable)
    ESubtitleDisplayTextColor GetSubtitlesTextColor() const;
    
    UFUNCTION(BlueprintCallable)
    ESubtitleDisplayTextBorder GetSubtitlesTextBorder() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSubtitlesEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    ESubtitleDisplayBackgroundOpacity GetSubtitlesBackgroundOpacity() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetSprintCancelsReload() const;
    
    UFUNCTION(BlueprintCallable)
    float GetSoundFXVolume() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShowVoiceIndicators() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShowViewerCountEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShowTemperature() const;
    
    UFUNCTION(BlueprintCallable)
    EFortRarity GetShowPickupDotsOnMapByRarity() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShowGlobalChatEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShouldSprintByDefault() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShouldShowBothQuickbars() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetShadowPlayHighlightsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    float GetScopedMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRudderMaxThrottle() const;
    
    UFUNCTION(BlueprintCallable)
    float GetRudderDeadZone() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetReplayRecordingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetQuickEditEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPlayerSurveysAllowed() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPlaceDangerMarkerWhenTargeting() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPeripheralLightingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetNotifyUsersWhenPlaying() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMusicVolume() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMouseSensitivityY() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMouseSensitivityX() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMouseSensitivityMultiplierForAircraft() const;
    
    UFUNCTION(BlueprintCallable)
    EFortMotionYawAxis GetMotionYawAxisSetting() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMotionTargetingMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMotionScopedMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetMotionHarvestingToolMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetMotionControlsEnabledSetting() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLockPrimaryInputMethodToMouse() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLocalNotificationsEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    ELicensedAudioTreatment GetLicensedAudioTreatment() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetLargeTeamReplayRecordingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInvertedYawForMotion() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInvertedYaw() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInvertedPitchForMotion() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInvertedPitchForAircraftSecondary() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInvertedPitchForAircraftPrimary() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetInvertedPitch() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetIgnoreGamepadInput() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHUDScaleRaw() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHUDScaleMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetHUDScale() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetHideOtherPlayerNames() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetHiddenMatchmakingDelayMax() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGyroLookSensitivitySetting() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadTargetingMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadScopedMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadMoveStickDeadZone() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadLookStickDeadZone() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadLookSensitivityY() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadLookSensitivityX() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadEditModeMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    float GetGamepadBuildingMultiplier() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetForceFeedbackEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetFocusOnFirstBuildingPieceWhenQuickbarSwappedAthena() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetFocusOnFirstBuildingPieceWhenQuickbarSwapped() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEnableTryBuildOnFocus() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEnableRudderControl() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetEditConfirmOnReleaseEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    float GetEditButtonHoldTime() const;
    
    UFUNCTION(BlueprintCallable)
    float GetDialogueVolume() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetDeviceFeedbackBlockedWithAttachedController() const;
    
    UFUNCTION(BlueprintCallable)
    ECrossplayPreference GetCrossplayPreference() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCreativeTurboDelete() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetCreativeModeReplayRecordingEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetContextTutorialEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetConsoleFPSUnlocked() const;
    
    UFUNCTION(BlueprintCallable)
    int32 GetColorBlindStrength() const;
    
    UFUNCTION(BlueprintCallable)
    EColorBlindMode GetColorBlindMode() const;
    
    UFUNCTION(BlueprintCallable)
    float GetCinematicsVolume() const;
    
    UFUNCTION(BlueprintCallable)
    float GetChatVolume() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetBuildingPossessionShown() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoSortConsumablesToRight() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoPickupWeaponsConsolePC() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoPickupWeapons() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoOpenDoors() const;
    
    UFUNCTION(BlueprintCallable)
    EFortAutoMulchMode GetAutoMulchMode(EFortAutoMulchCategory Category) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoJoinGameVoiceChannel() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoHideBuildingMaterials() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoEquipBetterItems() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAutoChangeMaterial() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAnonymousModeEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAnonymousCharacterModeEnabled() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAllowFriendSubscriptionNudges() const;
    
    UFUNCTION(BlueprintCallable)
    EFortAllowBackgroundAudioSetting GetAllowAudioInBackgroundSetting() const;
    
    UFUNCTION(BlueprintCallable)
    bool GetAimAssistEnabled() const;
    
};

