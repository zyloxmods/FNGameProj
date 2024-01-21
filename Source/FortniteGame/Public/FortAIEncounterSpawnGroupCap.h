#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "FortAIEncounterSpawnGroupCap.generated.h"

USTRUCT(BlueprintType)
struct FFortAIEncounterSpawnGroupCap {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle MinSpawnGroupNumberCap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle MaxSpawnGroupNumberCap;
    
    FORTNITEGAME_API FFortAIEncounterSpawnGroupCap();
};

