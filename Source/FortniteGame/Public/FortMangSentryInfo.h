#pragma once
#include "CoreMinimal.h"
#include "EAlertLevel.h"
#include "FortMangSentryInfo.generated.h"

class ABuildingGameplayActor;

USTRUCT(BlueprintType)
struct FFortMangSentryInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingGameplayActor* Sentry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAlertLevel CurrentSentryAlertLevel;
    
    FORTNITEGAME_API FFortMangSentryInfo();
};

