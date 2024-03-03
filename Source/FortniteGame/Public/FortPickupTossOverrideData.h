#pragma once
#include "CoreMinimal.h"
#include "FortPickupTossOverrideData.generated.h"

USTRUCT(BlueprintType)
struct FFortPickupTossOverrideData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsValid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinTossDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxTossDist;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float SpawnDirectionConeHalfAngle;
    
    FORTNITEGAME_API FFortPickupTossOverrideData();
};

