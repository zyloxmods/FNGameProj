#pragma once
#include "CoreMinimal.h"
#include "EFortAlteration.h"
#include "FortAccountItemDefinition.h"
#include "FortConditionalCosmeticModification.h"
#include "FortConditionalIncludeTags.h"
#include "FortCosmeticModification.h"
#include "FortItemQuantityPair.h"
#include "FortAlterationItemDefinition.generated.h"

class UFortAbilitySet;

UCLASS(Blueprintable, MinimalAPI)
class UFortAlterationItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
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
    UFortAlterationItemDefinition();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TEnumAsByte<EFortAlteration::Type> GetAlterationType() const;
    
};

