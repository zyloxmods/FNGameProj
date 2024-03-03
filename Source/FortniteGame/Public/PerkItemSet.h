#pragma once
#include "CoreMinimal.h"
#include "PerkItemSet.generated.h"

class UFortSpyTechItemDefinition;

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FPerkItemSet {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortSpyTechItemDefinition*> Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Time;
    
    FPerkItemSet();
};

