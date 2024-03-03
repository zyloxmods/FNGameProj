#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortBattlePassReward.generated.h"

class UCommonTextBlock;
class UFortItemDefinition;
class UFortLazyImage;
class UImage;
class UOverlay;
class UTexture2D;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortBattlePassReward : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ImageParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLazyImage* Image_RewardIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_RewardLockedTint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_ChaseRewardSpacer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_SelectionBorder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_EarnedRewardState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_RewardTrackType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_TrackNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_NewTechInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_FreeLevelNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PaidLevelNumber;
    
public:
    UFortBattlePassReward();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateVisualsToCompletedState();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetLargeRewardVisuals();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ResetToDefault();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnOverrideIcon(const TSoftObjectPtr<UTexture2D>& IconOverride);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InitForReward(const UFortItemDefinition* RewardItem);
    
};

