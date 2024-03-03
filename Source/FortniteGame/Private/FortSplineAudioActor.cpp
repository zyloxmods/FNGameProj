#include "FortSplineAudioActor.h"
#include "Components/AudioComponent.h"
#include "Components/SplineComponent.h"

AFortSplineAudioActor::AFortSplineAudioActor() {
    this->UpdateFrequencyInaudible = 1;
    this->UpdateFrequencyAudible = 1;
    this->MaxAudibleRange = 1;
    this->NumSamplePoints = 0;
    this->ClosestPointSound = NULL;
    this->NextClosestPointSound = NULL;
    this->MidPointSound = NULL;
    this->AudioSpline = CreateDefaultSubobject<USplineComponent>(TEXT("AudioSpline"));
    this->AudioAtClosestPoint = CreateDefaultSubobject<UAudioComponent>(TEXT("ClosestPoint"));
    this->AudioAtNextClosestPoint = CreateDefaultSubobject<UAudioComponent>(TEXT("NextClosestPoint"));
    this->AudioAtMidPoint = CreateDefaultSubobject<UAudioComponent>(TEXT("Midpoint"));
}

