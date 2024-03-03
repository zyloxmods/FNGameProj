#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortAthenaAIBotNameDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FFortAthenaAIBotNameDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString UniqueId;
    
    FORTNITEGAME_API FFortAthenaAIBotNameDataTableRow();
};

