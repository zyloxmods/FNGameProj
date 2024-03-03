#pragma once
#include "CoreMinimal.h"
#include "TeamSetupDataEntry.generated.h"

class UCustomCharacterPart;

USTRUCT(BlueprintType)
struct FTeamSetupDataEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TeamNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UCustomCharacterPart*> PartsToSwapIn;
    
    FORTNITEGAME_API FTeamSetupDataEntry();
};

