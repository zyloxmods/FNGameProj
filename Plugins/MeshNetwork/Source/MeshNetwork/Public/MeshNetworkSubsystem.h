#pragma once
#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "EMeshNetworkNodeType.h"
#include "MeshMetaDataStruct.h"
#include "OnConnectedToRootChangedDelegate.h"
#include "OnGameServerNodeTypeChangedDelegate.h"
#include "OnMeshMetaDataUpdatedDelegate.h"
#include "OnMeshNodeTypeChangedDelegate.h"
#include "OnMeshPlayerRequestedDelegate.h"
#include "Templates/SubclassOf.h"
#include "MeshNetworkSubsystem.generated.h"

class AActor;
class UMeshNetworkComponent;

UCLASS(Blueprintable)
class MESHNETWORK_API UMeshNetworkSubsystem : public UGameInstanceSubsystem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshNodeTypeChanged OnMeshNodeTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConnectedToRootChanged OnConnectedToRootChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnGameServerNodeTypeChanged OnGameServerNodeTypeChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshMetaDataUpdated OnMeshMetaDataUpdated;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshPlayerRequested OnMeshPlayerRequested;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMeshNetworkNodeType NodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EMeshNetworkNodeType GameServerNodeType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bConnectedToRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMetadataReceived;
    
public:
    UMeshNetworkSubsystem();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMetaDataWithKey(FName Key, const FMeshMetaDataStruct& MetaData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetMetaData(const FMeshMetaDataStruct& MetaData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    bool GetMetaDataWithKey(FName Key, UPARAM(Ref) FMeshMetaDataStruct& MetaData);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void GetMetadata(UPARAM(Ref) FMeshMetaDataStruct& MetaData);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMeshNetworkNodeType GetMeshNetworkNodeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EMeshNetworkNodeType GetGameServerNodeType() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetConnectedToRoot() const;
    
    UFUNCTION(BlueprintCallable)
    void EnableMeshReplication(AActor* Actor, TSubclassOf<UMeshNetworkComponent> MeshComponentClass);
    
    UFUNCTION(BlueprintCallable)
    void DisableMeshReplication(AActor* Actor);
    
};

