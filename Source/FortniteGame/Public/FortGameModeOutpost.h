#pragma once
#include "CoreMinimal.h"
#include "FortGameModePvE.h"
#include "FortItemEntry.h"
#include "FortOutpostCoreInfo.h"
#include "FortGameModeOutpost.generated.h"

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameModeOutpost : public AFortGameModePvE {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSavePlayerBuiltStructuresAtAllTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortItemEntry> OwnerItemRefundCache;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortOutpostCoreInfo CurrentCoreInfo;
    
public:
    AFortGameModeOutpost();
};

