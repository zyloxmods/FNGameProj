#pragma once
#include "CoreMinimal.h"
#include "FortTaggedSoundCue.h"
#include "TaggedSoundBankResponseList.generated.h"

USTRUCT(BlueprintType)
struct FTaggedSoundBankResponseList {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTaggedSoundCue> CueList;
    
    FORTNITEGAME_API FTaggedSoundBankResponseList();
};

