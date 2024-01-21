#include "FortSplineAudioActor.h"
#include "Components/AudioComponent.h"
#include "Components/SplineComponent.h"

AFortSplineAudioActor::AFortSplineAudioActor() {
    this->UpdateFrequencyInaudible = 3.00f;
    this->UpdateFrequencyAudible = 1.00f;
    this->MaxAudibleRange = 5000.00f;
    this->NumSamplePoints = 30;
    this->ClosestPointSound = NULL;
    this->NextClosestPointSound = NULL;
    this->MidPointSound = NULL;
    this->AudioSpline = CreateDefaultSubobject<USplineComponent>(TEXT("AudioSpline"));
    this->AudioAtClosestPoint = CreateDefaultSubobject<UAudioComponent>(TEXT("ClosestPoint"));
    this->AudioAtNextClosestPoint = CreateDefaultSubobject<UAudioComponent>(TEXT("NextClosestPoint"));
    this->AudioAtMidPoint = CreateDefaultSubobject<UAudioComponent>(TEXT("MidPoint"));
}

