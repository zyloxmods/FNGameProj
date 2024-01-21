#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "MissionGenerationInfo.generated.h"

USTRUCT(BlueprintType)
struct FMissionGenerationInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumMissionsRequired;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxMissionsAllowed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 NumMissionsGeneratedMatchingRequirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery MissionTagRequirements;
    
    FORTNITEGAME_API FMissionGenerationInfo();
};

