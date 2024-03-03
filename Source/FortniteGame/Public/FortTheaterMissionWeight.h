#pragma once
#include "CoreMinimal.h"
#include "FortTheaterMissionWeight.generated.h"

class UFortMissionGenerator;

USTRUCT(BlueprintType)
struct FFortTheaterMissionWeight {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UFortMissionGenerator> MissionGenerator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    FORTNITEGAME_API FFortTheaterMissionWeight();
};

