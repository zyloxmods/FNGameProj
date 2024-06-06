#include "FortPlayerControllerDeployableBase.h"

void AFortPlayerControllerDeployableBase::ServerMoveItemToDeployableBase_Implementation(const FGuid& ItemOnPlayer, const int32 Count, const ADeployableBasePlot* ExpectedPlot) {
}
bool AFortPlayerControllerDeployableBase::ServerMoveItemToDeployableBase_Validate(const FGuid& ItemOnPlayer, const int32 Count, const ADeployableBasePlot* ExpectedPlot) {
    return true;
}

void AFortPlayerControllerDeployableBase::ServerMoveItemFromDeployableBase_Implementation(const FGuid& ItemOnPlot, const int32 Count, const ADeployableBasePlot* ExpectedPlot) {
}
bool AFortPlayerControllerDeployableBase::ServerMoveItemFromDeployableBase_Validate(const FGuid& ItemOnPlot, const int32 Count, const ADeployableBasePlot* ExpectedPlot) {
    return true;
}

void AFortPlayerControllerDeployableBase::ServerMoveAllItemsToDeployableBase_Implementation(const ADeployableBasePlot* ExpectedPlot) {
}
bool AFortPlayerControllerDeployableBase::ServerMoveAllItemsToDeployableBase_Validate(const ADeployableBasePlot* ExpectedPlot) {
    return true;
}

void AFortPlayerControllerDeployableBase::ServerMoveAllItemsFromDeployableBase_Implementation(const ADeployableBasePlot* ExpectedPlot) {
}
bool AFortPlayerControllerDeployableBase::ServerMoveAllItemsFromDeployableBase_Validate(const ADeployableBasePlot* ExpectedPlot) {
    return true;
}

void AFortPlayerControllerDeployableBase::MoveItemToDeployableBase(const FGuid& ItemOnPlayer, const int32 Count) {
}

void AFortPlayerControllerDeployableBase::MoveItemFromDeployableBase(const FGuid& ItemOnPlot, const int32 Count) {
}

void AFortPlayerControllerDeployableBase::MoveAllItemsToDeployableBase() {
}

void AFortPlayerControllerDeployableBase::MoveAllItemsFromDeployableBase() {
}

void AFortPlayerControllerDeployableBase::ClientOnHordeWaveComplete_Implementation(const int32 Wave, const TArray<FItemAndCount>& Rewards) {
}

void AFortPlayerControllerDeployableBase::ClientOnHordeTierInitialized_Implementation(const TArray<FItemAndCount>& Items) {
}

void AFortPlayerControllerDeployableBase::ClientOnHordeTierComplete_Implementation(EFortCompletionResult Result) {
}

AFortPlayerControllerDeployableBase::AFortPlayerControllerDeployableBase() {
    CurrentPlot = NULL;
    PreviousPlot = NULL;
}

