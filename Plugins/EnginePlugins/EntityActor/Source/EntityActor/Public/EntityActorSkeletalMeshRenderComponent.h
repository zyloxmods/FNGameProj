#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "EntityComponent.h"
#include "EntityActorSkeletalMeshRenderComponent.generated.h"

class USkeletalMesh;

UCLASS(Blueprintable)
class ENTITYACTOR_API UEntityActorSkeletalMeshRenderComponent : public UEntityComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USkeletalMesh* ShadowVar_SkeletalMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ECollisionEnabled::Type> ShadowVar_EnableCollision;
    
public:
    UEntityActorSkeletalMeshRenderComponent();
};

