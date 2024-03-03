#include "ProceduralGenerationComponent.h"

UProceduralGenerationComponent::UProceduralGenerationComponent() {
    this->Generator = NULL;
    this->bShowDebugVisualization = false;
    this->GenerationVolume = NULL;
    this->GenerationContext = NULL;
}

