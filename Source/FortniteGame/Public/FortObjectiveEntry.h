#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "EFortObjectiveRequirement.h"
#include "FortObjectiveEntry.generated.h"

class AFortObjectiveBase;
class UFortBadgeItemDefinition;

USTRUCT(BlueprintType)
struct FFortObjectiveEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AFortObjectiveBase> ObjectiveRef;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortBadgeItemDefinition* ObjectiveRewardBadge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortObjectiveRequirement::Type> MissionRequirement;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ObjectiveHandle;
    
    FORTNITEGAME_API FFortObjectiveEntry();
};

