#pragma once
#include "CoreMinimal.h"
#include "FortSpokenLine.h"
#include "FortPawnVocalChord.generated.h"

class UAudioComponent;

USTRUCT(BlueprintType)
struct FFortPawnVocalChord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAudioComponent* FeedbackAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortSpokenLine ReplicatedSpokenLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FFortSpokenLine PendingSpokenLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FFortSpokenLine QueuedSpokenLine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NotReplicated, meta=(AllowPrivateAccess=true))
    FFortSpokenLine CurrentSpokenLine;
    
    FORTNITEGAME_API FFortPawnVocalChord();
};

