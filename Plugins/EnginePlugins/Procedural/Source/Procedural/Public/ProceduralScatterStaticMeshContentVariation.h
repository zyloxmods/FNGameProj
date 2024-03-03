#pragma once
#include "CoreMinimal.h"
#include "EProceduralScatterStaticMeshMode.h"
#include "ProceduralScatterContentVariation.h"
#include "Templates/SubclassOf.h"
#include "ProceduralScatterStaticMeshContentVariation.generated.h"

class AActor;
class UHISMBuilderSettings;
class UMaterialInterface;
class UStaticMesh;

UCLASS(Blueprintable, MinimalAPI)
class UProceduralScatterStaticMeshContentVariation : public UProceduralScatterContentVariation {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EProceduralScatterStaticMeshMode StaticMeshMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* Mesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> ActorClass;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UHISMBuilderSettings* OverrideInstancingSettings;
    
    UProceduralScatterStaticMeshContentVariation();
};

