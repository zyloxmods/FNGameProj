#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "WaterMeshActor.generated.h"

class UTexture2D;
class UWaterMeshComponent;

UCLASS(Blueprintable)
class WATER_API AWaterMeshActor : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* WaterVelocityTexture;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWaterMeshComponent* WaterMesh;
    
public:
    AWaterMeshActor();
};

