#pragma once
#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "Templates/SubclassOf.h"
#include "FortTooltipInterface.generated.h"

class UFortTooltip;
class UFortTooltipDisplayStatsList;

UINTERFACE(BlueprintType, MinimalAPI, meta=(CannotImplementInterfaceInBlueprint))
class UFortTooltipInterface : public UInterface {
    GENERATED_BODY()
};

class IFortTooltipInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual TSubclassOf<UFortTooltip> GetTooltip(bool bSummaryTooltip) const PURE_VIRTUAL(GetTooltip, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    virtual UFortTooltipDisplayStatsList* GetDisplayStats() const PURE_VIRTUAL(GetDisplayStats, return NULL;);
    
};

