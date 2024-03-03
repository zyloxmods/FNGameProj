#pragma once
#include "CoreMinimal.h"
#include "RiftDamagerInfo.generated.h"

class ABuildingRift;
class AController;

USTRUCT(BlueprintType)
struct FRiftDamagerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingRift* Rift;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<AController*> Damagers;
    
    FORTNITEGAME_API FRiftDamagerInfo();
};

