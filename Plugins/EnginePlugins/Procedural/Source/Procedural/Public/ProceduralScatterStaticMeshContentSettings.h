#pragma once
#include "CoreMinimal.h"
#include "ProceduralScatterContentSettings.h"
#include "Templates/SubclassOf.h"
#include "ProceduralScatterStaticMeshContentSettings.generated.h"

class UFoliageInstancedStaticMeshComponent;
class UHISMBuilderSettings;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class UProceduralScatterStaticMeshContentSettings : public UProceduralScatterContentSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFoliageInstancedStaticMeshComponent> ComponentClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ComponentTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UHISMBuilderSettings* VariationsInstancingSettings;
    
    UProceduralScatterStaticMeshContentSettings();
};

