#include "FortAssetManager.h"

UFortAssetManager::UFortAssetManager() {
    this->GameData = NULL;
    this->GameDataName = TEXT("/Game/Balance/DefaultGameData.DefaultGameData");
    this->MobileGameDataName = TEXT("/Game/Balance/MobileGameData.MobileGameData");
    this->AthenaGameData = NULL;
    this->AthenaGameDataName = TEXT("/Game/Balance/AthenaGameData.AthenaGameData");
    this->FastCookTheaterPath = TEXT("/Game/World/Theaters/Theater_TEST_FastCook.Theater_TEST_FastCook");
    this->PerfMemTheaterPath = TEXT("/Game/World/Theaters/Theater_TEST_PerfMem.Theater_TEST_PerfMem");
    this->BROnlyTheaterPath = TEXT("/Game/World/Theaters/Theater_Athena.Theater_Athena");
    this->ActiveTheaterListPath = TEXT("/Game/World/ActiveTheaterList.ActiveTheaterList");
    this->BROnlyLootPackagesExclusionList.AddDefaulted(2);
    this->InstallBundleDelay = 0.00f;
}

