#pragma once
#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "OnlineBeaconClient.h"
#include "MeshBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class MESHNETWORK_API AMeshBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_ConnectedToRoot, meta=(AllowPrivateAccess=true))
    bool bConnectedToRoot;
    
public:
    AMeshBeaconClient();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
  //  UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
//    void ServerUpdateMultipleLevelsVisibility(const TArray<FUpdateLevelVisibilityLevelInfo>& LevelVisibilities);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateLevelVisibility(FName PackageName, bool bIsVisible);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_ConnectedToRoot();
    
};

