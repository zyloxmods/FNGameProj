#include "FortChatManager.h"

UFortChatManager::UFortChatManager() {
    this->GlobalChatJoinHelper = NULL;
    this->FoundersChatJoinHelper = NULL;
    this->bShouldJoinGlobalChat = true;
    this->bShouldRequestGeneralChatRooms = true;
    this->bShouldJoinFounderChat = true;
    this->bIsAthenaGlobalChatEnabled = true;
    this->RecommendChatFailureDelay = 30;
    this->RecommendChatBackoffMultiplier = 2.00f;
    this->RecommendChatRandomWindow = 120.00f;
    this->RecommendChatFailureCountCap = 7;
    this->ReserveChatURL = TEXT("/api/game/v2/chat/`accountId/reserveGeneralChatRooms/`subgame/`platform");
    this->GlobalChatName = TEXT("Global");
    this->FounderChatName = TEXT("Founder");
    this->ProfileTokenVerifyURL = TEXT("/api/game/v2/profileToken/verify/`accountId");
}

