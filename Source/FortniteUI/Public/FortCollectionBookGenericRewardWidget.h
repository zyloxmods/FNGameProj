#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortRewardInfo.h"
#include "Components/SlateWrapperTypes.h"
#include "ECollectionBookRewardStatus.h"
#include "FortCollectionBookGenericRewardWidget.generated.h"

class UFortCollectionBookRewardCardWidget;
class UFortItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCollectionBookGenericRewardWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUpdateVisibilityBasedOnRewardExistence: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility VisibilityWhenNoRewardSpecified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESlateVisibility VisibilityWhenRewardSpecified;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortCollectionBookRewardCardWidget* RewardCardWidget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ECollectionBookRewardStatus RewardStatus;
    
public:
    UFortCollectionBookGenericRewardWidget();
    UFUNCTION(BlueprintCallable)
    void SetRewardStatus(ECollectionBookRewardStatus Status);
    
    UFUNCTION(BlueprintCallable)
    void SetRewards(const FFortRewardInfo& Rewards);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetCurrentItemToDisplay(UFortItem* ItemToDisplay);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnRewardStatusChanged(ECollectionBookRewardStatus NewStatus);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool HasRewards() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ECollectionBookRewardStatus GetRewardStatus() const;
    
    UFUNCTION(BlueprintCallable)
    void ClearRewards();
    
};

