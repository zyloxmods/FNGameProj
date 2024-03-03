#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "FortKeepItemGroup.generated.h"

USTRUCT(BlueprintType)
struct FFortKeepItemGroup : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Items;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxTier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BaseLevel;
    
    FORTNITEGAME_API FFortKeepItemGroup();
};

