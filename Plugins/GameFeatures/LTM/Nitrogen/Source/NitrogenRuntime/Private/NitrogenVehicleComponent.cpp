#include "NitrogenVehicleComponent.h"
#include "Components/TimelineComponent.h"

void UNitrogenVehicleComponent::TimelineBoostFXUpdate_JetSparksCounts(float Value) {
}

void UNitrogenVehicleComponent::TimelineBoostFXUpdate_JetFlamesHeight(float Value) {
}

void UNitrogenVehicleComponent::SetBoostFXActive(const bool bActive) {
}

bool UNitrogenVehicleComponent::IsVehicleUnderCleanupWaterDepth() const {
    return false;
}

void UNitrogenVehicleComponent::HandleVehicleOnHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

UNitrogenVehicleComponent::UNitrogenVehicleComponent() {
    this->TimelineBoostFX = CreateDefaultSubobject<UTimelineComponent>(TEXT("TimelineBoostFX"));
    this->JetFlamesHeightCurve = NULL;
    this->JetSparksCountsCurve = NULL;
    this->TimelineBoostFXLength = 1;
    this->BoostVFXSystem = NULL;
    this->JetFlameMinHeight = 1;
    this->JetFlameMaxHeight = 1;
    this->SpawnedBoostParticleSystem = NULL;
    this->CooldownBetweenBumps = 1;
    this->VehicleWaterDepthCheckTickDelay = 1;
    this->OwningVehicle = NULL;
}

