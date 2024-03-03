#pragma once
#include "CoreMinimal.h"
#include "EFrontEndCamera.h"
#include "DynamicStreamingLevelData.generated.h"

USTRUCT(BlueprintType)
struct FDynamicStreamingLevelData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName LevelPackageName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFrontEndCamera CameraOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName CameraName;
    
    FORTNITEGAME_API FDynamicStreamingLevelData();
};

