#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Info.h"
#include "GameplayTagContainer.h"
#include "EMeshNetworkNodeType.h"
#include "MeshNetworkEventStateDataArray.h"
#include "FortMeshNetworkEventsLoader.generated.h"

UCLASS(Blueprintable)
class AFortMeshNetworkEventsLoader : public AInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bMeshNetworkReady;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FMeshNetworkEventStateDataArray ActiveMeshNetworkEvents;
    
public:
    AFortMeshNetworkEventsLoader();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkReady(EMeshNetworkNodeType NodeType);
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MulticastMeshNetEventBurst(FName EventName, const FString& EventParams, const FGameplayTagContainer& Filters);
    
};

