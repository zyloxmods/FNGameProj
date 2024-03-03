#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "QueuedFlushNetDormancyInfo.h"
#include "BuildingFlushManager.generated.h"

UCLASS(Blueprintable)
class UBuildingFlushManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FQueuedFlushNetDormancyInfo> FlushNetDormancyQueue;
    
public:
    UBuildingFlushManager();
};

