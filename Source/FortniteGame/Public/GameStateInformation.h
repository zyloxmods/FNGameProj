#pragma once
#include "CoreMinimal.h"
#include "GameMemberInfoArray.h"
#include "GameStateInformation.generated.h"

USTRUCT(BlueprintType)
struct FGameStateInformation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameMemberInfoArray PlayerInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsTeamBasedGame;
    
    FORTNITEGAME_API FGameStateInformation();
};

