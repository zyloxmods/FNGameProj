#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "TeamFOBRequiredTags.generated.h"

USTRUCT(BlueprintType)
struct FTeamFOBRequiredTags {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer RequiredFOBSpawnTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Team;
    
    FORTNITEGAME_API FTeamFOBRequiredTags();
};

