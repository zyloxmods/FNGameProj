#include "ProceduralTextureSource.h"

FProceduralTextureSource::FProceduralTextureSource() {
    this->bUseRenderTarget = false;
    this->Texture = NULL;
    this->RenderTarget = NULL;
    this->RenderTargetMaterial = NULL;
    this->bStretchToFit = false;
    this->TexelSize = 1;
    this->XOffset = 1;
    this->YOffset = 1;
    this->Rotation = 1;
}

