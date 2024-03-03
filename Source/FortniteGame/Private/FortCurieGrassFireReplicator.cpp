#include "FortCurieGrassFireReplicator.h"
#include "Net/UnrealNetwork.h"

void AFortCurieGrassFireReplicator::OnRep_PackedDataArray() {
}

void AFortCurieGrassFireReplicator::OnRep_MinGrassGridIndex() {
}

void AFortCurieGrassFireReplicator::OnRep_MaxGrassGridIndex() {
}

void AFortCurieGrassFireReplicator::OnRep_GrassGridOrigin() {
}

void AFortCurieGrassFireReplicator::OnRep_GrassGridCellSize() {
}

void AFortCurieGrassFireReplicator::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const {
    Super::GetLifetimeReplicatedProps(OutLifetimeProps);
    
    DOREPLIFETIME(AFortCurieGrassFireReplicator, PackedDataArray);
    DOREPLIFETIME(AFortCurieGrassFireReplicator, MinGrassGridIndex);
    DOREPLIFETIME(AFortCurieGrassFireReplicator, MaxGrassGridIndex);
    DOREPLIFETIME(AFortCurieGrassFireReplicator, GrassGridOrigin);
    DOREPLIFETIME(AFortCurieGrassFireReplicator, GrassGridCellSize);
}

AFortCurieGrassFireReplicator::AFortCurieGrassFireReplicator() {
}

