#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortPersistableItemDefinition.h"
#include "FortHardcoreModifierItemDefinition.generated.h"

class UFortAbilitySet;
class UFortAccoladeItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHardcoreModifierItemDefinition : public UFortPersistableItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortAbilitySet> ModifierAbilitySet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer AdditionalSourceTagsToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<TSoftObjectPtr<UFortAccoladeItemDefinition>> TierAccolades;
    
public:
    virtual FPrimaryAssetId GetPrimaryAssetId() const override
    {
        return FPrimaryAssetId("HardcoreModifier", GetFName());
    }
    UFortHardcoreModifierItemDefinition(const FObjectInitializer& ObjectInitializer);
};

