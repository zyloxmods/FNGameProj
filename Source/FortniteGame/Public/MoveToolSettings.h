#pragma once
#include "CoreMinimal.h"
#include "MoveToolSettings.generated.h"

USTRUCT(BlueprintType)
struct FMoveToolSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAllowGravityOnPlace;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsScalingInsteadOfRotating;
    
    FORTNITEGAME_API FMoveToolSettings();
};

