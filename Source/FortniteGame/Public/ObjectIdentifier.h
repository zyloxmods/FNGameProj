#pragma once
#include "CoreMinimal.h"
#include "ObjectIdentifier.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FObjectIdentifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    TMap<uint32, uint32> ContainedIdentifierHashes;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 CachedHash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> SoftClassPtr;
    
public:
    FObjectIdentifier();
};
FORCEINLINE uint32 GetTypeHash(const FObjectIdentifier) { return 0; }

