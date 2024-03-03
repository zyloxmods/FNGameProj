#include "FortLobbyBeaconClient.h"

void AFortLobbyBeaconClient::ServerToggleIsLobbyTimerPaused_Implementation() {
}
bool AFortLobbyBeaconClient::ServerToggleIsLobbyTimerPaused_Validate() {
    return true;
}

void AFortLobbyBeaconClient::ServerTeamChatRoomReady_Implementation(const FString& ChatRoomId) {
}
bool AFortLobbyBeaconClient::ServerTeamChatRoomReady_Validate(const FString& ChatRoomId) {
    return true;
}

void AFortLobbyBeaconClient::ServerSetMatchmakingLevel_Implementation(const FUniqueNetIdRepl& InUniqueId, const int32 MatchmakingLevel) {
}
bool AFortLobbyBeaconClient::ServerSetMatchmakingLevel_Validate(const FUniqueNetIdRepl& InUniqueId, const int32 MatchmakingLevel) {
    return true;
}

void AFortLobbyBeaconClient::ServerSetHeroType_Implementation(const FUniqueNetIdRepl& InUniqueId, const UFortHeroType* InHeroType) {
}
bool AFortLobbyBeaconClient::ServerSetHeroType_Validate(const FUniqueNetIdRepl& InUniqueId, const UFortHeroType* InHeroType) {
    return true;
}

void AFortLobbyBeaconClient::ServerSetHeroId_Implementation(const FUniqueNetIdRepl& InUniqueId, const FString& InHeroId) {
}
bool AFortLobbyBeaconClient::ServerSetHeroId_Validate(const FUniqueNetIdRepl& InUniqueId, const FString& InHeroId) {
    return true;
}

void AFortLobbyBeaconClient::ServerSetGadget_Implementation(const FUniqueNetIdRepl& InUniqueId, int32 Index, const FString& GadgetPersistentName) {
}
bool AFortLobbyBeaconClient::ServerSetGadget_Validate(const FUniqueNetIdRepl& InUniqueId, int32 Index, const FString& GadgetPersistentName) {
    return true;
}

void AFortLobbyBeaconClient::ServerSetCurrentCharacterXp_Implementation(const FUniqueNetIdRepl& InUniqueId, const int32 CurrentCharacterXp) {
}
bool AFortLobbyBeaconClient::ServerSetCurrentCharacterXp_Validate(const FUniqueNetIdRepl& InUniqueId, const int32 CurrentCharacterXp) {
    return true;
}

void AFortLobbyBeaconClient::ServerSetCosmeticLoadout_Implementation(const FUniqueNetIdRepl& InUniqueId, const FFortAthenaLoadout& InLoadout) {
}
bool AFortLobbyBeaconClient::ServerSetCosmeticLoadout_Validate(const FUniqueNetIdRepl& InUniqueId, const FFortAthenaLoadout& InLoadout) {
    return true;
}

void AFortLobbyBeaconClient::ServerSetConsoleUniqueNetId_Implementation(const FUniqueNetIdRepl& InUniqueId, const FUniqueNetIdRepl& NewConsoleNetId) {
}
bool AFortLobbyBeaconClient::ServerSetConsoleUniqueNetId_Validate(const FUniqueNetIdRepl& InUniqueId, const FUniqueNetIdRepl& NewConsoleNetId) {
    return true;
}

void AFortLobbyBeaconClient::ServerSetCharacterGender_Implementation(const FUniqueNetIdRepl& InUniqueId, EFortCustomGender GenderType) {
}
bool AFortLobbyBeaconClient::ServerSetCharacterGender_Validate(const FUniqueNetIdRepl& InUniqueId, EFortCustomGender GenderType) {
    return true;
}

void AFortLobbyBeaconClient::ServerIncrementHomeBaseVersion_Implementation(const FUniqueNetIdRepl& InUniqueId) {
}
bool AFortLobbyBeaconClient::ServerIncrementHomeBaseVersion_Validate(const FUniqueNetIdRepl& InUniqueId) {
    return true;
}

void AFortLobbyBeaconClient::ClientCreateOrJoinChatRoom_Implementation(const FString& ChatRoomId) {
}

AFortLobbyBeaconClient::AFortLobbyBeaconClient() {
}

