#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "InfiltrationTeamInfo.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FInfiltrationTeamInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag TeamTag;
    
    FInfiltrationTeamInfo();
};

