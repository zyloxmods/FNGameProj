#include "FortPlayerStateOutpost.h"
#include "Net/UnrealNetwork.h"

void AFortPlayerStateOutpost::SetHasPermissionToEditOutpost(AFortPlayerStateOutpost* InPlayer, bool bHasPermission) {
}

void AFortPlayerStateOutpost::ServerSetHasPermissionToEditOutpost_Implementation(AFortPlayerStateOutpost* InPlayer, bool bHasPermission) {
}
bool AFortPlayerStateOutpost::ServerSetHasPermissionToEditOutpost_Validate(AFortPlayerStateOutpost* InPlayer, bool bHasPermission) {
    return true;
}

void AFortPlayerStateOutpost::OnRep_HasPermissionToEditOutpost() {
}

void AFortPlayerStateOutpost::OnRep_CraftingTableItemsRemaining() {
}

bool AFortPlayerStateOutpost::IsOutpostOwner() const {
    return false;
}

bool AFortPlayerStateOutpost::HasPermissionToEditOutpost() const {
    return false;
}

void AFortPlayerStateOutpost::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortPlayerStateOutpost, bHasPermissionToEditOutpost);
    DOREPLIFETIME(AFortPlayerStateOutpost, CraftingTableItemsRemaining);
}

AFortPlayerStateOutpost::AFortPlayerStateOutpost() {
    this->bHasPermissionToEditOutpost = false;
    this->CraftingTableItemsRemaining = 0;
}

