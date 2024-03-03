#pragma once
#include "CoreMinimal.h"
#include "NitrogenRespawnData.generated.h"

class AFortSquadStart;

USTRUCT(BlueprintType)
struct FNitrogenRespawnData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortSquadStart* RespawnSquadStart;
    
    NITROGENRUNTIME_API FNitrogenRespawnData();
};

