#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "FortControllerComponent_Portal.generated.h"

class UFortPortalComponent;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, Config=Game, meta=(BlueprintSpawnableComponent))
class UFortControllerComponent_Portal : public UFortControllerComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowRequeueToLinks;
    
    UFortControllerComponent_Portal();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetPortalLinkCode(UFortPortalComponent* PortalComponent, const FString& LinkCode);
    
private:
    UFUNCTION(BlueprintCallable)
    void OnPortalMatchmakingComplete(const bool bSuccess);
    
public:
    UFUNCTION(BlueprintCallable)
    void InitiateMatchmakingToPortalOrigin();
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientInitiateMatchmakingToPortalOrigin();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInitiatePortalMatchmkaing(UFortPortalComponent* PortalComponent) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanCancelPortalMatchmaking() const;
    
};

