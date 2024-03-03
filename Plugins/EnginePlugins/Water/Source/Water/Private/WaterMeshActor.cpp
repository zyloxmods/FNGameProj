#include "WaterMeshActor.h"
#include "WaterMeshComponent.h"

AWaterMeshActor::AWaterMeshActor() {
    this->WaterVelocityTexture = NULL;
    this->WaterMesh = CreateDefaultSubobject<UWaterMeshComponent>(TEXT("WaterMesh"));
}

