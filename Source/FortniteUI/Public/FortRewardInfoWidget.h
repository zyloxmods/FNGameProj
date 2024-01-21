#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemQuantityPair.h"
#include "FortRewardInfo.h"
#include "Types/SlateEnums.h"
#include "Types/SlateEnums.h"
#include "Layout/Margin.h"
#include "Templates/SubclassOf.h"
#include "FortRewardInfoWidget.generated.h"

class UCommonButtonGroup;
class UFortRewardInfoButton;
class UPanelWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRewardInfoWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* RewardListWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin RewardWidgetPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EHorizontalAlignment> HorizontalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EVerticalAlignment> VerticalAlignment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowItemInteraction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumRewardsShown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortRewardInfoButton> OrWidgetType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortRewardInfoButton> RewardInfoButtonType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup;
    
public:
    UFortRewardInfoWidget();
    UFUNCTION(BlueprintCallable)
    void SetRewards(const FFortRewardInfo& RewardsIn);
    
    UFUNCTION(BlueprintCallable)
    void SetReward(const FFortItemQuantityPair& RewardIn);
    
    UFUNCTION(BlueprintCallable)
    void SetButtonGroup(UCommonButtonGroup* InButtonGroup);
    
    UFUNCTION(BlueprintCallable)
    bool ContainsReward(const FString& TemplateIdToCheck);
    
};

