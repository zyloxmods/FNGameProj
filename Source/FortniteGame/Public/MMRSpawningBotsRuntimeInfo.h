#pragma once
#include "CoreMinimal.h"
#include "MMRSpawningBaseRuntimeInfo.h"
#include "MMRSpawningBotsRuntimeInfo.generated.h"

class UBotELOSpawningInfo;

USTRUCT(BlueprintType)
struct FMMRSpawningBotsRuntimeInfo : public FMMRSpawningBaseRuntimeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UBotELOSpawningInfo*> ELOSpawningInfos;
    
    FORTNITEGAME_API FMMRSpawningBotsRuntimeInfo();
};

