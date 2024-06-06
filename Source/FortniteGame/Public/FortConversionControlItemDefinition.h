#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "GameplayTagContainer.h"
#include "EFortRarity.h"
#include "FortAccountItemDefinition.h"
#include "FortConversionControlItemDefinition.generated.h"

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversionControlItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString LootTierGroup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle ConversionPointsToTierCosts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bConsumedOnConversion;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardName;
    
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("ConversionControl", GetFName());
    }
    UFortConversionControlItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetTierFromSacrificePoints(int32 SacrificePoints, EFortRarity& CalculatedTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FText GetRewardName() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetRequiredItemQuantity(int32 SacrificePoints) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UFortAccountItemDefinition* GetRequiredItemDefinition() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FGameplayTagContainer GetRequiredCatalysts() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetPointsForTier(EFortRarity InTier) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetMaxConversionTier() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EFortRarity GetFirstConversionTier() const;
    
};

