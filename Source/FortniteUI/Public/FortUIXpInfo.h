#pragma once
#include "CoreMinimal.h"
#include "FortExperienceDelta.h"
#include "FortUIXpInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortUIXpInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 InitialDisplayXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortExperienceDelta ChangeInXp;
    
    FORTNITEUI_API FFortUIXpInfo();
};

