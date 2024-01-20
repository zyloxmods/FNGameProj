#include "FortPvPBaseCornerstone.h"
#include "Net/UnrealNetwork.h"

void AFortPvPBaseCornerstone::SetInvincibility(bool bInInvincible) {
}

void AFortPvPBaseCornerstone::OnRep_bInvincible() {
}

void AFortPvPBaseCornerstone::OnInvincibilityChanged_Implementation(bool bIsInvincible) {
}

void AFortPvPBaseCornerstone::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPvPBaseCornerstone, bInvincible);
}

AFortPvPBaseCornerstone::AFortPvPBaseCornerstone() {
    this->bInvincible = false;
}

