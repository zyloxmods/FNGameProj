#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "BattlePassScreenPreviewRewardWidget.generated.h"

class UCommonTextBlock;
class UFortLazyImage;

UCLASS(Blueprintable, EditInlineNew)
class UBattlePassScreenPreviewRewardWidget : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RewardName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_Reward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_RewardLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Currency;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_AdditionalCurrency;
    
public:
    UBattlePassScreenPreviewRewardWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDataForCurrency(float LayoutPosition);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetDataForCharacter(bool bIsReadyToUnlock, float LayoutPosition);
    
};

