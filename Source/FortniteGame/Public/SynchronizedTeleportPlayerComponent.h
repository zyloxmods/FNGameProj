#pragma once
#include "CoreMinimal.h"
#include "FortControllerComponent.h"
#include "SynchronizedTeleportPlayerComponent.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class USynchronizedTeleportPlayerComponent : public UFortControllerComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsServerWaitingForClientToCancelRespawn, meta=(AllowPrivateAccess=true))
    bool bIsServerWaitingForClientToCancelRespawn;
    
public:
    USynchronizedTeleportPlayerComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
private:
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void ServerRestartRespawn();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsServerWaitingForClientToCancelRespawn();
    
public:
    UFUNCTION(BlueprintCallable, Client, Unreliable)
    void ClientHideHUDElementsAndFadeScreen(const FText& HUDReasonText, float FadeTime, bool bFadeAudio) const;
    
};

