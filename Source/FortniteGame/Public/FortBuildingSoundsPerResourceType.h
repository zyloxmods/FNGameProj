#pragma once
#include "CoreMinimal.h"
#include "FortBuildingSoundsPerAffiliation.h"
#include "FortBuildingSoundsPerResourceType.generated.h"

USTRUCT(BlueprintType)
struct FFortBuildingSoundsPerResourceType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBuildingSoundsPerAffiliation OnConstruction[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBuildingSoundsPerAffiliation OnGenericDestruction[6];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortBuildingSoundsPerAffiliation OnPlayerBuiltDestruction[6];
    
    FORTNITEGAME_API FFortBuildingSoundsPerResourceType();
};

