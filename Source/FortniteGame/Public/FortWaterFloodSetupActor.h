#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortWaterFloodSetupActor.generated.h"

class UTexture2D;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortWaterFloodSetupActor : public AActor {
    GENERATED_BODY()
public:
    AFortWaterFloodSetupActor();
protected:
    UFUNCTION(BlueprintCallable)
    void SetMinimapData(TSoftObjectPtr<UTexture2D> BaseTexture, TSoftObjectPtr<UTexture2D> DiscoveryMaskTexture);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetOceanFloodHeight(const int32 Step);
    
};

