#pragma once
#include "CoreMinimal.h"
#include "FortWeightedObject.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFortWeightedObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* Object;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Weight;
    
    FORTNITEUI_API FFortWeightedObject();
};

