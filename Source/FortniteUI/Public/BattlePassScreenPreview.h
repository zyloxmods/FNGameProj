#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "PreviewUnlockData.h"
#include "BattlePassScreenPreview.generated.h"

class UBattlePassPreviewDisplayData;
class UBattlePassScreenPreviewRewardWidget;
class UBattlePassScreenPurchaseButton;
class UBattlePassVBuckSummary;
class UCommonTextBlock;
class UFortItem;

UCLASS(Blueprintable, EditInlineNew)
class UBattlePassScreenPreview : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPreviewRewardWidget* Character_Widget1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPreviewRewardWidget* Character_Widget2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPreviewRewardWidget* Character_Widget3;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPreviewRewardWidget* Character_Widget4;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPreviewRewardWidget* Character_Widget5;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPreviewRewardWidget* Character_Widget6;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPreviewRewardWidget* Character_Widget7;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPreviewRewardWidget* Currency_Widget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPurchaseButton* Button_PurchaseBattlePass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassScreenPurchaseButton* Button_PurchaseBattlePassBundle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_InstantUnlockTotalRewardCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_InstantUnlockSpecificSummary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_InstantAdditionalRewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBattlePassVBuckSummary* Widget_VBuckSummary;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBattlePassScreenPreviewRewardWidget*> CharacterWidgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FPreviewUnlockData PreviewUnlockData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBattlePassPreviewDisplayData* PreviewDisplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PreviewCycleRate;
    
public:
    UBattlePassScreenPreview();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInitData(const FPreviewUnlockData& Data, const UFortItem* SinglePreviewCycleReward, bool bReadyToUnlock, int32 LevelUnlocked, bool bPurchasedAnnualPass);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCyclePreviewReward(const UFortItem* NextReward, bool bReadyToUnlock, int32 LevelUnlocked);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleOnGainedFocus();
    
};

