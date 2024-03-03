#include "FortSimpleMaterialProgressBar.h"

void UFortSimpleMaterialProgressBar::SetStartProgress(float StartProgress) {
}

void UFortSimpleMaterialProgressBar::SetProgress(float Progress) {
}

void UFortSimpleMaterialProgressBar::SetColorBackground(FLinearColor ColorBackground) {
}

void UFortSimpleMaterialProgressBar::SetColorB(FLinearColor ColorB) {
}

void UFortSimpleMaterialProgressBar::SetColorA(FLinearColor ColorA) {
}

void UFortSimpleMaterialProgressBar::AnimateProgressFromStart(float Start, float End, float AnimSpeed) {
}

void UFortSimpleMaterialProgressBar::AnimateProgressFromCurrent(float End, float AnimSpeed) {
}

UFortSimpleMaterialProgressBar::UFortSimpleMaterialProgressBar() {
    this->bOverrideDefaultColorA = false;
    this->bOverrideDefaultColorB = false;
    this->bOverrideDefaultColorBackground = false;
    this->bOverrideDefaultSegments = false;
    this->Segments = 0;
    this->bOverrideDefaultSegmentEdge = false;
    this->SegmentEdge = 1;
    this->bOverrideDefaultFillEdgeSoftness = false;
    this->FillEdgeSoftness = 1;
    this->bOverrideDefaultGlowEdge = false;
    this->GlowEdge = 1;
    this->bOverrideDefaultGlowSoftness = false;
    this->GlowSoftness = 1;
    this->bOverrideDefaultOutlineScale = false;
    this->OutlineScale = 1;
    this->bUseStroke = true;
    this->StrokeMaterial = NULL;
    this->NoStrokeMaterial = NULL;
    this->Image_Bar = NULL;
    this->BoundAnim_FillBar = NULL;
    this->CachedMID = NULL;
}

