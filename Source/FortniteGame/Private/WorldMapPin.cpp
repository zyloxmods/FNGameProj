#include "WorldMapPin.h"
#include "Components/SceneComponent.h"

void AWorldMapPin::SetTheaterId(const FString& NewID) {
}


AWorldMapPin::AWorldMapPin() {
    SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

