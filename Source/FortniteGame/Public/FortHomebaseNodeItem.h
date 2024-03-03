#pragma once
#include "CoreMinimal.h"
#include "FortAccountItem.h"
#include "FortTooltipInterface.h"
#include "Templates/SubclassOf.h"
#include "FortHomebaseNodeItem.generated.h"

class UFortTooltip;
class UFortTooltipDisplayStatsList;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortHomebaseNodeItem : public UFortAccountItem, public IFortTooltipInterface {
    GENERATED_BODY()
public:
    UFortHomebaseNodeItem();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    TSubclassOf<UFortTooltip> GetTooltip(bool bSummaryTooltip) const override PURE_VIRTUAL(GetTooltip, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    UFortTooltipDisplayStatsList* GetDisplayStats() const override PURE_VIRTUAL(GetDisplayStats, return NULL;);
    
};

