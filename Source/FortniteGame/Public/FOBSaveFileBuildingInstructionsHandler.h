#pragma once
#include "CoreMinimal.h"
#include "FortSaveFileBuildingInstructionsHandler.h"
#include "FOBSaveFileBuildingInstructionsHandler.generated.h"

UCLASS(Blueprintable)
class AFOBSaveFileBuildingInstructionsHandler : public AFortSaveFileBuildingInstructionsHandler {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float BuildingPieceConstructionTime;
    
public:
    AFOBSaveFileBuildingInstructionsHandler();
};

