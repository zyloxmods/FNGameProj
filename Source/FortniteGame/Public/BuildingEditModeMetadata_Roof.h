#pragma once
#include "CoreMinimal.h"
#include "AuxiliaryEditTileMeshData.h"
#include "BuildingEditModeMetadata_BinaryToggle.h"
#include "BuildingEditModeMetadata_Roof.generated.h"

UCLASS(Blueprintable)
class UBuildingEditModeMetadata_Roof : public UBuildingEditModeMetadata_BinaryToggle {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAuxiliaryEditTileMeshData> AuxEditTileMeshData;
    
public:
    UBuildingEditModeMetadata_Roof();
};

