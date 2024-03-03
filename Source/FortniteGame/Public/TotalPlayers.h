#pragma once
#include "CoreMinimal.h"
#include "TotalPlayers.generated.h"

USTRUCT(BlueprintType)
struct FTotalPlayers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Humans;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Bots;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 Total;
    
    FORTNITEGAME_API FTotalPlayers();
};

