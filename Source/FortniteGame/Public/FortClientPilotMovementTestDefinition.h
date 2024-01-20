#pragma once
#include "CoreMinimal.h"
#include "FortClientPilotMovementTestDefinition.generated.h"

USTRUCT(BlueprintType)
struct FFortClientPilotMovementTestDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ForwardMoveStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SideMoveStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Duration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TestName;
    
    FORTNITEGAME_API FFortClientPilotMovementTestDefinition();
};

