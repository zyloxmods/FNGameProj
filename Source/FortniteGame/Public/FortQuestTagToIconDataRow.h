#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortQuestTagToIconDataRow.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FFortQuestTagToIconDataRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> Icon;
    
    FORTNITEGAME_API FFortQuestTagToIconDataRow();
};

