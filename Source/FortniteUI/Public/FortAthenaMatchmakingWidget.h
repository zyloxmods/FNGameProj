#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EFortLobbyType.h"
#include "EFortMatchmakingViolatorStyle.h"
#include "PlaylistFrontEndData.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaMatchmakingWidget.generated.h"

class UCommonButton;
class UCommonTextBlock;
class UEnableMultiFactorModal;
class UFortEulaWidget;
class UFortMissionGenerator;
class UFortShowdownDetailView;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortAthenaMatchmakingWidget : public UCommonUserWidget {
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
    TSubclassOf<UFortEulaWidget> EulaClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortEulaWidget* EulaWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnableMultiFactorModal> MFA_ModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UEnableMultiFactorModal* MFA_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RegionLockTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortShowdownDetailView> RegionLockMessageWidgetClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Play;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Cancel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_StartMatch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_MatchmakingMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SpinnerAndTextContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_MatchmakingHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_MatchmakingMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_NewMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* TextBlock_PartySizeWarning;
    
public:
    UFortAthenaMatchmakingWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCustomViolatorText(const FText& ModeName, const FText& SubText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSquadFillText(bool InCurrentSquadFill);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlaylistChanged(const FPlaylistFrontEndData& NewPlaylist, const FText& PlaylistCMSOverrideName, EFortLobbyType LobbyType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenCreativeOptions_NativizeMe();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetPlayButtonText(const FText& PlayButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetCancelButtonText(const FText& CancelButtonText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewModeViolatorUpdated(bool bShouldShow);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMatchmakingFinishedBlueprint(bool bSuccess);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAvailablePlaylistsUpdated();
    
public:
    UFUNCTION(BlueprintCallable)
    void GetCurrentTournamentAndEvent(FString& TournamentId, FString& EventId);
    
    UFUNCTION(BlueprintCallable)
    void BlueprintInteracted();
    
};

