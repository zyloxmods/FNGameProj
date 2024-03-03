#include "FortAthenaMutator_Hydrogen.h"
#include "Net/UnrealNetwork.h"

void AFortAthenaMutator_Hydrogen::UpdateCapturePointsCounted() {
}

bool AFortAthenaMutator_Hydrogen::TickHydrogenStormShield(float DeltaSeconds) {
    return false;
}

void AFortAthenaMutator_Hydrogen::SetupSafeZoneRoute(const FVector StartVector, const FVector EndVector) {
}

void AFortAthenaMutator_Hydrogen::SetCapturePointFillAmount(AHydrogenObjectiveActor* InCapturePointActor, uint8 InPlayerTeam) const {
}

void AFortAthenaMutator_Hydrogen::PositionHydrogenStormShield() {
}

void AFortAthenaMutator_Hydrogen::OwningTeamChange(AHydrogenObjectiveActor* Objective, uint8 NewTeam, uint8 OldTeam) {
}

void AFortAthenaMutator_Hydrogen::OnRep_WinningTeam() {
}

void AFortAthenaMutator_Hydrogen::OnRep_HydrogenTeamPointsChanged() {
}

void AFortAthenaMutator_Hydrogen::OnGamePhaseStepChanged(const TScriptInterface<IFortSafeZoneInterface>& SafeZoneInterfaceConst, EAthenaGamePhaseStep GamePhaseStep) {
}

bool AFortAthenaMutator_Hydrogen::IsInStormShield(FVector TestLocation) const {
    return false;
}

void AFortAthenaMutator_Hydrogen::GotoNextStormShieldNode() {
}

void AFortAthenaMutator_Hydrogen::GiveObjectiveAccolade(AFortPlayerControllerAthena* FortController) {
}

void AFortAthenaMutator_Hydrogen::GiveEOMBonusAccolade() {
}

float AFortAthenaMutator_Hydrogen::GetTimeToNextNode() {
    return 0.0f;
}

float AFortAthenaMutator_Hydrogen::GetStormSpeed() const {
    return 0.0f;
}

void AFortAthenaMutator_Hydrogen::GetSortedActivePointIndices(TArray<int32>& OutSortedIndices) const {
}

int32 AFortAthenaMutator_Hydrogen::GetOwnedCapturePointCount(int32 InIndex) {
    return 0;
}

FVector AFortAthenaMutator_Hydrogen::GetNextActorOnPathLocation(int32 InPathIndex) {
    return FVector{};
}

TArray<AHydrogenObjectiveActor*> AFortAthenaMutator_Hydrogen::GetAllCapturePoints() const {
    return TArray<AHydrogenObjectiveActor*>();
}

FVector AFortAthenaMutator_Hydrogen::GetActorOnPathLocation(int32 InPathIndex) {
    return FVector{};
}

void AFortAthenaMutator_Hydrogen::EndGame(uint8 Winner) {
}

void AFortAthenaMutator_Hydrogen::CheckVictoryPoints(float TimePassed) {
}

bool AFortAthenaMutator_Hydrogen::bHasWinnerBeenDeclared() const {
    return false;
}

bool AFortAthenaMutator_Hydrogen::bHasStormStarted() const {
    return false;
}

void AFortAthenaMutator_Hydrogen::AddBonusVictoryPointsForLockedCapturePoints(uint8 InTeam) {
}

void AFortAthenaMutator_Hydrogen::ActivateTheStormShield() {
}

void AFortAthenaMutator_Hydrogen::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, bInitialized);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, bWinnerDeclared);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, HydrogenTeamPoints);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, WinningTeam);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, CapturePointActors);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, bStormActive);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, SecondsTilStormActivation);
    DOREPLIFETIME(AFortAthenaMutator_Hydrogen, StormHeadingYawReplicated);
}

AFortAthenaMutator_Hydrogen::AFortAthenaMutator_Hydrogen() {
    this->bInitialized = false;
    this->bWinnerDeclared = false;
    this->WinningTeam = 255;
    this->WinningScore = 0;
    this->MinimapMaterialParameterCollection = NULL;
    this->DefaultRespawnTexture = NULL;
    this->DefaultRespawnDisplayPriority = 0;
    this->DefaultRespawnCameraActorClass = NULL;
    this->TickHydrogenStormShield_TimeBetweenTicks = 1;
    this->HydrogenCompassIconOverlap = 1;
    this->bStormActive = false;
    this->SecondsTilStormActivation = 1;
    this->HydrogenVictoryPointCheckTime = 1;
    this->HydrogenTotalTimeForOneCapturePoint = 1;
    this->HydrogenMaxCapturePoints = 0;
    this->HydrogenTotalTimeForMaxCapturePoints = 1;
    this->HydrogenVictoryPointCheckTimePassed = 1;
    this->SafeZoneCameraActor = NULL;
    this->HydrogenCapturePointsPathsIndexToUse = 0;
    this->StormHeadingYawReplicated = 1;
}

