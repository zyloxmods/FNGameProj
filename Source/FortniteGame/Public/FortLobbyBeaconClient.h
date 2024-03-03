#pragma once
#include "CoreMinimal.h"
#include "GameFramework/OnlineReplStructs.h"
#include "LobbyBeaconClient.h"
#include "EFortCustomGender.h"
#include "FortAthenaLoadout.h"
#include "FortLobbyBeaconClient.generated.h"

class UFortHeroType;

UCLASS(Abstract, Blueprintable, NonTransient)
class AFortLobbyBeaconClient : public ALobbyBeaconClient {
    GENERATED_BODY()
public:
    AFortLobbyBeaconClient();
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerToggleIsLobbyTimerPaused();
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerTeamChatRoomReady(const FString& ChatRoomId);
    
protected:
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetMatchmakingLevel(const FUniqueNetIdRepl& InUniqueId, const int32 MatchmakingLevel);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetHeroType(const FUniqueNetIdRepl& InUniqueId, const UFortHeroType* InHeroType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetHeroId(const FUniqueNetIdRepl& InUniqueId, const FString& InHeroId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetGadget(const FUniqueNetIdRepl& InUniqueId, int32 Index, const FString& GadgetPersistentName);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCurrentCharacterXp(const FUniqueNetIdRepl& InUniqueId, const int32 CurrentCharacterXp);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCosmeticLoadout(const FUniqueNetIdRepl& InUniqueId, const FFortAthenaLoadout& InLoadout);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetConsoleUniqueNetId(const FUniqueNetIdRepl& InUniqueId, const FUniqueNetIdRepl& NewConsoleNetId);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerSetCharacterGender(const FUniqueNetIdRepl& InUniqueId, EFortCustomGender GenderType);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void ServerIncrementHomeBaseVersion(const FUniqueNetIdRepl& InUniqueId);
    
public:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientCreateOrJoinChatRoom(const FString& ChatRoomId);
    
};

