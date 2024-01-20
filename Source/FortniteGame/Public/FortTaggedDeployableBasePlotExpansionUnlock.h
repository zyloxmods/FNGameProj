#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortTaggedUnlockBase.h"
#include "FortTaggedDeployableBasePlotExpansionUnlock.generated.h"

USTRUCT(BlueprintType)
struct FFortTaggedDeployableBasePlotExpansionUnlock : public FFortTaggedUnlockBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntVector CellExpansionVector;
    
    FORTNITEGAME_API FFortTaggedDeployableBasePlotExpansionUnlock();
};

