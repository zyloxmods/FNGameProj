#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "UObject/NoExportTypes.h"
#include "EFortAbilityTargetingSource.h"
#include "FortTargetSelectionInterface.generated.h"

class UFortGameplayAbility;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class UFortTargetSelectionInterface : public UInterface {
    GENERATED_BODY()
};

class IFortTargetSelectionInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FTransform GetTargetingTransform(EFortAbilityTargetingSource Source, UFortGameplayAbility* SourceAbility) const PURE_VIRTUAL(GetTargetingTransform, return FTransform{};);
    
};

