#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintAsyncActionBase.h"
#include "EMeshNetworkNodeType.h"
#include "MeshNetworkReadyAsyncDelegateDelegate.h"
#include "FortAsyncAction_MeshNetworkReady.generated.h"

class UFortAsyncAction_MeshNetworkReady;
class UObject;

UCLASS(Blueprintable)
class UFortAsyncAction_MeshNetworkReady : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMeshNetworkReadyAsyncDelegate OnReady;
    
    UFortAsyncAction_MeshNetworkReady();
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static UFortAsyncAction_MeshNetworkReady* MeshNetworkReadyAsync(UObject* WorldContextObject);
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMeshNetworkTypeSet(EMeshNetworkNodeType NodeType);
    
};

