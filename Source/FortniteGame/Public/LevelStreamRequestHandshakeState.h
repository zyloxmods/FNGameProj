#pragma once
#include "CoreMinimal.h"
#include "LevelStreamRequestHandshakeState.generated.h"

USTRUCT(BlueprintType)
struct FLevelStreamRequestHandshakeState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLevelStreamingCompleted;
    
    FORTNITEGAME_API FLevelStreamRequestHandshakeState();
};

