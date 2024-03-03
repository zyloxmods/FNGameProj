#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "AthenaExtendedXPCurveEntry.generated.h"

USTRUCT(BlueprintType)
struct FAthenaExtendedXPCurveEntry : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpPerLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UntilLevel;
    
    FORTNITEGAME_API FAthenaExtendedXPCurveEntry();
};

