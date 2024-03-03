#pragma once
#include "CoreMinimal.h"
#include "BlueprintContextBase.h"
#include "FortMultiSizeBrush.h"
#include "FortTagUIData.h"
#include "AttributeSet.h"
#include "GameplayTagContainer.h"
#include "FortDisplayAttribute.h"
#include "FortTooltipUIContext.generated.h"

class UFortTooltipContext;
class UFortTooltipLoadingWrapper;
class UObject;

UCLASS(Blueprintable, NonTransient)
class FORTNITEUI_API UFortTooltipUIContext : public UBlueprintContextBase {
    GENERATED_BODY()
public:
    UFortTooltipUIContext();
    UFUNCTION(BlueprintCallable)
    bool HasTooltipStats(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FFortDisplayAttribute> GetUpgradeStats(const UObject* Object, UFortTooltipContext* TooltipContext, const int32 UpgradeLevelDelta, bool bUseSummaryTooltip) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetUIDataForTag(const FGameplayTag& Tag, FFortTagUIData& OutData) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FFortDisplayAttribute> GetTooltipStats(const UObject* Object, const UFortTooltipContext* TooltipContext, bool bSummaryStats) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetTooltipStat(const UObject* Object, UFortTooltipContext* TooltipContext, const FGameplayTag Token, FFortDisplayAttribute& OutDisplayAttribute, bool bUseSummaryTooltip) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UFortTooltipLoadingWrapper* GetTooltipLoadingWrapper(const UObject* Object, bool bSummaryDescription) const;
    
    UFUNCTION(BlueprintCallable)
    TArray<FGameplayAttribute> GetTooltipAttributes(const UObject* Object);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetDisplayNameAndMultiBrushForTag(const FGameplayTag& Tag, FText& OutDisplayName, FFortMultiSizeBrush& OutBrush) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetDescription(const UObject* Object, const UFortTooltipContext* TooltipContext, TArray<FText>& OutDescription, bool bSummaryDescription) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FFortDisplayAttribute> GetComparisonStats(const UObject* Object, const UObject* ComparisonObject, const UFortTooltipContext* TooltipContext, bool bUseSummaryTooltip) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    bool GetCombinedDescription(const UObject* Object, const UFortTooltipContext* TooltipContext, FText& OutDescription, bool bSummaryDescription) const;
    
};

