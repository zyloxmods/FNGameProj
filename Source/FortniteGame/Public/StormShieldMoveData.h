#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StormShieldMoveData.generated.h"

USTRUCT(BlueprintType)
struct FStormShieldMoveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MoveRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector TargetLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector StartingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeAreaStartLocationChangeTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SafeAreaFinishLocationChangeTime;
    
    FORTNITEGAME_API FStormShieldMoveData();
};

