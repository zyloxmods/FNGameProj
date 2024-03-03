#pragma once
#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "FortAnimInput_PlayerGliderAnimAsset.h"
#include "FortTagToGliderAnimSetPair.generated.h"

USTRUCT(BlueprintType)
struct FFortTagToGliderAnimSetPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTag MatchingTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAnimInput_PlayerGliderAnimAsset OverrideAnimAsset;
    
    FORTNITEGAME_API FFortTagToGliderAnimSetPair();
};

