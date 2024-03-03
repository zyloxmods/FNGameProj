#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMeshNetworkNodeType.h"
#include "PlayspaceComponent.h"
#include "OnMeshNetworkEventBurstDelegate.h"
#include "OnMeshNetworkEventChangeDelegate.h"
#include "OnMeshNetworkEventEndDelegate.h"
#include "OnMeshNetworkEventStartDelegate.h"
#include "OnMeshNetworkReadyDelegate.h"
#include "FortPlayspaceComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortPlayspaceComponent : public UPlayspaceComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshNetworkReady OnMeshNetworkReady_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshNetworkEventBurst OnMeshNetworkEventBurst_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshNetworkEventStart OnMeshNetworkEventStart_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshNetworkEventChange OnMeshNetworkEventChange_BP;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnMeshNetworkEventEnd OnMeshNetworkEventEnd_BP;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubscribeToMeshNetwork;
    
public:
    UFortPlayspaceComponent();
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkReady(EMeshNetworkNodeType NodeType);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkEventStart(const FName EventName, const FDateTime& EventStartTime, const EMeshNetworkNodeType NodeType, const FString& EventParameters);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkEventEnd(const FName EventName, const EMeshNetworkNodeType NodeType);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkEventChange(const FName EventName, const FDateTime& EventStartTime, const EMeshNetworkNodeType NodeType, const FString& EventParameters);
    
    UFUNCTION(BlueprintCallable)
    void OnMeshNetworkEventBurst(const FName EventName, const EMeshNetworkNodeType NodeType, const FString& EventParameters);
    
};

