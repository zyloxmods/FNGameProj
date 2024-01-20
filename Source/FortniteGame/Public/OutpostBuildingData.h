#pragma once
#include "CoreMinimal.h"
#include "OutpostBuildingData.generated.h"

class UFortOutpostItemDefinition;

USTRUCT(BlueprintType)
struct FOutpostBuildingData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortOutpostItemDefinition> ItemDefinition;
    
    FORTNITEGAME_API FOutpostBuildingData();
};

