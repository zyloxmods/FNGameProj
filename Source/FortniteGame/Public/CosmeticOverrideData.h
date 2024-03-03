#pragma once
#include "CoreMinimal.h"
#include "EAthenaCustomizationCategory.h"
#include "CosmeticOverrideData.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FCosmeticOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAthenaCustomizationCategory SlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* CosmeticItem;
    
    FORTNITEGAME_API FCosmeticOverrideData();
};

