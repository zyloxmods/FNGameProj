#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaSeasonalXPCurveEntry.generated.h"

USTRUCT(BlueprintType)
struct FAthenaSeasonalXPCurveEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Level;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpToNextLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpTotal;
    
    FORTNITEGAME_API FAthenaSeasonalXPCurveEntry();
};

