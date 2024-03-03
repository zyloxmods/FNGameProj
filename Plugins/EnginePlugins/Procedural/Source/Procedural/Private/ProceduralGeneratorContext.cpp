#include "ProceduralGeneratorContext.h"

bool UProceduralGeneratorContext::OnGenerate_Implementation() {
    return false;
}


void UProceduralGeneratorContext::OnClearGeneratedContent_Implementation() {
}

void UProceduralGeneratorContext::GetOrCreateGeneratorContext(UProceduralGenerator* NewGenerator, UProceduralGeneratorContext*& Context) {
}

TArray<UProceduralGeneratorContext*> UProceduralGeneratorContext::GetGeneratedContexts() const {
    return TArray<UProceduralGeneratorContext*>();
}

bool UProceduralGeneratorContext::Generate() {
    return false;
}

void UProceduralGeneratorContext::ClearGeneratedContent() {
}

UProceduralGeneratorContext::UProceduralGeneratorContext() {
    this->Generator = NULL;
    this->GenerationContext = NULL;
    this->OwnerContext = NULL;
    this->ExportedPointCloud = NULL;
}

