#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortKeepItemGroup.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEGAME_API FFortKeepItemGroup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseLevel;
    
    FFortKeepItemGroup();
};

