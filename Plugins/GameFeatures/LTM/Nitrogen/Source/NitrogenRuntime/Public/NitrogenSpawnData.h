#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "NitrogenSpawnData.generated.h"

class AFortSquadStart;

USTRUCT(BlueprintType)
struct FNitrogenSpawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 SquadId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector AdditionalViewpointLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    AFortSquadStart* SpawnSquadStart;
    
    NITROGENRUNTIME_API FNitrogenSpawnData();
};

