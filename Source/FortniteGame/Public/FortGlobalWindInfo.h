#pragma once
#include "CoreMinimal.h"
#include "FortWindIntensityAndDirection.h"
#include "FortGlobalWindInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortGlobalWindInfo {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortWindIntensityAndDirection> ValidWindInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 WindIndex;
    
public:
    FORTNITEGAME_API FFortGlobalWindInfo();
};

