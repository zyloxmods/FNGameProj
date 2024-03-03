#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortInspectorCameraCreative.h"
#include "LevelSaveSpawnable.h"
#include "FortInspectorCameraCreativePreview.generated.h"

UCLASS(Blueprintable)
class AFortInspectorCameraCreativePreview : public AFortInspectorCameraCreative, public ILevelSaveSpawnable {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavedActorGuid;
    
public:
    AFortInspectorCameraCreativePreview();
    
    // Fix for true pure virtual functions not being implemented
};

