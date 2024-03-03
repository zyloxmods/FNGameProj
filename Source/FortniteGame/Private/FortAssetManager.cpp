#include "FortAssetManager.h"

UFortAssetManager::UFortAssetManager() {
    this->GameDataCommon = NULL;
    this->GameDataNameCommon = TEXT("/Game/Balance/DefaultGameDataCommon.DefaultGameDataCommon");
    this->GameDataCosmetics = NULL;
    this->GameDataNameCosmetics = TEXT("/Game/Balance/DefaultGameDataCosmetics.DefaultGameDataCosmetics");
    this->GameDataBR = NULL;
    this->GameDataNameBR = TEXT("/Game/Balance/DefaultGameDataBR.DefaultGameDataBR");
    this->GameDataSTW = NULL;
    this->GameDataNameSTW = TEXT("/Game/Balance/DefaultGameDataSTW.DefaultGameDataSTW");
    this->FastCookTheaterPath = TEXT("/Game/World/Theaters/Theater_TEST_FastCook.Theater_TEST_FastCook");
    this->PerfMemTheaterPath = TEXT("/Game/World/Theaters/Theater_TEST_PerfMem.Theater_TEST_PerfMem");
    this->BROnlyTheaterPath = TEXT("/Game/World/Theaters/Theater_Athena.Theater_Athena");
    this->ActiveTheaterListPath = TEXT("/Game/World/ActiveTheaterList.ActiveTheaterList");
}

