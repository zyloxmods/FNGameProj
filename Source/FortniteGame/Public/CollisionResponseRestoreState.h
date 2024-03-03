#pragma once
#include "CoreMinimal.h"
#include "CollisionResponseRestoreState.generated.h"

USTRUCT(BlueprintType)
struct FCollisionResponseRestoreState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 OverlapResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 BlockingResponse;
    
    FORTNITEGAME_API FCollisionResponseRestoreState();
};

