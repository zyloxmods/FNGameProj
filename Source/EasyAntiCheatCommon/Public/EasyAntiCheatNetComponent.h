#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EasyAntiCheatNetComponent.generated.h"

UCLASS(Blueprintable, Transient, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class EASYANTICHEATCOMMON_API UEasyAntiCheatNetComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UEasyAntiCheatNetComponent();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerMessage(const TArray<uint8>& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientMessage(const TArray<uint8>& Message);
    
};

