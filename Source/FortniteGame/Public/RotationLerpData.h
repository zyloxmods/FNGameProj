#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "RotationLerpData.generated.h"

USTRUCT(BlueprintType)
struct FRotationLerpData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FQuat RotationLerp_Start;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FQuat RotationLerp_End;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FQuat RotationLerp_Target;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TotalLerpTime;
    
    FORTNITEGAME_API FRotationLerpData();
};

