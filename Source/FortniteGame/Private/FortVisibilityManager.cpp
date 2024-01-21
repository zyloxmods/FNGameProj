#include "FortVisibilityManager.h"
#include "Net/UnrealNetwork.h"

void AFortVisibilityManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortVisibilityManager, VisibilityInfoArray);
}

AFortVisibilityManager::AFortVisibilityManager() {
}

