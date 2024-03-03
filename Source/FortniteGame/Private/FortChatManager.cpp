#include "FortChatManager.h"

UFortChatManager::UFortChatManager() {
    this->GlobalChatJoinHelper = NULL;
    this->FoundersChatJoinHelper = NULL;
    this->bShouldJoinGlobalChat = false;
    this->bShouldRequestGeneralChatRooms = false;
    this->bShouldJoinFounderChat = false;
    this->bIsAthenaGlobalChatEnabled = false;
    this->RecommendChatFailureDelay = 0;
    this->RecommendChatBackoffMultiplier = 1;
    this->RecommendChatRandomWindow = 1;
    this->RecommendChatFailureCountCap = 0;
    this->ReserveChatURL = TEXT("/api/game/v2/chat/`accountId/reserveGeneralChatRooms/`subgame/`platform");
    this->GlobalChatName = TEXT("Global");
    this->FounderChatName = TEXT("Founder");
    this->ProfileTokenVerifyURL = TEXT("/api/game/v2/profileToken/verify/`accountId");
}

