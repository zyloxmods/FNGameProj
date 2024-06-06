#include "KeepItemContainer.h"
#include "Net/UnrealNetwork.h"

void AKeepItemContainer::RestoreLoot() {
}

void AKeepItemContainer::ResetContainer(AFortPlayerController* FortPC) {
}

void AKeepItemContainer::OnRep_SearchedBy() {
}

void AKeepItemContainer::OnRep_HostUpgradeLevel() {
}

void AKeepItemContainer::InitializeContainer(int32 InitUpgradeLevel) {
}

int32 AKeepItemContainer::GetLootTierOverride_Implementation() const {
    return 0;
}

FName AKeepItemContainer::GetContainerNameAndLevelKey() {
    return NAME_None;
}

void AKeepItemContainer::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AKeepItemContainer, HostUpgradeLevel);
    DOREPLIFETIME(AKeepItemContainer, SearchedBy);
    DOREPLIFETIME(AKeepItemContainer, BestAvailableRarity);
    DOREPLIFETIME(AKeepItemContainer, MaxItems);
}

AKeepItemContainer::AKeepItemContainer() {
    HostUpgradeLevel = 0;
    ContainerType = EKeepContainerType::Base;
    bUseDefaultLootLogic = false;
    bResetThisWhenKeepResets = true;
    ContainerDataTable = NULL;
    bShowChoiceUI = false;
    BestAvailableRarity = EFortRarity::Common;
    MaxItems = 0;
}

