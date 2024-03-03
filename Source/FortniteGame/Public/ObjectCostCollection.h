#pragma once
#include "CoreMinimal.h"
#include "ObjectCostData.h"
#include "ObjectIdentifier.h"
#include "ObjectCostCollection.generated.h"

USTRUCT(BlueprintType)
struct FObjectCostCollection {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<uint32, FObjectIdentifier> HashToIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FObjectIdentifier, FObjectCostData> ObjectIdentifiersToCostData;
    
    FORTNITEGAME_API FObjectCostCollection();
};

