#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "DynaimcLevelStreamingLocations.generated.h"

USTRUCT(BlueprintType)
struct FDynaimcLevelStreamingLocations {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FTransform LoadLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FName StreamingLevelPackageName;
    
    FORTNITEGAME_API FDynaimcLevelStreamingLocations();
};

