#pragma once
#include "CoreMinimal.h"
#include "FortStoreFrontOfferDetailsWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "FortDirectAcquisitionOfferDetailsWidget.generated.h"

class UCommonButton;
class UFortCommunityVotingAvailableVotesWidget;
class UFortCommunityVotingFeedback;
class UFortCommunityVotingThanksPopup;
class UFortCommunityVotingVoteCounter;
class UFortItemBaseWidget;
class UFortOfferInspectionNavigator;
class UFortStoreSkinDetailsPopup;
class UOverlay;
class UWidget;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDirectAcquisitionOfferDetailsWidget : public UFortStoreFrontOfferDetailsWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortCommunityVotingFeedback> VoteFeedbackClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortItemBaseWidget* Item_InfoHeader;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CastVote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingVoteCounter* FlameCounter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingAvailableVotesWidget* AvailableSparksWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* ComVoteFeedbackContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_MtxAndVote;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCommunityVotingThanksPopup* Com_ThanksForVotingMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortOfferInspectionNavigator* OfferNavigator_ArrowNavigation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortStoreSkinDetailsPopup* StorePopup_Details;
    
public:
    UFortDirectAcquisitionOfferDetailsWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateVoteCounter();
    
    UFUNCTION(BlueprintCallable)
    void UpdateSwipeButtonsVisibility();
    
    UFUNCTION(BlueprintCallable)
    void TriggerPurchaseChoiceRequest();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMultiplePriceRealMoneyOffer() const;
    
    UFUNCTION(BlueprintCallable)
    void HandleGetVBucksClicked();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetSalePriceFromLastAppStore(const int32 PriceIndex, FText& SalePrice, const int32 ItemQuantity) const;
    
    UFUNCTION(BlueprintCallable)
    void FocusOnWidget(UWidget* WidgetToFocus);
    
    UFUNCTION(BlueprintCallable)
    void Dismiss();
    
};

