#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "SpectatorBeaconState.h"
#include "SpectatorBeaconClient.h"
#include "FortSpectatorBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortSpectatorBeaconClient : public ASpectatorBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReconnectionInitialTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReconnectionTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasReconnected;
    
public:
    AFortSpectatorBeaconClient();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReconnectExistingReservation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAbandonExistingReservation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer);
    
public:
   // UFUNCTION(BlueprintCallable, Client, Reliable)
  //  void ClientReconnectResponse(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAllowedToProceedFromReservationTimeout();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAllowedToProceedFromReservation();
    
   // UFUNCTION(BlueprintCallable, Client, Reliable)
   // void ClientAbandonResponse(TEnumAsByte<ESpectatorReservationResult::Type> ReservationResponse);
    
};

