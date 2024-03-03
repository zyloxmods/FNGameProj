#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortEncounterPawnNumberCaps.generated.h"

USTRUCT(BlueprintType)
struct FFortEncounterPawnNumberCaps {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bApplyPawnNumberCaps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCurveTableRowHandle> PawnCapsPerPlayerCount;
    
    FORTNITEGAME_API FFortEncounterPawnNumberCaps();
};

