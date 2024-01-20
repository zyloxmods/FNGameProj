#pragma once
#include "CoreMinimal.h"
#include "Engine/NetSerialization.h"
#include "MinigameScoreEntry.h"
#include "MinigameScoreArray.generated.h"

class AActor;

USTRUCT(BlueprintType)
struct FMinigameScoreArray : public FFastArraySerializer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinigameScoreEntry> Scores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMinigameScoreEntry> HighScores;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* Owner;
    
    FORTNITEGAME_API FMinigameScoreArray();
};

