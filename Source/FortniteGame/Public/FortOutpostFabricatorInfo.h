#pragma once
#include "CoreMinimal.h"
#include "FortOutpostFabricatorInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortOutpostFabricatorInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString DisintegrationStartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantumGooCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 QuantumGooStillToProcess;
    
    FORTNITEGAME_API FFortOutpostFabricatorInfo();
};

