#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildingEditModeSupport.h"
#include "EBinaryToggleValues.h"
#include "BuildingEditModeSupport_BinaryToggle.generated.h"

class UBuildingEditModeMetadata_BinaryToggle;

UCLASS(Abstract, Blueprintable)
class UBuildingEditModeSupport_BinaryToggle : public UBuildingEditModeSupport {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBuildingEditModeMetadata_BinaryToggle* BinaryTogglePreviewData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EBinaryToggleValues> CurToggleAction;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLinearColor DefaultBlueTileColor;
    
public:
    UBuildingEditModeSupport_BinaryToggle();
};

