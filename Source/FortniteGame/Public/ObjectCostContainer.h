#pragma once
#include "CoreMinimal.h"
#include "ObjectCostCollection.h"
#include "ObjectCostVersion.h"
#include "ObjectCostContainer.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FObjectCostContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FObjectCostVersion, FObjectCostCollection> VersionedObjectCostCollections;
    
public:
    FObjectCostContainer();
};

