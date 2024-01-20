#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateBrush.h"
#include "AbilityKitItem.h"
#include "FortAbilitySet.h"
#include "FortTooltipInterface.h"
#include "Templates/SubclassOf.h"
#include "FortAbilityKit.generated.h"

class UFortGadgetItemDefinition;
class UFortSchematicItemDefinition;
class UFortTooltip;
class UFortTooltipDisplayStatsList;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UFortAbilityKit : public UFortAbilitySet, public IFortTooltipInterface {
    GENERATED_BODY()
public:
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisplayName;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FText> Description;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText TooltipDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush IconBrush;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateBrush PrimaryTraitIconBrushOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortGadgetItemDefinition>> Gadgets;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAbilityKitItem> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSchematicItemDefinition*> AddedSchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSchematicItemDefinition*> RemovedSchematics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTooltip> Tooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTooltip> SummaryTooltip;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortTooltipDisplayStatsList* StatList;
    
    UFortAbilityKit();
    UFUNCTION(BlueprintCallable, BlueprintPure, meta=(WorldContext="WorldContextObject"))
    TArray<FText> GetDescription(const UObject* WorldContextObject, bool bFindSummaryTooltip) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void BP_GetGadgets(TArray<UFortGadgetItemDefinition*>& GadgetItemDefinitions);
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UFortTooltip> GetTooltip(bool bSummaryTooltip) const override PURE_VIRTUAL(GetTooltip, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UFortTooltipDisplayStatsList* GetDisplayStats() const override PURE_VIRTUAL(GetDisplayStats, return NULL;);
    
};

