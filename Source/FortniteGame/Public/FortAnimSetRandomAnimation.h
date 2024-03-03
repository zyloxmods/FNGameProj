#pragma once
#include "CoreMinimal.h"
#include "AnimNodes/AnimNode_RandomPlayer.h"
#include "GameplayTagContainer.h"
#include "FortAnimSetRandomAnimation.generated.h"

USTRUCT(BlueprintType)
struct FFortAnimSetRandomAnimation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagQuery Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandomPlayerSequenceEntry RandomEntry;
    
    FORTNITEGAME_API FFortAnimSetRandomAnimation();
};

