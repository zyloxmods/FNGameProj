#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "FortConnectionData.h"
#include "OnConnectedDelegate.h"
#include "OnDisconnectedDelegate.h"
#include "OnPoweredDelegate.h"
#include "OnUnpoweredDelegate.h"
#include "BuildingConnectivityComponent.generated.h"

class ABuildingConnectivityEffect;
class ABuildingSMActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FORTNITEGAME_API UBuildingConnectivityComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_Connections, meta=(AllowPrivateAccess=true))
    TArray<FFortConnectionData> Connections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FName> SocketNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoConnectOnInitialize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDrawDebugData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingSMActor* BuildingOwner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<ABuildingConnectivityEffect*> ConnectionEffects;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_bIsPowered, meta=(AllowPrivateAccess=true))
    bool bIsPowered;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, ReplicatedUsing=OnRep_bIsProvidingPower, meta=(AllowPrivateAccess=true))
    bool bIsProvidingPower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAbleToProvidePower;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAllowConnections;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, SaveGame, meta=(AllowPrivateAccess=true))
    bool bAllowsPowerToPassThrough;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConnected AuthorityOnConnectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisconnected AuthorityOnDisconnectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnConnected ClientOnConnectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDisconnected ClientOnDisconnectedDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowered AuthorityOnPoweredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnpowered AuthorityOnUnpoweredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPowered ClientOnPoweredDelegate;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUnpowered ClientOnUnpoweredDelegate;
    
public:
    UBuildingConnectivityComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_Connections();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsProvidingPower();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_bIsPowered();
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void OnPlaced();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool K2_IsPowered();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsConnectedTo(ABuildingSMActor* TestActor) const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void DrawDebugData();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void DisconnectAll();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanConnectTo(ABuildingSMActor* TestActor) const;
    
};

