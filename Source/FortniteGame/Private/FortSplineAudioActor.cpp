#include "FortSplineAudioActor.h"
#include "Components/AudioComponent.h"
#include "Components/SplineComponent.h"

AFortSplineAudioActor::AFortSplineAudioActor() {
    UpdateFrequencyInaudible = 1;
    UpdateFrequencyAudible = 1;
    MaxAudibleRange = 1;
    NumSamplePoints = 0;
    ClosestPointSound = NULL;
    NextClosestPointSound = NULL;
    MidPointSound = NULL;
    AudioSpline = CreateDefaultSubobject<USplineComponent>(TEXT("AudioSpline"));
    AudioAtClosestPoint = CreateDefaultSubobject<UAudioComponent>(TEXT("ClosestPoint"));
    AudioAtNextClosestPoint = CreateDefaultSubobject<UAudioComponent>(TEXT("NextClosestPoint"));
    AudioAtMidPoint = CreateDefaultSubobject<UAudioComponent>(TEXT("Midpoint"));
}

