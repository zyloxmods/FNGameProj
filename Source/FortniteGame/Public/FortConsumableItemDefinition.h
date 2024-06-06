#pragma once
#include "CoreMinimal.h"
#include "Abilities/GameplayAbilityTypes.h"
#include "ConsumeEffectData.h"
#include "FortWorldItemDefinition.h"
#include "FortConsumableItemDefinition.generated.h"

class UAnimMontage;

UCLASS(Blueprintable)
class UFortConsumableItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Food", GetFName());
    }
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FConsumeEffectData> ConsumeEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAnimMontage> UseAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float UseTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRequiresMissingHealth;
    
public:
    UFortConsumableItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UAnimMontage* GetUseAnimation() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetHealthRestored(int32 ItemLevel) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetAnimPlayRate() const;
    
    UFUNCTION(BlueprintCallable)
    void ConsumeItem(const FGameplayEventData& EventData);
    
};

