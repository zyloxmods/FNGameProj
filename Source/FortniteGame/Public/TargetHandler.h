#pragma once
#include "CoreMinimal.h"
#include "TargetInfo.h"
#include "TargetHandler.generated.h"

USTRUCT(BlueprintType)
struct FTargetHandler {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTargetInfo> Targets;
    
public:
    FORTNITEGAME_API FTargetHandler();
};

