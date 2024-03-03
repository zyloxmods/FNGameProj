#include "NitrogenPickup.h"
#include "Components/SphereComponent.h"
#include "Net/UnrealNetwork.h"

void ANitrogenPickup::OnRep_TeamHidden() {
}

void ANitrogenPickup::OnNitrogenPickupOverlapped(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult) {
}

void ANitrogenPickup::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ANitrogenPickup, TeamHidden);
}

ANitrogenPickup::ANitrogenPickup() {
    this->ScoreReason = ENitrogenScoreReason::None;
    this->AutoPickupTouchComponent = CreateDefaultSubobject<USphereComponent>(TEXT("AutoPickupTouchComponent"));
    this->NitrogenPickupType = ENitrogenPickupType::None;
    this->bAutoAllowInteraction = false;
    this->TeamHidden = 255;
}

