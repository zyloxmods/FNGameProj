#pragma once
#include "CoreMinimal.h"
#include "CharacterPreloadBlock.generated.h"

class UAthenaCharacterItemDefinition;

USTRUCT(BlueprintType)
struct FCharacterPreloadBlock {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldGoInNPCBudget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAthenaCharacterItemDefinition> CID;
    
    FORTNITEGAME_API FCharacterPreloadBlock();
};

