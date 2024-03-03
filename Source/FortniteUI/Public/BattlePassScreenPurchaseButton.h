#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "EBattlePassPurchaseButtonLayout.h"
#include "BattlePassScreenPurchaseButton.generated.h"

class UCommonTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UBattlePassScreenPurchaseButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FinalCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PurchaseTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PurchaseSubtitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_OriginalCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DiscountedPercentage;
    
public:
    UBattlePassScreenPurchaseButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetData(EBattlePassPurchaseButtonLayout LayoutType);
    
};

