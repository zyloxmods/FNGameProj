#pragma once
#include "CoreMinimal.h"
#include "EFortAlteration.h"
#include "FortAccountItemDefinition.h"
#include "FortConditionalCosmeticModification.h"
#include "FortConditionalIncludeTags.h"
#include "FortCosmeticModification.h"
#include "FortItemDefinitionItemModifierInterface.h"
#include "FortItemQuantityPair.h"
#include "FortAlterationItemDefinition.generated.h"

class UFortAbilitySet;

UCLASS(Blueprintable, MinimalAPI)
class UFortAlterationItemDefinition : public UFortAccountItemDefinition, public IFortItemDefinitionItemModifierInterface {
    GENERATED_BODY()
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("Alteration", GetFName());
    }
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortAlteration::Type> AlterationType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortCosmeticModification DefaultCosmetic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortConditionalCosmeticModification> ConditionalCosmetics;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortConditionalIncludeTags> AdditionalGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilitySet> AlterationAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemQuantityPair> AdditionalRespecCosts;
    
public:
    UFortAlterationItemDefinition(const FObjectInitializer& ObjectInitializer);
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EFortAlteration::Type> GetAlterationType() const;
};

