#pragma once
#include "CoreMinimal.h"
#include "SmartObjectID.generated.h"

USTRUCT(BlueprintType)
struct SMARTOBJECTSMODULE_API FSmartObjectID {
    GENERATED_BODY()
public:
    FSmartObjectID();
};
FORCEINLINE uint32 GetTypeHash(const FSmartObjectID) { return 0; }

