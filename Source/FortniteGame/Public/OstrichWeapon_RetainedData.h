#pragma once
#include "CoreMinimal.h"
#include "OstrichWeapon_RetainedData.generated.h"

USTRUCT(BlueprintType)
struct FOstrichWeapon_RetainedData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LoadedShotgunAmmo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RocketsCooldownElapsed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasPrevious;
    
    FORTNITEGAME_API FOstrichWeapon_RetainedData();
};

