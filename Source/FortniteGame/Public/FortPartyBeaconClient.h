#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "PartyBeaconState.h"
#include "PartyBeaconClient.h"
#include "PartyBeaconState.h"
#include "EmptyServerReservation.h"
#include "FortPartyBeaconClient.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortPartyBeaconClient : public APartyBeaconClient {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyServerReservation PendingEmptyReservation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReconnectionInitialTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ReconnectionTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasReconnected;
    
public:
    AFortPartyBeaconClient();
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerReconnectExistingReservation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerEmptyServerReservationRequest(const FString& InSessionId, const FEmptyServerReservation ReservationData, FPartyReservation Reservation);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerAbandonExistingReservation(const FString& InSessionId, FUniqueNetIdRepl RequestingPlayer);
    
public:
  //  UFUNCTION(BlueprintCallable, Client, Reliable)
    //void ClientReconnectResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAllowedToProceedFromReservationTimeout();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientAllowedToProceedFromReservation();
    
 //   UFUNCTION(BlueprintCallable, Client, Reliable)
//    void ClientAbandonResponse(TEnumAsByte<EPartyReservationResult::Type> ReservationResponse);
    
};

