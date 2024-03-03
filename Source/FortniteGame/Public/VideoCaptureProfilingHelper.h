#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "VideoCaptureProfilingHelper.generated.h"

UCLASS(Blueprintable)
class UVideoCaptureProfilingHelper : public UObject {
    GENERATED_BODY()
public:
    UVideoCaptureProfilingHelper();
    UFUNCTION(BlueprintCallable)
    static void StopCapturingVideo();
    
    UFUNCTION(BlueprintCallable)
    static void StartCapturingVideo(const FString& Filename, float MaxDuration);
    
};

