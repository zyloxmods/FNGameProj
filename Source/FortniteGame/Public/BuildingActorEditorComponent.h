#pragma once
#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "BuildingActorEditorComponent.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UBuildingActorEditorComponent : public UStaticMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMaterialInterface> CurrentlySnappedMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UStaticMesh> CubeMesh;
    
    UBuildingActorEditorComponent();
};

