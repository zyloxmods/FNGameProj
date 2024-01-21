#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "OutpostDisintegrationData.generated.h"

class UFortWorldItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FOutpostDisintegrationData : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortWorldItemDefinition> ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisintegrationValue;
    
    FOutpostDisintegrationData();
};

