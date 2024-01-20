#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "CameraPair.h"
#include "FrontEndSettings.generated.h"

UCLASS(Blueprintable)
class AFrontEndSettings : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCameraPair> Cameras;
    
    AFrontEndSettings();
};

