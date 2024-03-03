#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "ChangeTeamInfo.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FChangeTeamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AActor* Instigator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer ChangeTeamTags;
    
    FORTNITEGAME_API FChangeTeamInfo();
};

