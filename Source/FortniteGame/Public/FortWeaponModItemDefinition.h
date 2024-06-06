#pragma once
#include "CoreMinimal.h"
#include "FortConditionalIncludeTags.h"
#include "FortItemDefinitionItemModifierInterface.h"
#include "FortWorldItemDefinition.h"
#include "FortWeaponModItemDefinition.generated.h"

class UFortAbilitySet;

UCLASS(Blueprintable, MinimalAPI)
class UFortWeaponModItemDefinition : public UFortWorldItemDefinition, public IFortItemDefinitionItemModifierInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortConditionalIncludeTags> AdditionalGameplayTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilitySet> AbilitySet;
    
public:
    UFortWeaponModItemDefinition(const FObjectInitializer& ObjectInitializer);
    
    // Fix for true pure virtual functions not being implemented
};

