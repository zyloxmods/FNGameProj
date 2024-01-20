#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortItemInstanceQuantityPair.h"
#include "OnAllExpeditionsCollectedDelegate.h"
#include "FortExpeditionRewardsWidget.generated.h"

class UCommonTileView;
class UFortExpeditionItem;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortExpeditionRewardsWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnAllExpeditionsCollected OnAllExpeditionsCollected;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTileView* RewardsTileView;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bPendingCollection;
    
public:
    UFortExpeditionRewardsWidget();
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void RefreshRewardsUI(const UFortExpeditionItem* Expedition, bool bExpeditionSucceeded, const TArray<FFortItemInstanceQuantityPair>& Rewards);
    
    UFUNCTION(BlueprintCallable)
    void ProcessNextReward();
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCollectionExpeditionCompleted(bool bMcpSuccess, const UFortExpeditionItem* Expedition, bool bExpeditionSuccess, const TArray<FFortItemInstanceQuantityPair>& Rewards);
    
};

