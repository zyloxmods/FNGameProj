#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "InterpOffsetData.generated.h"

USTRUCT(BlueprintType)
struct FInterpOffsetData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector ViewOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector LargeBodyTypeAddtnlOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float PitchAngle;
    
    FORTNITEGAME_API FInterpOffsetData();
};

