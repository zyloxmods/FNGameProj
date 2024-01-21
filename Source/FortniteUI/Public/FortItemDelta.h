#pragma once
#include "CoreMinimal.h"
#include "FortItemDelta.generated.h"

class UFortItemDefinition;

USTRUCT(BlueprintType)
struct FFortItemDelta {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortItemDefinition* ItemDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DeltaAmount;
    
    FORTNITEUI_API FFortItemDelta();
};

