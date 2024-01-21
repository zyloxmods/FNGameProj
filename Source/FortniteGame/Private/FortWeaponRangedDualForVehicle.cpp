#include "FortWeaponRangedDualForVehicle.h"
#include "Net/UnrealNetwork.h"

void AFortWeaponRangedDualForVehicle::OnRep_MountedWeaponInfoRepped() {
}


void AFortWeaponRangedDualForVehicle::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortWeaponRangedDualForVehicle, MountedWeaponInfoRepped);
}

AFortWeaponRangedDualForVehicle::AFortWeaponRangedDualForVehicle() {
}

