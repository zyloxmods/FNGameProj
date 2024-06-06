#include "FortChatManager.h"

UFortChatManager::UFortChatManager() {
    GlobalChatJoinHelper = NULL;
    FoundersChatJoinHelper = NULL;
    bShouldJoinGlobalChat = false;
    bShouldRequestGeneralChatRooms = false;
    bShouldJoinFounderChat = false;
    bIsAthenaGlobalChatEnabled = false;
    RecommendChatFailureDelay = 0;
    RecommendChatBackoffMultiplier = 1;
    RecommendChatRandomWindow = 1;
    RecommendChatFailureCountCap = 0;
    ReserveChatURL = TEXT("/api/game/v2/chat/`accountId/reserveGeneralChatRooms/`subgame/`platform");
    GlobalChatName = TEXT("Global");
    FounderChatName = TEXT("Founder");
    ProfileTokenVerifyURL = TEXT("/api/game/v2/profileToken/verify/`accountId");
}

