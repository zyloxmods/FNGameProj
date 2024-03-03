#pragma once
#include "CoreMinimal.h"
#include "StreamingTestPOIVector.h"
#include "StreamingTestSkydivePath.generated.h"

USTRUCT(BlueprintType)
struct FStreamingTestSkydivePath {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamingTestPOIVector DropLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamingTestPOIVector GlideLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStreamingTestPOIVector LandingLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TargetPOI;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString CalendarEvent;
    
    FORTNITEGAME_API FStreamingTestSkydivePath();
};

