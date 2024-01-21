#pragma once
#include "CoreMinimal.h"
#include "MOBATurretPrioritySetting.generated.h"

USTRUCT(BlueprintType)
struct FMOBATurretPrioritySetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AIPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerPriority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BuildingPriority;
    
    FORTNITEGAME_API FMOBATurretPrioritySetting();
};

