#pragma once
#include "CoreMinimal.h"
#include "FortRequirementsInfo.h"
#include "FortMissionAlertRequirementsInfo.generated.h"

USTRUCT(BlueprintType)
struct FFortMissionAlertRequirementsInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName CategoryName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRequirementsInfo Requirements;
    
    FORTNITEGAME_API FFortMissionAlertRequirementsInfo();
};

