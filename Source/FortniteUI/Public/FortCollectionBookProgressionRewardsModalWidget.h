#pragma once
#include "CoreMinimal.h"
#include "Layout/Margin.h"
#include "FortActivatablePanel.h"
#include "FortCollectionBookProgressionRewardsModalWidget.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UCommonNumericTextBlock;
class UCommonTextBlock;
class UFortCollectionBookProgressionRewardDetailInspectWidget;
class UFortItem;
class UVerticalBox;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookProgressionRewardsModalWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortCollectionBookProgressionRewardDetailInspectWidget> RewardWidgetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin RewardWidgetPadding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumRewardsToShow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* RewardBoxWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UVerticalBox* MajorRewardBoxWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* XPTextWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* LevelTextWidget;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* ButtonGroup;
    
public:
    UFortCollectionBookProgressionRewardsModalWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnSelectedButtonChanged(UCommonButton* SelectedButton, int32 ButtonIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnLevelProgressionSet(int32 CurrentLevel, float NextLvlPct, int32 MaxAchievedLevel);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void InspectItemBP(UFortItem* Item);
    
};

