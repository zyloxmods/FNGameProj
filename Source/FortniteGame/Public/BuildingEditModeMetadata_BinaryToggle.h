#pragma once
#include "CoreMinimal.h"
#include "BuildingEditModeMetadata.h"
#include "EBinaryToggleValues.h"
#include "BuildingEditModeMetadata_BinaryToggle.generated.h"

UCLASS(Abstract, Blueprintable)
class UBuildingEditModeMetadata_BinaryToggle : public UBuildingEditModeMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<TEnumAsByte<EBinaryToggleValues>> TileData;
    
public:
    UBuildingEditModeMetadata_BinaryToggle();
};

