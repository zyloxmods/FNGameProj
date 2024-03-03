#pragma once
#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "Engine/EngineTypes.h"
#include "WaterRuntimeSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig)
class WATER_API UWaterRuntimeSettings : public UDeveloperSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionChannel> CollisionChannelForWaterTraces;
    
    UWaterRuntimeSettings();
};

