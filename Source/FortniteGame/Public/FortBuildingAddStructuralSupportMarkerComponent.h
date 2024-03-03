#pragma once
#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "Templates/SubclassOf.h"
#include "FortBuildingAddStructuralSupportMarkerComponent.generated.h"

class ABuildingSMActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortBuildingAddStructuralSupportMarkerComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingSMActor> BuildingClass;
    
    UFortBuildingAddStructuralSupportMarkerComponent();
};

