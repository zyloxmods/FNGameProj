#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/DataTable.h"
#include "FortQuestTagToLocationDataRow.generated.h"

USTRUCT(BlueprintType)
struct FFortQuestTagToLocationDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector WorldLocation;
    
    FORTNITEGAME_API FFortQuestTagToLocationDataRow();
};

