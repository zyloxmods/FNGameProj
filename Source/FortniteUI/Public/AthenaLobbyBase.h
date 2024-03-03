#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EFortLobbyType.h"
#include "EFortPickerMode.h"
#include "PlaylistData.h"
#include "FortLobbyWidget.h"
#include "Templates/SubclassOf.h"
#include "AthenaLobbyBase.generated.h"

class UAthenaChallengeInfoPanel;
class UAthenaMissionInfoPanel;
class UCatalogMessaging;
class UCommonActivatableWidget;
class UCommonBorder;
class UCommonButton;
class UCommonWidgetSwitcher;
class UEmergencyNoticeBase;
class UFortAthenaMOTDTeaserWidget;
class UFortAthenaMatchmakingWidgetLegacy;
class UFortDivisionLobbyPanel;
class UFortEmotePicker;
class UFortPlaylistAthena;
class UFortSquadSelectionMenu;
class UFortTournamentLobbyPanel;
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
    EFortLobbyType CurrentLobbyType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSquadSelectionMenu> SquadFormationClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonActivatableWidget> LiveStreamVideoClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_Matchmaking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaMatchmakingWidgetLegacy* Matchmaking_AthenaLegacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UEmergencyNoticeBase* Notice_Emergency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortAthenaMOTDTeaserWidget* FortAthenaMOTDTeaserWidget_Main;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* LobbyDetails_Default;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTournamentLobbyPanel* LobbyDetails_Tournament;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortDivisionLobbyPanel* LobbyDetails_ShowdownDivision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeInfoPanel* ChallengeInfo_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMissionInfoPanel* MissionInfo_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_LobbyDetailsMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_GenericLink;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ShadowPlayHighlights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortEmotePicker> NewEmotePicker;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle SquadFormationInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle WatchLiveInputAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCatalogMessaging* CatalogMessaging;
    
public:
    UAthenaLobbyBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateGenericLinkText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable)
    void ShowHighlightSummary();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateSocialImportButtonText(const FText& NewText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlaylistChanged(EFortLobbyType LobbyType, const UFortPlaylistAthena* PlaylistData);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLobbyChanged(const EFortLobbyType& LobbyType);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleWatchLiveStreamClicked(bool& bPassThrough);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandlePlaylistDataChanged(const FPlaylistData& NewPlaylistData);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandlePickerOpenRequest(EFortPickerMode Mode, int32 InitialOption, bool bIgnoreFirstAccept);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleGenericLinkButtonClicked();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleActiveWidgetChanged(UWidget* NewActiveWidget, int32 WidgetIndex);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayStoreUpdated(UStoreToastRequest* StoreUpdatedRequest);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void DisplayGlyphQuestUpdated(int32 NewGlyphs);
    
};

