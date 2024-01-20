#pragma once
#include "CoreMinimal.h"
#include "FortWorldItemDefinition.h"
#include "FortItemCacheItemDefinition.generated.h"

class UFortCardPackItemDefinition;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortItemCacheItemDefinition : public UFortWorldItemDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortCardPackItemDefinition> CardPackReward;
    
public:
    UFortItemCacheItemDefinition();
};

