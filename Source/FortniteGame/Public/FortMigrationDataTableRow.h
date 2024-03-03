#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortMigrationDataTableRow.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortMigrationDataTableRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString OldItemTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NewItemTemplate;
    
    FFortMigrationDataTableRow();
};

