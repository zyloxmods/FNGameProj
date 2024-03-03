#include "ProceduralGenerationContext.h"

AVolume* UProceduralGenerationContext::GetGenerationVolume() const {
    return NULL;
}

UProceduralGenerationComponent* UProceduralGenerationContext::GetGenerationComponent() const {
    return NULL;
}

UProceduralGenerationContext::UProceduralGenerationContext() {
    this->GeneratorContext = NULL;
}

