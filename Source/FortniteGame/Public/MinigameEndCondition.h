#pragma once
#include "CoreMinimal.h"
#include "EMinigameTeamListType.h"
#include "FortMinigameStatQuery.h"
#include "MinigameEndCondition.generated.h"

USTRUCT(BlueprintType)
struct FMinigameEndCondition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortMinigameStatQuery StatQuery;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMinigameTeamListType TeamListType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<uint8> TeamList;
    
    FORTNITEGAME_API FMinigameEndCondition();
};

