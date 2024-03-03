#pragma once
#include "CoreMinimal.h"
#include "ObjectCostVersion.generated.h"

USTRUCT(BlueprintType)
struct FObjectCostVersion {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MajorVersion;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    int64 Timestamp;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 MinorVersionStringHash;
    
    FORTNITEGAME_API FObjectCostVersion();
};
FORCEINLINE uint32 GetTypeHash(const FObjectCostVersion) { return 0; }

