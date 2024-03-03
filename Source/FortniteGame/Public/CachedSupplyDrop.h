#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CachedSupplyDrop.generated.h"

class AFortAthenaSupplyDrop;

USTRUCT(BlueprintType)
struct FCachedSupplyDrop {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaSupplyDrop* SupplyDrop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bInOctree;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector LastLocation;
    
    FORTNITEGAME_API FCachedSupplyDrop();
};

