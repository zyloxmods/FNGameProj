#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "LocationLerpData.generated.h"

USTRUCT(BlueprintType)
struct FLocationLerpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FVector PositionLerp_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FVector PositionLerp_End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector PositionLerp_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalLerpTime;
    
    FORTNITEGAME_API FLocationLerpData();
};

