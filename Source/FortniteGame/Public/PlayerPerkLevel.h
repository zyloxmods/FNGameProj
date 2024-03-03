#pragma once
#include "CoreMinimal.h"
#include "PlayerPerkLevel.generated.h"

class UFortSpyTechItemDefinition;

USTRUCT(BlueprintType)
struct FPlayerPerkLevel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSpyTechItemDefinition*> PlayerPerks;
    
    FORTNITEGAME_API FPlayerPerkLevel();
};

