#include "FortTimeOfDayWeatherComponent.h"
#include "Net/UnrealNetwork.h"

void UFortTimeOfDayWeatherComponent::OnRep_WeatherEventIndex() {
}

void UFortTimeOfDayWeatherComponent::OnRep_CurrentWeatherEventIntensity() {
}

void UFortTimeOfDayWeatherComponent::OnPlaylistLoaded(FName PlaylistName, const FGameplayTagContainer& PlaylistContextTags) {
}

bool UFortTimeOfDayWeatherComponent::IsWeatherEventActive() const {
    return false;
}

float UFortTimeOfDayWeatherComponent::GetCurrentWindStrength() const {
    return 0.0f;
}

FVector UFortTimeOfDayWeatherComponent::GetCurrentWindDirection() const {
    return FVector{};
}

float UFortTimeOfDayWeatherComponent::GetCurrentWeatherIntensity() const {
    return 0.0f;
}

int32 UFortTimeOfDayWeatherComponent::GetCurrentWeatherEventIndex() const {
    return 0;
}

float UFortTimeOfDayWeatherComponent::GetBlendTimePercentage() const {
    return 0.0f;
}

void UFortTimeOfDayWeatherComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortTimeOfDayWeatherComponent, WeatherEventIndex);
    DOREPLIFETIME(UFortTimeOfDayWeatherComponent, CurrentWeatherEventIntensity);
}

UFortTimeOfDayWeatherComponent::UFortTimeOfDayWeatherComponent() {
    this->bWeatherDisabled = false;
    this->GamePhaseToStart = EAthenaGamePhase::None;
    this->bWeatherStarted = false;
    this->WeatherState = EGlobalWeatherState::Inactive;
    this->WeatherEventEndTime = 1;
    this->WeatherEventAttemptStart = 1;
    this->WeatherEventIndex = 0;
    this->LocalWeatherEventIndex = 0;
    this->CurrentWeatherEventIntensity = 1;
    this->CurrentBlendTime = 1;
    this->TargetBlendTime = 1;
    this->BlendTimeLength = 1;
    this->PostProcessComponent = NULL;
}

