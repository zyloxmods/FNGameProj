#pragma once
#include "CoreMinimal.h"
#include "EFortLobbyType.h"
#include "EFortMatchmakingViolatorStyle.h"
#include "PlaylistFrontEndData.h"
#include "FortMatchmakingWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMatchmakingWidgetLegacy.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UEnableMultiFactorModal;
class UFortActivatablePanel;
class UFortEulaWidget;
class UFortMissionGenerator;
class UFortPlaylistAthena;
class UFortServerBrowserBattleLab;
class UFortServerBrowserCreative;
class UFortShowdownDetailView;
class UProgressBar;
class USpatialFactionScreen;
class UWidget;

UCLASS(Blueprintable, EditInlineNew, Config=Game)
class UFortAthenaMatchmakingWidgetLegacy : public UFortMatchmakingWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortMissionGenerator> DefaultMissionGen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortMatchmakingViolatorStyle NewModeStyleOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HighPriorityEventId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString HighPriorityTournamentId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortEulaWidget> EulaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnableMultiFactorModal> MFA_ModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnableMultiFactorModal* MFA_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegionLockTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortShowdownDetailView> RegionLockMessageWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText AccountTypeText;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortServerBrowserCreative> CreativeServerBrowserSoftClassRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortServerBrowserBattleLab> BattleLabServerBrowserSoftClassRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortActivatablePanel> MatchmakingOptionsClassRef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<USpatialFactionScreen> FactionScreenSoftClassRef;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_StartMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CancelContentDownload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MatchmakingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SpinnerAndTextContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* ContentBeaconDownloadContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ContentDownloadProgressBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_MatchmakingHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_MatchmakingMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_ContentDownloadingHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_NewMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_PartySizeWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* OptionalTextBlock_BlackoutCountdown;
    
public:
    UFortAthenaMatchmakingWidgetLegacy();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCustomViolatorText(const FText& ModeName, const FText& SubText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShouldShowMatchmakingDetails(bool bShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadFillText(bool InCurrentSquadFill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaylistChanged(const FPlaylistFrontEndData& NewPlaylist, const FText& PlaylistCMSOverrideName, EFortLobbyType LobbyType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayButtonText(const FText& PlayButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCancelButtonText(const FText& CancelButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewModeViolatorUpdated(bool bShouldShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingFinishedBlueprint(bool bSuccess, UFortPlaylistAthena* Playlist);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAvailablePlaylistsUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void BlueprintInteracted();
    
};

