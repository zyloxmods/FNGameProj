#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortRotationalContentEventsState.generated.h"

USTRUCT(BlueprintType)
struct FFortRotationalContentEventsState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ActiveStorefronts;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FName> ActiveEventFlags;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, double> EventNamedWeights;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSet<FDateTime> ExpirationTimes;
    
    FORTNITEGAME_API FFortRotationalContentEventsState();
};

