#pragma once
#include "CoreMinimal.h"
#include "FortPlayerControllerPvE.h"
#include "FortPlayerControllerManor.generated.h"

class AManorPortal;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortPlayerControllerManor : public AFortPlayerControllerPvE {
    GENERATED_BODY()
public:
    AFortPlayerControllerManor();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerOnUnlockPortalComplete(AManorPortal* ManorPortal);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOpenManorPortalUnlockMenu(AManorPortal* ManorPortal);
    
};

