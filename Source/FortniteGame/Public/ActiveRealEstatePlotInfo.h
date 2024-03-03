#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ActiveRealEstatePlotInfo.generated.h"

class UFortCreativeRealEstatePlotItemDefinition;

USTRUCT(BlueprintType)
struct FActiveRealEstatePlotInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortCreativeRealEstatePlotItemDefinition* Plot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector position;
    
    FORTNITEGAME_API FActiveRealEstatePlotInfo();
};

