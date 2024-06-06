#include "FortDeployableBaseManager.h"
#include "Net/UnrealNetwork.h"

void AFortDeployableBaseManager::SetKeepDeployableBasesOnLogout(bool bInKeepBasesOnLogout) {
}

void AFortDeployableBaseManager::ReloadAllPlots() {
}

bool AFortDeployableBaseManager::GetTierOutputForSelectedTier(int32 Tier, const UFortTieredCollectionLayout* Layout, FFortTierCollectionLayoutOutput& Output) const {
    return false;
}

int32 AFortDeployableBaseManager::GetHighestDefeatedTierForPlayerAndLayout(FUniqueNetIdRepl PlayerId, const UFortTieredCollectionLayout* Layout) const {
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
    bRestrictedBuildingActive = true;
    bBusyWithPlotActions = false;
    bDestroyAllBuildingPiecesOnReload = true;
    NumPiecesDestroyedOnZoneCleanupPerUpdate = 0;
    NumEnvPiecesRestoredPerUpdate = 0;
    bDeployableBasesReadOnly = false;
    DeployableBaseUseType = EDeployableBaseUseType::Neighborhood;
    DeployableBaseItemDefinition = NULL;
    DeployableBasePlotClass = NULL;
    SupportedSkillTreeBasedUnlocks = NULL;
    NumExpectedPlots = 0;
    bCaptureEnvironmentActorsForRestoration = false;
    bWorldInitialized = false;
    bKeepBasesOnLogout = false;
}

