#pragma once
#include "CoreMinimal.h"
#include "Engine/CurveTable.h"
#include "OutpostPOSTBoost.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FOutpostPOSTBoost {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCurveTableRowHandle PlayerStructureHealthModPerPOSTLevel;
    
    FOutpostPOSTBoost();
};

