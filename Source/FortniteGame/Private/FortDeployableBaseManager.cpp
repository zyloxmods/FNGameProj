#include "FortDeployableBaseManager.h"
#include "Net/UnrealNetwork.h"

void AFortDeployableBaseManager::SetKeepDeployableBasesOnLogout(bool bInKeepBasesOnLogout) {
}

void AFortDeployableBaseManager::ReloadAllPlots() {
}

bool AFortDeployableBaseManager::GetTierOutputForSelectedTier(int32 Tier, const UFortTieredCollectionLayout* Layout, FFortTierCollectionLayoutOutput& Output) const {
    return false;
}

int32 AFortDeployableBaseManager::GetHighestDefeatedTierForPlayerAndLayout(FUniqueNetIdRepl PlayerID, const UFortTieredCollectionLayout* Layout) const {
    return 0;
}

EDeployableBaseUseType AFortDeployableBaseManager::GetDeployableBaseUseType() const {
    return EDeployableBaseUseType::Neighborhood;
}

ADeployableBasePlot* AFortDeployableBaseManager::GetDeployableBasePlotFromLocation(const FVector& Location) const {
    return NULL;
}

AFortDeployableBaseManager* AFortDeployableBaseManager::GetCurrent(UObject* WorldContextObject) {
    return NULL;
}

void AFortDeployableBaseManager::GetAvailableTiers(TArray<FAvailableTierLayout>& OutAvailableTiers) const {
}

void AFortDeployableBaseManager::GetAllDeployableBasePlots(TArray<ADeployableBasePlot*>& OutDeployableBasePlots) const {
}

void AFortDeployableBaseManager::BroadcastHordeWaveStinger(EHordeWaveStingerType StingerType) const {
}

void AFortDeployableBaseManager::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortDeployableBaseManager, bRestrictedBuildingActive);
    DOREPLIFETIME(AFortDeployableBaseManager, bBusyWithPlotActions);
    DOREPLIFETIME(AFortDeployableBaseManager, DeployableBaseUseType);
    DOREPLIFETIME(AFortDeployableBaseManager, ActiveTieredCollectionLayouts);
    DOREPLIFETIME(AFortDeployableBaseManager, DeployableBaseArray);
}

AFortDeployableBaseManager::AFortDeployableBaseManager() {
    this->bRestrictedBuildingActive = true;
    this->bBusyWithPlotActions = false;
    this->bDestroyAllBuildingPiecesOnReload = true;
    this->NumPiecesDestroyedOnZoneCleanupPerUpdate = 50;
    this->NumEnvPiecesRestoredPerUpdate = 10;
    this->bDeployableBasesReadOnly = false;
    this->DeployableBaseUseType = EDeployableBaseUseType::Neighborhood;
    this->DeployableBaseItemDefinition = NULL;
    this->DeployableBasePlotClass = NULL;
    this->SupportedSkillTreeBasedUnlocks = NULL;
    this->NumExpectedPlots = 0;
    this->bCaptureEnvironmentActorsForRestoration = false;
    this->bWorldInitialized = false;
    this->bKeepBasesOnLogout = false;
}

