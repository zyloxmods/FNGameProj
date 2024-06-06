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
    bWeatherDisabled = false;
    GamePhaseToStart = EAthenaGamePhase::None;
    bWeatherStarted = false;
    WeatherState = EGlobalWeatherState::Inactive;
    WeatherEventEndTime = 1;
    WeatherEventAttemptStart = 1;
    WeatherEventIndex = 0;
    LocalWeatherEventIndex = 0;
    CurrentWeatherEventIntensity = 1;
    CurrentBlendTime = 1;
    TargetBlendTime = 1;
    BlendTimeLength = 1;
    PostProcessComponent = NULL;
}

