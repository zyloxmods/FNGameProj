#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortReplicatedVelocityData.generated.h"

USTRUCT(BlueprintType)
struct FFortReplicatedVelocityData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 RepIncrement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ReplicatedVelocity;
    
    FORTNITEGAME_API FFortReplicatedVelocityData();
};

