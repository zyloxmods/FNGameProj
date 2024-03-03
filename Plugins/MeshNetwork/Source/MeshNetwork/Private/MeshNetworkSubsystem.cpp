#include "MeshNetworkSubsystem.h"
#include "Templates/SubclassOf.h"

void UMeshNetworkSubsystem::SetMetaDataWithKey(FName Key, const FMeshMetaDataStruct& MetaData) {
}

void UMeshNetworkSubsystem::SetMetaData(const FMeshMetaDataStruct& MetaData) {
}

bool UMeshNetworkSubsystem::GetMetaDataWithKey(FName Key, FMeshMetaDataStruct& MetaData) {
    return false;
}

void UMeshNetworkSubsystem::GetMetadata(FMeshMetaDataStruct& MetaData) {
}

EMeshNetworkNodeType UMeshNetworkSubsystem::GetMeshNetworkNodeType() const {
    return EMeshNetworkNodeType::Root;
}

EMeshNetworkNodeType UMeshNetworkSubsystem::GetGameServerNodeType() const {
    return EMeshNetworkNodeType::Root;
}

bool UMeshNetworkSubsystem::GetConnectedToRoot() const {
    return false;
}

void UMeshNetworkSubsystem::EnableMeshReplication(AActor* Actor, TSubclassOf<UMeshNetworkComponent> MeshComponentClass) {
}

void UMeshNetworkSubsystem::DisableMeshReplication(AActor* Actor) {
}

UMeshNetworkSubsystem::UMeshNetworkSubsystem() {
    this->NodeType = EMeshNetworkNodeType::Root;
    this->GameServerNodeType = EMeshNetworkNodeType::Root;
    this->bConnectedToRoot = false;
    this->bMetadataReceived = false;
}

