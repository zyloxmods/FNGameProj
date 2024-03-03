#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameplayTagContainer.h"
#include "QuickHealPriority.h"
#include "QuickHealItemPicker.generated.h"

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UQuickHealItemPicker : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQuickHealPriority> QuickHealPriorities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag HealingItemComparisonTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag ShieldItemComparisonTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer SpecialActionTags;
    
public:
    UQuickHealItemPicker();
private:
    UFUNCTION(BlueprintCallable)
    void HandlePlayerHealthOrShieldChanged();
    
    UFUNCTION(BlueprintCallable)
    void HandleOnSafeZoneOccupancyChanged(bool bIsInSafeZone);
    
};

