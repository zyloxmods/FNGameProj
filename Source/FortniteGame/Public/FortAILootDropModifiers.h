#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortAIEncounterRequirements.h"
#include "FortAILootDropModifiers.generated.h"

USTRUCT(BlueprintType)
struct FFortAILootDropModifiers {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortAIEncounterRequirements Requirements;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDataTableRowHandle> LootDropModifierRows;
    
    FORTNITEGAME_API FFortAILootDropModifiers();
};

