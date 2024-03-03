#pragma once
#include "CoreMinimal.h"
#include "TimeOfDayOverride.generated.h"

USTRUCT(BlueprintType)
struct FTimeOfDayOverride {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName PlaylistName;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfDay;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeOfDaySpeed;
    
    FORTNITEGAME_API FTimeOfDayOverride();
};

