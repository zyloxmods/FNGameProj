#pragma once
#include "CoreMinimal.h"
#include "FortItem.h"
#include "FortPlaysetPropItem.generated.h"

class UFortPlaysetPropItemDefinition;

UCLASS(Blueprintable)
class UFortPlaysetPropItem : public UFortItem {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortPlaysetPropItemDefinition* ItemDefinition;
    
public:
    UFortPlaysetPropItem();
};

