#include "FortSkyTubePhysicsComponent.h"
#include "Net/UnrealNetwork.h"

void UFortSkyTubePhysicsComponent::SetMagnetization(const bool bInMagnetized) {
}

void UFortSkyTubePhysicsComponent::OnRep_SkyTube(AFortSkyTube* PreviousSkyTube) {
}

void UFortSkyTubePhysicsComponent::OnRep_Magnetized(bool bPreviousMagnetized) {
}

bool UFortSkyTubePhysicsComponent::IsSkyTubeForceEnabled() const {
    return false;
}

bool UFortSkyTubePhysicsComponent::IsMagnetized() const {
    return false;
}

bool UFortSkyTubePhysicsComponent::IsInSkyTube() const {
    return false;
}

void UFortSkyTubePhysicsComponent::ExitSkyTube(AFortSkyTube* InSkyTube) {
}

void UFortSkyTubePhysicsComponent::EnterSkyTube(AFortSkyTube* InSkyTube) {
}

void UFortSkyTubePhysicsComponent::ComputeAccelerations(const float DeltaTime, UPrimitiveComponent* PrimComp, FVector& OutLinearAcceleration, FVector& OutAngularAccelerationRad) {
}

void UFortSkyTubePhysicsComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortSkyTubePhysicsComponent, SkyTube);
    DOREPLIFETIME(UFortSkyTubePhysicsComponent, bMagnetized);
}

UFortSkyTubePhysicsComponent::UFortSkyTubePhysicsComponent() {
    MaxTubeSpeed = 1;
    MaxTubeAcceleration = 1;
    bMagnetizeWhenNotInSkytube = true;
    SkyTube = NULL;
    PrevSkyTube = NULL;
    bMagnetized = true;
}

