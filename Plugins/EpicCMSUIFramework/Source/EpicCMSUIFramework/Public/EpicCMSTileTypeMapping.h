#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EpicCMSTileTypeMapping.generated.h"

class UEpicCMSTileBase;

USTRUCT(BlueprintType)
struct FEpicCMSTileTypeMapping : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UEpicCMSTileBase> TileClass;
    
    EPICCMSUIFRAMEWORK_API FEpicCMSTileTypeMapping();
};

