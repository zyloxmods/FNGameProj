#include "FortLevelSaveComponent.h"
#include "Net/UnrealNetwork.h"

void UFortLevelSaveComponent::RestrictedPlotLoadComplete(const FAsyncTaskResult& Result) {
}

void UFortLevelSaveComponent::OnRep_RestoringStateChanged(EBackupSaveState OldValue) {
}

void UFortLevelSaveComponent::OnRep_PlotPermissionsChanged() {
}

void UFortLevelSaveComponent::OnRep_LoadedPlotInstanceId() {
}

void UFortLevelSaveComponent::OnRep_LoadedLinkData() {
}

void UFortLevelSaveComponent::OnRep_Loaded() {
}

void UFortLevelSaveComponent::OnRep_LastCheckpointDate(FDateTime OldValue) {
}

void UFortLevelSaveComponent::OnRep_IsAutoSaving(bool bOldValue) {
}

void UFortLevelSaveComponent::OnRep_BackupSaveState(EBackupSaveState OldValue) {
}

void UFortLevelSaveComponent::OnAsyncLoadingOfPlaysetComplete(TSoftObjectPtr<UFortPlaysetItemDefinition> PlaysetPtr) {
}

void UFortLevelSaveComponent::K2_GetLoadedLinkData(FCreativeLoadedLinkData& LinkData) const {
}

bool UFortLevelSaveComponent::IsLoaded() const {
    return false;
}

bool UFortLevelSaveComponent::IsCurated() const {
    return false;
}

FUniqueNetIdRepl UFortLevelSaveComponent::GetAccountIdOfOwner() const {
    return FUniqueNetIdRepl{};
}

bool UFortLevelSaveComponent::DoesPlayerHavePermissionToEdit(const FUniqueNetIdRepl& UserRequestingPermission) const {
    return false;
}

void UFortLevelSaveComponent::CloudSaveFinished(const FAsyncTaskResult& Result) {
}

void UFortLevelSaveComponent::CloudLoadFinished(const FAsyncTaskResult& Result) {
}

void UFortLevelSaveComponent::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(UFortLevelSaveComponent, AccountIdOfOwner);
    DOREPLIFETIME(UFortLevelSaveComponent, bCurated);
    DOREPLIFETIME(UFortLevelSaveComponent, PlotPermissions);
    DOREPLIFETIME(UFortLevelSaveComponent, LoadedPlotInstanceId);
    DOREPLIFETIME(UFortLevelSaveComponent, LoadedLinkData);
    DOREPLIFETIME(UFortLevelSaveComponent, bIsLoaded);
    DOREPLIFETIME(UFortLevelSaveComponent, bIsAutoSaving);
    DOREPLIFETIME(UFortLevelSaveComponent, BackupSaveState);
    DOREPLIFETIME(UFortLevelSaveComponent, RestoringState);
    DOREPLIFETIME(UFortLevelSaveComponent, LastCheckpointDateUtc);
}

UFortLevelSaveComponent::UFortLevelSaveComponent() {
    RestrictedPlotDefinition = NULL;
    bAutoLoadFromRestrictedPlotDefinition = false;
    LinkCodeNumberToAutoLoad = 0;
    bLoadRandomLinkCode = false;
    bLoadMatchAssignedCode = false;
    bCuratedHub = false;
    bLoadPlaysetFromPlot = true;
    LoadedPlot = NULL;
    bPermissionsSaveInProgress = false;
    bCurated = false;
    bIsLoaded = false;
    bIsAutoSaving = false;
    BackupSaveState = EBackupSaveState::Ready;
    RestoringState = EBackupSaveState::Ready;
    PublishRateLimitSeconds = 0;
    BackupRateLimitSeconds = 0;
    RestoreRateLimitSeconds = 0;
}

