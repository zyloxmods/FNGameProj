#pragma once
#include "CoreMinimal.h"
#include "FortGenericDataStoreMapWrapper.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct FFortGenericDataStoreMapWrapper {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, UObject*> NamedStoreMap;
    
    FORTNITEGAME_API FFortGenericDataStoreMapWrapper();
};

