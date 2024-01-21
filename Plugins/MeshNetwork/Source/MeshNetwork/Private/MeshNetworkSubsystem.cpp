#include "MeshNetworkSubsystem.h"

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

UMeshNetworkSubsystem::UMeshNetworkSubsystem() {
    this->NodeType = EMeshNetworkNodeType::Unknown;
    this->GameServerNodeType = EMeshNetworkNodeType::Unknown;
    this->bConnectedToRoot = false;
}

