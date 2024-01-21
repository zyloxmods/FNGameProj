#include "WorldMapPin.h"
#include "Components/SceneComponent.h"

void AWorldMapPin::SetTheaterId(const FString& NewID) {
}


AWorldMapPin::AWorldMapPin() {
    this->SceneComponent = CreateDefaultSubobject<USceneComponent>(TEXT("SceneComponent"));
}

