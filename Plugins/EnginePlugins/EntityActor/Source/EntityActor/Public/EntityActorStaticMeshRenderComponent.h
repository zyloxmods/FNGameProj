#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EntityEnableableComponent.h"
#include "EntityActorStaticMeshRenderComponent.generated.h"

class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorStaticMeshRenderComponent : public UEntityEnableableComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* ShadowVar_StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> ShadowVar_MeshMaterials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> ShadowVar_EnableCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 TargetMeshIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 ShadowVar_Visible: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ShadowVar_MaxDrawDistance;
    
public:
    UEntityActorStaticMeshRenderComponent();
};

