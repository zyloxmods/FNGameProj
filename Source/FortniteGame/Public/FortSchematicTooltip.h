#pragma once
#include "CoreMinimal.h"
#include "FortAccountItemTooltip.h"
#include "FortSchematicTooltip.generated.h"

class UFortWorldItem;

UCLASS(Blueprintable)
class UFortSchematicTooltip : public UFortAccountItemTooltip {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortWorldItem* Item;
    
public:
    UFortSchematicTooltip();
};

