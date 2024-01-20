#include "BuildingFOBConfigActor.h"
#include "Components/BoxComponent.h"
#include "Net/UnrealNetwork.h"

bool ABuildingFOBConfigActor::ReloadFOB() {
    return false;
}

void ABuildingFOBConfigActor::OnRep_FOBMode() {
}

void ABuildingFOBConfigActor::OnRep_bFinalized() {
}

void ABuildingFOBConfigActor::OnIOOperationCompleteMulticast_Implementation(EFOBIOStatus IOOperation, bool bSuccess, UFortFOBCoreDecoItemDefinition* SelectedCoreDef) {
}

void ABuildingFOBConfigActor::OnFOBModeSet_Implementation(EFOBMode ModeThatWasSet) {
}

void ABuildingFOBConfigActor::OnFinalized_Implementation() {
}


void ABuildingFOBConfigActor::OnFinalizationFXMulticast_Implementation() {
}

void ABuildingFOBConfigActor::OnCoreInitialized_Implementation(ABuildingFOBCoreActor* InitializedCore) {
}

bool ABuildingFOBConfigActor::IsPlayerControllerFOBOwner(const AFortPlayerController* FortPC) const {
    return false;
}

bool ABuildingFOBConfigActor::IsInitialized() const {
    return false;
}

bool ABuildingFOBConfigActor::IsFinalized() const {
    return false;
}

bool ABuildingFOBConfigActor::IsBuildingActorWithinFOB(ABuildingActor* ActorToCheck) const {
    return false;
}

UFortFOBCoreDecoItemDefinition* ABuildingFOBConfigActor::GetSelectedFOBCoreItemDefinition() const {
    return NULL;
}

EFOBMode ABuildingFOBConfigActor::GetFOBMode() const {
    return EFOBMode::Uninitialized;
}

TArray<FFOBCoreChoice> ABuildingFOBConfigActor::GetAllCoreChoices() const {
    return TArray<FFOBCoreChoice>();
}

bool ABuildingFOBConfigActor::CanSaveFOB() const {
    return false;
}

bool ABuildingFOBConfigActor::CanReloadFOB() const {
    return false;
}

bool ABuildingFOBConfigActor::CanPerformIOOperation() const {
    return false;
}

bool ABuildingFOBConfigActor::AttemptSelectFOBCore(UFortFOBCoreDecoItemDefinition* DefToSelect) {
    return false;
}

void ABuildingFOBConfigActor::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(ABuildingFOBConfigActor, FOBCoreChoices);
    DOREPLIFETIME(ABuildingFOBConfigActor, SelectedCoreItemDef);
    DOREPLIFETIME(ABuildingFOBConfigActor, SelectedCore);
    DOREPLIFETIME(ABuildingFOBConfigActor, OwnerNetID);
    DOREPLIFETIME(ABuildingFOBConfigActor, FOBMode);
    DOREPLIFETIME(ABuildingFOBConfigActor, IOStatus);
    DOREPLIFETIME(ABuildingFOBConfigActor, bInitialized);
    DOREPLIFETIME(ABuildingFOBConfigActor, bFinalized);
}

ABuildingFOBConfigActor::ABuildingFOBConfigActor() {
    this->bLoadFirstCoreInCreationMode = false;
    this->SelectedCoreItemDef = NULL;
    this->SelectedCore = NULL;
    this->CoreSpawnPad = NULL;
    this->SaveFileInstructionsHandler = NULL;
    this->FOBMode = EFOBMode::Uninitialized;
    this->IOStatus = EFOBIOStatus::Free;
    this->bEnumeratedUserFilesSuccessfully = false;
    this->bCoreBasedDeploymentModeFinalizationRequested = false;
    this->bInitialized = false;
    this->bFinalized = false;
    this->bDummyDeployment = false;
    this->ContainmentBoxComponent = CreateDefaultSubobject<UBoxComponent>(TEXT("ContainmentVolume"));
}

