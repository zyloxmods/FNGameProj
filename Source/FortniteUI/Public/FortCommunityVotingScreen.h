#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortCommunityVotingScreen.generated.h"

class UCommonButton;
class UCommonWidgetSwitcher;
class UDynamicEntryBox;
class UFortCommunityVotingAvailableVotesWidget;
class UFortCommunityVotingCountdown;
class UFortCommunityVotingManager;
class UFortCommunityVotingModalPopup;
class UFortCommunityVotingOption;
class UFortCommunityVotingThanksPopup;
class UFortCommunityVotingTutorialPopup;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCommunityVotingScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RevealWinnerPopupTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RevealWinnerPopupBanner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingModalPopup> CommunityVotingModalPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingTutorialPopup> CommunityVotingModalTutorialPopupClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle BackInput;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingManager* VotingManager;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingOption* HighlightedOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingCountdown* Countdown_RemainingTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_Options;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* ComBackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingAvailableVotesWidget* AvailableSparksWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_VotingTip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingThanksPopup* Com_ThanksForVotingMessage;
    
public:
    UFortCommunityVotingScreen();
private:
    UFUNCTION(BlueprintCallable)
    void HandleBackButton(bool& bPassThrough);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void FadeOutScreen();
    
private:
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    
};

