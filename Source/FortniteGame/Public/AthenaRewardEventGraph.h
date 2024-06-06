#pragma once
#include "CoreMinimal.h"
#include "FortPersistableItemDefinition.h"
#include "RewardKeyData.h"
#include "RewardNode.h"
#include "AthenaRewardEventGraph.generated.h"

class UAthenaRewardEventGraphCosmeticItemDefinition;
class UFortAthenaRewardEventGraphPurchaseToken;
class UFortItemDefinition;

UCLASS(Blueprintable, MinimalAPI)
class UAthenaRewardEventGraph : public UFortPersistableItemDefinition {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("AthenaRewardGraph", GetFName());
    }
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEventName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEventType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAthenaRewardEventGraphPurchaseToken> PurchaseToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardKeyData> RewardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRewardKeysInternally;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FRewardNode> Rewards;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortItemDefinition>> ItemsToCleanUpUponRemoval;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaRewardEventGraphCosmeticItemDefinition* CosmeticRandomnes;
    
public:
    UAthenaRewardEventGraph(const FObjectInitializer& ObjectInitializer);
};

