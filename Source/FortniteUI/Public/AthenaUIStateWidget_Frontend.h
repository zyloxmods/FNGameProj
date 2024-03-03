#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "GameplayTagContainer.h"
#include "EFrontendVisibilityMode.h"
#include "FortUIStateWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "VideoConfig_Mono.h"
#include "AthenaUIStateWidget_Frontend.generated.h"

class AFortFrontEndMiniMapManager;
class UApolloIntroLoadingPanel;
class UAthenaActivatableChatWidget;
class UAthenaConfirmationWindow;
class UAthenaTopBar;
class UBattlePassPurchaseScreen;
class UCommonButton;
class UCommonUserWidget;
class UEnableMultiFactorModal;
class UFortActivatableMovieWidget_Monolithic;
class UFortAthenaMOTDWidget;
class UFortAthenaTabsScreenBase;
class UFortDualBladeMenu;
class UFortGiftBoxItem;
class UFortItemPresentationScreen;
class UFortLetoSellModal;
class UFortPlayerBanned;
class UFortPlayerSurveyDispatcher;
class UFortSocialImportPanel;
class UGuidedTutorialLoadingScreen;
class UHUDLayoutToolFireModePanel;
class UMediaPlayer;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaUIStateWidget_Frontend : public UFortUIStateWidgetBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UGuidedTutorialLoadingScreen> GuidedTutorialFakeLoadingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId GuidedTutorialPlaylistId;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BadMatchPopupTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText BadMatchPopupDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattlepassScreenTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UHUDLayoutToolFireModePanel> FireModePanelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaMOTDWidget> MOTDWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivatableMovieWidget_Monolithic> NewVideoPlayerClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UBattlePassPurchaseScreen> BattlePassPurchaseScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVideoConfig_Mono SeasonTrailerConfig;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortLetoSellModal> LetoAdvertisementClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEnableMultiFactorModal> MFAModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSocialImportPanel> SocialImportPanelClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAthenaConfirmationWindow> ConfirmationWindowClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortFrontEndMiniMapManager> MiniMapManagerClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortItemPresentationScreen> ItemReceivedScreenClass;
    
    UPROPERTY(EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortAthenaTabsScreenBase> AthenaTabsScreen;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortPlayerBanned> PlayerBannedScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortPlayerSurveyDispatcher* PlayerSurveyDispatcher;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bVideoActive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaTopBar* TopBar_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* BottomBar;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaActivatableChatWidget* ChatPanel_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ToggleChat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDualBladeMenu* DualBladeMenu_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortGiftBoxItem* NextGiftBox;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<TWeakObjectPtr<UFortGiftBoxItem>> RequestedGiftBoxesToDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ApolloIntroPlaylist_CurrentPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ApolloIntroPlaylist_PastPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ApolloIntroPlaylist_NewPlayerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ApolloIntroPlaylist_05H95BId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ApolloIntroPlaylist_20H80BId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ApolloIntroPlaylist_30H70BId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPrimaryAssetId ApolloIntroPlaylist_40H60BId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UApolloIntroLoadingPanel> ApolloIntroFakeLoadingScreenClass;
    
public:
    UAthenaUIStateWidget_Frontend();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StopTrailerTransitionAudioCheck();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartTrailerTransitionAudioCheck(UMediaPlayer* MediaPlayer);
    
private:
    UFUNCTION(BlueprintCallable)
    void SocialBanModalCheck();
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetVideoActive(bool bActive);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetFrontendVisibilityMode(EFrontendVisibilityMode InFrontendVisibilityMode);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool NeedSeeTrailerMovie(bool bAllowUpdate, bool bSkipUserSettingCheck) const;
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleSeasonTrailerPlayed();
    
    UFUNCTION(BlueprintCallable)
    void HandleSeasonTrailerEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortPlayerSurveyDispatcher* GetPlayerSurveyDispatcher() const;
    
    UFUNCTION(BlueprintCallable)
    bool AttemptToOpenBattlePassTabForNewSeason();
    
};

