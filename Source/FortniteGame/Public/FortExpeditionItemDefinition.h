#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "FortAccountItemDefinition.h"
#include "ItemAndCount.h"
#include "FortExpeditionItemDefinition.generated.h"

class UFortCardPackItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortExpeditionItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Expedition", GetFName());
    }
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CriteriaRequirementsLootTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpeditionDuration_Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ExpeditionExpirationDuration_Minutes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseTargetPowerRating;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TierFactor;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTargetPowerClamp;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ExpeditionRules;
    
public:
    UFortExpeditionItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetRequiredTags() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetExpeditionCosts(TArray<FItemAndCount>& OutExpeditionCosts) const;
    
    UFUNCTION(BlueprintCallable)
    void GetAllRewards(TArray<UFortCardPackItemDefinition*>& OutRewards);
    
};

