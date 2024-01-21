#pragma once
#include "CoreMinimal.h"
#include "FortEncounterGroupLimitData.generated.h"

USTRUCT(BlueprintType)
struct FFortEncounterGroupLimitData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DesiredPawnNumCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RemainingDesiredLimit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentEncounterLimit;
    
    FORTNITEGAME_API FFortEncounterGroupLimitData();
};

