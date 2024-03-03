#pragma once
#include "CoreMinimal.h"
#include "PlayersLeft.generated.h"

USTRUCT(BlueprintType)
struct FPlayersLeft {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Humans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Bots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    FORTNITEGAME_API FPlayersLeft();
};

