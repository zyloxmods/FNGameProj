#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "PurchasedItemInfo.h"
#include "GameplayTagContainer.h"
#include "FortHUDShutdownTimerInterface.h"
#include "Templates/SubclassOf.h"
#include "BattlePassPurchaseScreen.generated.h"

class UAthenaSeasonItemDefinition;
class UBattlePassScreenPurchaseButton;
class UCommonButton;
class UEnableMultiFactorModal;
class UFortGiftingScreen;
class UFortStoreFrontOfferDetailsWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassPurchaseScreen : public UCommonActivatableWidget, public IFortHUDShutdownTimerInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FGameplayTag SpatialCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FString SourceContextNameFallback;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag BattlePassSpatialRoomCamera;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UAthenaSeasonItemDefinition* SeasonData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 CurrentSeasonLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bDoesOwnBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortStoreFrontOfferDetailsWidgetBase> BattlePassOfferDetailsClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortGiftingScreen> GiftingScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnableMultiFactorModal> MFAModalClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonActivatableWidget> PurchaseCompleteModal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* GiftBattlePassButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* MoreInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* BackButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_PurchaseConfirmation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_DeclinePurchase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_CloseMobile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPurchaseButton* Button_PurchaseBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPurchaseButton* Button_PurchaseBattlePassBundle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPurchaseButton* SelectedButton;
    
public:
    UBattlePassPurchaseScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void RemoveSelfFromWidgetStack(bool Succeed);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPurchaseClicked(bool bPlayForward, bool bBuyBattleBundle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaveScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalPurchaseConfirmed();
    
    UFUNCTION(BlueprintCallable)
    void HandleBattlePassPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems, const FString& OfferId);
    
    
    // Fix for true pure virtual functions not being implemented
};

