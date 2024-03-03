#pragma once
#include "CoreMinimal.h"
#include "FortBotInventoryInfo.generated.h"

class UFortItemDefinition;
class UFortWorldItem;

USTRUCT(BlueprintType)
struct FFortBotInventoryInfo {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortWorldItem* FortItem;
    
public:
    FORTNITEGAME_API FFortBotInventoryInfo();
};

