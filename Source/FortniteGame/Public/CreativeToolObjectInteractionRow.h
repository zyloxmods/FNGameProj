#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "CreativeToolObjectInteractionRow.generated.h"

class UDataTable;

USTRUCT(BlueprintType)
struct FCreativeToolObjectInteractionRow : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* AllowedClasses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* ForbiddenClasses;
    
    FORTNITEGAME_API FCreativeToolObjectInteractionRow();
};

