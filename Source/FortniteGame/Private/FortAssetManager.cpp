#include "FortAssetManager.h"

UFortAssetManager::UFortAssetManager() {
    GameDataCommon = NULL;
    GameDataNameCommon = TEXT("/Game/Balance/DefaultGameDataCommon.DefaultGameDataCommon");
    GameDataCosmetics = NULL;
    GameDataNameCosmetics = TEXT("/Game/Balance/DefaultGameDataCosmetics.DefaultGameDataCosmetics");
    GameDataBR = NULL;
    GameDataNameBR = TEXT("/Game/Balance/DefaultGameDataBR.DefaultGameDataBR");
    GameDataSTW = NULL;
    GameDataNameSTW = TEXT("/Game/Balance/DefaultGameDataSTW.DefaultGameDataSTW");
    FastCookTheaterPath = TEXT("/Game/World/Theaters/Theater_TEST_FastCook.Theater_TEST_FastCook");
    PerfMemTheaterPath = TEXT("/Game/World/Theaters/Theater_TEST_PerfMem.Theater_TEST_PerfMem");
    BROnlyTheaterPath = TEXT("/Game/World/Theaters/Theater_Athena.Theater_Athena");
    ActiveTheaterListPath = TEXT("/Game/World/ActiveTheaterList.ActiveTheaterList");
}

