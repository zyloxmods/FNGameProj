#include "FortTaggedTestManager.h"
#include "FortTaggedAssetTest_Base.h"

UFortTaggedTestManager::UFortTaggedTestManager() {
    bIsFinished = false;
    bInitialized = false;
    bTerminateEarly = false;
    bPendingReset = false;
    TestIterator = 0;
    AssetTypesToTest.AddDefaulted(3);
    TargetTestBaseClass = UFortTaggedAssetTest_Base::StaticClass();
}

