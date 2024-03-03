#pragma once
#include "CoreMinimal.h"
#include "AthenaVehicleOverride.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FAthenaVehicleOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RequiredCalendarEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> DefaultVehicleClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AActor> OverrideVehicleClass;
    
    FORTNITEGAME_API FAthenaVehicleOverride();
};

