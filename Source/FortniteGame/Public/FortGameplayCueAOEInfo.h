#pragma once
#include "CoreMinimal.h"
#include "FortGameplayCueAOEInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortGameplayCueAOEInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float InnerRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float OuterRadius;
    
    FORTNITEGAME_API FFortGameplayCueAOEInfo();
};

