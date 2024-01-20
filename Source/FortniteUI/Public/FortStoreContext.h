#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "EFortRarity.h"
#include "Card.h"
#include "CardPackOffer.h"
#include "ECardPackPurchaseError.h"
#include "EFortStoreState.h"
#include "OpenedCardPack.h"
#include "StoreCardPackOffersChangedDelegate.h"
#include "StorePurchaseCompletedDelegate.h"
#include "StoreStateChangedDelegateDelegate.h"
#include "FortStoreContext.generated.h"

class UFortAccountItem;
class UFortAccountItemDefinition;
class UFortCardPackItem;
class UFortCardPackItemDefinition;
class UFortItemDefinition;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortStoreContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreCardPackOffersChanged OnCardPackOffersChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStorePurchaseCompleted OnStorePurchaseCompleted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStoreStateChangedDelegate OnStoreStateChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCardPackOffer> Offers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime NextStoreRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCard> CardList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CardIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOpenedCardPack OpenedCardPack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortRarity LastCardRarity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCard> PurchasedItemList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortCardPackItem*> PurchasedCardPacks;
    
    UFortStoreContext();
    UFUNCTION(BlueprintCallable)
    void UserViewedAthenaItemShop();
    
    UFUNCTION(BlueprintCallable)
    bool StoreHasStarsForSale();
    
    UFUNCTION(BlueprintCallable)
    bool ShouldShowNewMtxStoreUi();
    
    UFUNCTION(BlueprintCallable)
    void RealMoneyPurchaseStart();
    
    UFUNCTION(BlueprintCallable)
    void RealMoneyPurchaseFinished();
    
    UFUNCTION(BlueprintCallable)
    bool PurchaseOpeningComplete();
    
    UFUNCTION(BlueprintCallable)
    bool OpenWebPayment(const FString& AttemptedMTXOfferId);
    
    UFUNCTION(BlueprintCallable)
    ECardPackPurchaseError MakePurchase(const FCardPackOffer& Offer, UFortCardPackItemDefinition* CardPackDefinition, int32 Quantity);
    
    UFUNCTION(BlueprintCallable)
    bool MakeChoice(int32 ChoiceIdx);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsWaitingForMcp() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpeningOnePack() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOpeningDirectPack() const;
    
    UFUNCTION(BlueprintCallable)
    FTimespan GetTimeUntilMarketplaceRefresh();
    
    UFUNCTION(BlueprintCallable)
    FTimespan GetTimeUntilDailyLimitReset();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortStoreState GetStoreState() const;
    
    UFUNCTION(BlueprintCallable)
    FLinearColor GetRarityColor(EFortRarity Rarity);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortStoreState GetPreviousState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetOwnedItemCount(const UFortItemDefinition* ItemDefinition) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumUnopenedCardPacksRemaining(const UFortCardPackItemDefinition* PackType, bool bCountChoicePacks) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<FCard> GetChoiceCards(int32 CardIdx) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCard(int32 CardIdx, FCard& ResultOut) const;
    
    UFUNCTION(BlueprintCallable)
    void GetAccountItems(const TArray<UFortAccountItemDefinition*>& AccountItemDefinitions, TArray<UFortAccountItem*>& AccountItems);
    
    UFUNCTION(BlueprintCallable)
    void FreshenCache();
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void FireInteractionAnalyticsEvent(const FString& Interaction, const FString& Details) const;
    
    UFUNCTION(BlueprintCallable)
    bool ExitWebPayment();
    
    UFUNCTION(BlueprintCallable)
    bool ExitSummary();
    
    UFUNCTION(BlueprintCallable)
    void ExitRealMoneyStore();
    
    UFUNCTION(BlueprintCallable)
    bool ExitCurrencyStore();
    
    UFUNCTION(BlueprintCallable)
    bool ExitCardPackStore();
    
    UFUNCTION(BlueprintCallable)
    bool ErrorOccurred(const FString& ErrorAnalytics);
    
    UFUNCTION(BlueprintCallable)
    void EnterRealMoneyStore();
    
    UFUNCTION(BlueprintCallable)
    bool EnterCurrencyStore(const FString& AttemptedPurchaseCardPackId);
    
    UFUNCTION(BlueprintCallable)
    bool EnterCardPackStore();
    
    UFUNCTION(BlueprintCallable)
    void DismissError();
    
    UFUNCTION(BlueprintCallable)
    bool ChoiceResultComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardPackOpeningComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardPackDestroyComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardFrontRevealComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardFlipComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardExitComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardEntryComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardBackRevealComplete();
    
    UFUNCTION(BlueprintCallable)
    bool CardAddedToSummaryComplete();
    
    UFUNCTION(BlueprintCallable)
    void AttemptOpenSinglePack();
    
    UFUNCTION(BlueprintCallable)
    void AttemptOpenPackByIndex(int32 CardPackIndex);
    
    UFUNCTION(BlueprintCallable)
    void AttemptOpenAllPacks();
    
};

