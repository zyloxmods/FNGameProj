#pragma once
#include "CoreMinimal.h"
#include "FortCameraModeOverride.h"
#include "FortCameraPrototype.generated.h"

USTRUCT(BlueprintType)
struct FFortCameraPrototype {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PrototypeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PrototypeDescription;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortCameraModeOverride> ModeOverrides;
    
    FORTNITEGAME_API FFortCameraPrototype();
};

