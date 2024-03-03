#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraPair.h"
#include "FrontEndSettings.generated.h"

class AVolume;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFrontEndSettings : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraPair> Cameras;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AVolume*> LevelStreamingLocations;
    
    AFrontEndSettings();
};

