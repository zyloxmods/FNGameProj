#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EFortCardinalDirection.h"
#include "FortAnimInput_Zipline.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimInput_Zipline {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bIsZiplining: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    uint8 bShouldPlayPivotTransition: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float LeanYaw;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PivotBlendDelayRemaining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    float PivotBlendDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EFortCardinalDirection PivotCardinalDirection;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector WorldVelocityLastTick;
    
    FORTNITEGAME_API FFortAnimInput_Zipline();
};

