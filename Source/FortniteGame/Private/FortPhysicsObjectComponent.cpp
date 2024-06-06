#include "FortPhysicsObjectComponent.h"

void UFortPhysicsObjectComponent::WakeUp() {
}

void UFortPhysicsObjectComponent::SetSimulatePhysics(bool bSimulate) {
}

void UFortPhysicsObjectComponent::SetPhysicsPreset(const UFortPhysicsObjectPreset* InPhysicsPreset) {
}

void UFortPhysicsObjectComponent::SetLinearVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsObjectComponent::SetAngularVelocity(FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsObjectComponent::PutToSleep() {
}

bool UFortPhysicsObjectComponent::IsAwake() const {
    return false;
}

void UFortPhysicsObjectComponent::InitializePhysics(UPrimitiveComponent* PrimitiveComponent) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentWake(UPrimitiveComponent* WakingComponent, FName BoneName) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentSleep(UPrimitiveComponent* SleepingComponent, FName BoneName) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentHit(UPrimitiveComponent* HitComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, FVector NormalImpulse, const FHitResult& Hit) {
}

void UFortPhysicsObjectComponent::HandleSimulatingComponentBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

UPrimitiveComponent* UFortPhysicsObjectComponent::GetSimulatingComponent() const {
    return NULL;
}

void UFortPhysicsObjectComponent::ClientBroadcastHitDetection_Implementation(AController* EventInstigator, float Radius, float Relevancy, const FVector HalfPoints, const FVector DoublePoints) {
}

void UFortPhysicsObjectComponent::BroadcastLinearVelocity_Implementation(FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

void UFortPhysicsObjectComponent::BroadcastAngularVelocity_Implementation(FVector NewVel, bool bAddToCurrent, FName BoneName) {
}

UFortPhysicsObjectComponent::UFortPhysicsObjectComponent() {
    PhysicsPreset = NULL;
    bInitializeUsingRootComponent = true;
    SimulatingComponent = NULL;
    BuoyancyComponent = NULL;
}

