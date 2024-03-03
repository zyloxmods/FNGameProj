#include "FortHudContextTutorialTipsBase.h"

void UFortHudContextTutorialTipsBase::UnregisterCloseButtonInput() {
}


void UFortHudContextTutorialTipsBase::StartWorldMarkerOutroAnimation(int32 InPlayerID, int32 InInstanceID) {
}


void UFortHudContextTutorialTipsBase::StartLerpContextTutorialBall(int32 InPlayerID, int32 InInstanceID, float TotalTime, float StartDelay) {
}

void UFortHudContextTutorialTipsBase::SetPosition(FVector2D position, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment) {
}

void UFortHudContextTutorialTipsBase::SetDefaultPlatformPosition() {
}

void UFortHudContextTutorialTipsBase::RegisterCloseButtonInput() {
}



UFortHudContextTutorialTipsBase::UFortHudContextTutorialTipsBase() {
    this->CanvasPanel_Container = NULL;
    this->CanvasPanel_Ball = NULL;
    this->Overlay_Container = NULL;
    this->ContextTutorialBall = NULL;
    this->ContextTutorialBallParented = NULL;
    this->MaxLerpSpeedPercentPerSecond = 1;
}

