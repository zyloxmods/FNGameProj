#pragma once
#include "CoreMinimal.h"
#include "BuildingEditModeSupport_BinaryToggle.h"
#include "TileCompInterpData.h"
#include "BuildingEditModeSupport_Roof.generated.h"

UCLASS(Blueprintable)
class UBuildingEditModeSupport_Roof : public UBuildingEditModeSupport_BinaryToggle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FTileCompInterpData> TileInterpData;
    
public:
    UBuildingEditModeSupport_Roof();
};

