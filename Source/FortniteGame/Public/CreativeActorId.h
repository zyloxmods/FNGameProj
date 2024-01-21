#pragma once
#include "CoreMinimal.h"
#include "CreativeActorId.generated.h"

USTRUCT(BlueprintType)
struct FCreativeActorId {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> ActorId;
    
public:
    FORTNITEGAME_API FCreativeActorId();
};
FORCEINLINE uint32 GetTypeHash(const FCreativeActorId) { return 0; }

