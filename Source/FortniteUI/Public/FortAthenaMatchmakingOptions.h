#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "PlaylistFrontEndData.h"
#include "AthenaPlaylistEntry.h"
#include "EFillDisableReason.h"
#include "EServerAccessSetting.h"
#include "ESpectatorQueueType.h"
#include "ESquadFillSetting.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMatchmakingOptions.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonTextBlock;
class UFortAthenaMatchmakingTile;
class UFortAthenaMatchmakingWidget;
class UOverlay;
class UScrollBox;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaMatchmakingOptions : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortActivatablePanel> AthenaMatchmakingKnobsModalClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortAthenaMatchmakingTile> TileItemClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* MatchmakingTileGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAthenaPlaylistEntry RepresentedPlaylistCMSEntry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPlaylistFrontEndData RepresentedPlaylist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* StandardGameModeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* LTMGameModeBox;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* LTMGameModeBox2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_LTMGameModeBox2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* TeamFillButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* SpectateButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ServerPrivacy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* MatchmakingKnobsButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* MatchmakingWarningText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MatchmakingSmallPoolWarning;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_LimitedPoolsDescription;
    
public:
    UFortAthenaMatchmakingOptions();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateShowSupportAffiliateButton(bool bIsCreativeLTM);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateMMButtonStatusBP(bool bPlaylistIsEnabled, EFillDisableReason FillDisableReason);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadFillText(ESquadFillSetting InSquadFillSetting);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSpectatorButtonText(ESpectatorQueueType InSpectatorQueueType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetServerAccessText(EServerAccessSetting InServerAccessSetting);
    
    UFUNCTION(BlueprintCallable)
    void SetOwningMatchmakingWidget(UFortAthenaMatchmakingWidget* InOwningMatchmakingWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomMatchOptions(TMap<FString, FString> Options, const FName& PlaylistName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void RepresentedPlaylistChanged(const FPlaylistFrontEndData& NewRepresentedPlaylist);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTileDoubleClicked(UCommonButton* ButtonClicked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAffiliateUpdated(const FString& AffiliateName);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleInputTypeChanged(ECommonInputType CurrentInputType);
    
    UFUNCTION(BlueprintCallable)
    void HandleButtonGroupSelectionChanged(UCommonButton* Button, int32 Index);
    
protected:
    UFUNCTION(BlueprintCallable)
    void CloseMatchmakingOptions();
    
    UFUNCTION(BlueprintCallable)
    void CanceledPlaylist();
    
    UFUNCTION(BlueprintCallable)
    void AcceptedPlaylist();
    
};

