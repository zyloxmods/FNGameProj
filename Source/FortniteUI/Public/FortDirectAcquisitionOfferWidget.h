#pragma once
#include "CoreMinimal.h"
#include "FortStoreFrontOfferWidgetBase.h"
#include "Templates/SubclassOf.h"
#include "FortDirectAcquisitionOfferWidget.generated.h"

class UBattlePassPurchaseScreen;
class UFortDirectAcquisitionOfferDetailsWidget;
class UFortRealMoneyOfferDetails;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortDirectAcquisitionOfferWidget : public UFortStoreFrontOfferWidgetBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsBattlePass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortDirectAcquisitionOfferDetailsWidget> ItemShopDetailsScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBattlePassPurchaseScreen> BattlePassPurchaseScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortRealMoneyOfferDetails> NoPreviewItemShopDetailsScreenClass;
    
public:
    UFortDirectAcquisitionOfferWidget();
private:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetCurrencySeasonReward() const;
    
};

