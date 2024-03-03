#pragma once
#include "CoreMinimal.h"
#include "UraniumSingleRoundInfo.h"
#include "UraniumRoundData.generated.h"

USTRUCT(BlueprintType)
struct FUraniumRoundData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int8 CurrentRoundNumber;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int8 CurrentRoundCheckPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUraniumSingleRoundInfo> SingleRoundInfos;
    
    FORTNITEGAME_API FUraniumRoundData();
};

