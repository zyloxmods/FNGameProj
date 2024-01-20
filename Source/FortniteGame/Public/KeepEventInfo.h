#pragma once
#include "CoreMinimal.h"
#include "KeepEventInfo.generated.h"

class UFortKeepEventInfo;

USTRUCT(BlueprintType)
struct FKeepEventInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortKeepEventInfo> KeepEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DifficultyLevelOffset;
    
    FORTNITEGAME_API FKeepEventInfo();
};

