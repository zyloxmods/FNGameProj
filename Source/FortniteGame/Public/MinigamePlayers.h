#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MinigamePlayer.h"
#include "MinigamePlayers.generated.h"

class AFortMinigame;

USTRUCT(BlueprintType)
struct FMinigamePlayers : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinigamePlayer> Players;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    AFortMinigame* Owner;
    
    FORTNITEGAME_API FMinigamePlayers();
};

