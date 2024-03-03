#include "FortTaggedTestManager.h"
#include "FortTaggedAssetTest_Base.h"

UFortTaggedTestManager::UFortTaggedTestManager() {
    this->bIsFinished = false;
    this->bInitialized = false;
    this->bTerminateEarly = false;
    this->bPendingReset = false;
    this->TestIterator = 0;
    this->AssetTypesToTest.AddDefaulted(3);
    this->TargetTestBaseClass = UFortTaggedAssetTest_Base::StaticClass();
}

