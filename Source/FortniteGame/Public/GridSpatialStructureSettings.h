#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GridSpatialStructureSettings.generated.h"

UCLASS(Blueprintable, Config=Engine, DefaultConfig, Config=Game)
class UGridSpatialStructureSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinCellDimension;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxCellDepth;
    
    UGridSpatialStructureSettings();
};

