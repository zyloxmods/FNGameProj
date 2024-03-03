#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "StreamingTestPOIVector.generated.h"

USTRUCT(BlueprintType)
struct FStreamingTestPOIVector {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString POI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Location;
    
public:
    FORTNITEGAME_API FStreamingTestPOIVector();
};

