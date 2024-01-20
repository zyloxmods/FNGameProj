#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortLobbyType.h"
#include "PlaylistData.h"
#include "FortLobbyWidget.h"
#include "Templates/SubclassOf.h"
#include "AthenaLobbyBase.generated.h"

class UAthenaChallengeInfoPanel;
class UCatalogMessaging;
class UCommonBorder;
class UCommonButton;
class UCommonWidgetSwitcher;
class UEmergencyNoticeBase;
class UFortAthenaMatchmakingWidget;
class UFortAthenaNewsPanel;
class UFortDivisionLobbyPanel;
class UFortPlaylistAthena;
class UFortSquadSelectionMenu;
class UFortTournamentLobbyPanel;
class UFriendCodeShareButtonBase;
class UStoreToastRequest;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaLobbyBase : public UFortLobbyWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ShownGlyphBundleUpdate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsSwitchingLevels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortLobbyType CurrentLobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ActiveLobbyLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName LoadingLobbyLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName NextLobbyLevelName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaNewsPanel> NewsModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSquadSelectionMenu> SquadFormationClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaMatchmakingWidget* Matchmaking_Athena;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmergencyNoticeBase* Notice_Emergency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* LobbyDetails_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTournamentLobbyPanel* LobbyDetails_Tournament;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDivisionLobbyPanel* LobbyDetails_ShowdownDivision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeInfoPanel* ChallengeInfo_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_LobbyDetailsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_GenericLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ShadowPlayHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFriendCodeShareButtonBase* Button_ShareFriendCode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle EmoteInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle NewsInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SquadFormationInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatalogMessaging* CatalogMessaging;
    
public:
    UAthenaLobbyBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGenericLinkText(const FText& NewText);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ShowMobileAutoFireScreen();
    
public:
    UFUNCTION(BlueprintCallable)
    void ShowHighlightSummary();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSocialImportButtonText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaylistChanged(EFortLobbyType LobbyType, const UFortPlaylistAthena* PlaylistData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyChanged(const EFortLobbyType& LobbyType);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void LoadLobbyBackground();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleSquadFormationClicked(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlaylistDataChanged(const FPlaylistData& NewPlaylistData);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleNewsClicked(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGenericLinkButtonClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleEmoteClicked(bool& bPassThrough);
    
    UFUNCTION(BlueprintCallable)
    void HandleActiveWidgetChanged(UWidget* NewActiveWidget, int32 WidgetIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayStoreUpdated(UStoreToastRequest* StoreUpdatedRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayGlyphQuestUpdated(int32 NewGlyphs);
    
};

