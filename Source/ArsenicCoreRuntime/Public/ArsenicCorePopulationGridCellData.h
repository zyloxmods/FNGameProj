#pragma once
#include "CoreMinimal.h"
#include "ArsenicCorePopulationGridCellData.generated.h"

USTRUCT(BlueprintType)
struct FArsenicCorePopulationGridCellData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumGhostPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumGhostBots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumHumanPlayers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 NumHumanBots;
    
    ARSENICCORERUNTIME_API FArsenicCorePopulationGridCellData();
};

