#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UACNetworkComponent.generated.h"

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UACBASE_API UUACNetworkComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, meta=(AllowPrivateAccess=true))
    int32 PlayerId;
    
    UUACNetworkComponent();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void SendPacketToServer(uint8 Type, const TArray<uint8>& Packet);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void SendPacketToClient(uint8 Type, const TArray<uint8>& Packet);
    
public:
    UFUNCTION(Client, Reliable)
    void SendClientHello(uint32 SessionKey);
    
};

