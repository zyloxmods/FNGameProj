#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_RandomPlayer.h"
#include "GameplayTagContainer.h"
#include "FortAnimNode_AnimSetDrivenRandom.generated.h"

class UFortAnimSet;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortAnimNode_AnimSetDrivenRandom : public FAnimNode_RandomPlayer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag RandomSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortAnimSet* AnimSet;
    
    FFortAnimNode_AnimSetDrivenRandom();
};

