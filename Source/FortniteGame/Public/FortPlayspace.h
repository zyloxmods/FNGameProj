#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMeshNetworkNodeType.h"
#include "Playspace.h"
#include "EFortPlayspaceUserAcceptanceType.h"
#include "FortPlayspaceMatchmakingSettings.h"
#include "FortPlayspace.generated.h"

UCLASS(Blueprintable)
class AFortPlayspace : public APlayspace {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSubscribeToMeshNetwork;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFortPlayspaceUserAcceptanceType UserAcceptanceType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPlayspaceMatchmakingSettings MatchmakingSettings;
    
public:
    AFortPlayspace();
protected:
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

