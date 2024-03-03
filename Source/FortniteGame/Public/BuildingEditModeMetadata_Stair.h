#pragma once
#include "CoreMinimal.h"
#include "BuildingEditModeMetadata.h"
#include "BuildingEditModeMetadata_Stair.generated.h"

UCLASS(Blueprintable)
class UBuildingEditModeMetadata_Stair : public UBuildingEditModeMetadata {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta=(AllowPrivateAccess=true))
    TArray<int32> TileData;
    
public:
    UBuildingEditModeMetadata_Stair();
};

