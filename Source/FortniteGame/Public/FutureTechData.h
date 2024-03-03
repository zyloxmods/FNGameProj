#pragma once
#include "CoreMinimal.h"
#include "FutureTechData.generated.h"

class UFortSpyTechItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFutureTechData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UnlockLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 XpToGetThisLevelFromRoundStartLevel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SingleLevelRequiredXp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortSpyTechItemDefinition* PerkItemDef;
    
    FFutureTechData();
};

