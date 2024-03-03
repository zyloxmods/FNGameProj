#include "ProceduralGenerationVolume.h"
#include "ProceduralGenerationComponent.h"

void AProceduralGenerationVolume::Generate() {
}

void AProceduralGenerationVolume::ClearGeneratedContent() {
}

AProceduralGenerationVolume::AProceduralGenerationVolume() {
    this->ProceduralComponent = CreateDefaultSubobject<UProceduralGenerationComponent>(TEXT("ProceduralGenerationComponent"));
}

