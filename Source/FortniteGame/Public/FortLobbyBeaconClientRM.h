#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortLobbyBeaconClient.h"
#include "OnReadiedUpStatusChangedDelegate.h"
#include "OnUpdateLobbyPlayerPadTopDelegate.h"
#include "FortLobbyBeaconClientRM.generated.h"

UCLASS(Blueprintable, NonTransient)
class AFortLobbyBeaconClientRM : public AFortLobbyBeaconClient {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnReadiedUpStatusChanged LocalReadiedUpStatusChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnUpdateLobbyPlayerPadTop OnUpdateLobbyPlayerPadTop;
    
public:
    AFortLobbyBeaconClientRM();
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateNewlyJoinedPlayer();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetLocalReadyStatus(bool bIsReady);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateReadyStatus(bool bIsReady);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerUpdateNewlyJoinedPlayerInternal();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientBroadcastLobbyPlayerPadTop(const FUniqueNetIdRepl& ReadiedPlayer, bool bIsReadiedUp) const;
    
};

