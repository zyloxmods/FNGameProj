#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "PurchasedItemInfo.h"
#include "AthenaMtxOfferButtonBase.generated.h"

class UCommonLoadGuard;
class UCommonTextBlock;
class UCommonVisibilitySwitcher;
class UFortStoreFrontOfferInfo;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMtxOfferButtonBase : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortStoreFrontOfferInfo* OfferData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_MtxAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RealMoneyPrice;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* OptionalSwitcher_CurrencyIcons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* OptionalIMG_StarterKit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonLoadGuard* LoadGuardCurrencySpinner;
    
public:
    UAthenaMtxOfferButtonBase();
private:
    UFUNCTION(BlueprintCallable)
    void HandleMtxPurchaseComplete(bool bSuccess, const TArray<FPurchasedItemInfo>& PurchasedItems);
    
};

