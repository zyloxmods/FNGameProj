#pragma once
#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "LevelSaveSpawnable.h"
#include "FortStaticMeshActor.generated.h"

class UNavRelevantComponent;

UCLASS(Blueprintable, MinimalAPI)
class AFortStaticMeshActor : public AStaticMeshActor, public ILevelSaveSpawnable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TArray<UNavRelevantComponent*> LinkComps;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAutoNavmeshFlags;
    
    AFortStaticMeshActor();
    
    // Fix for true pure virtual functions not being implemented
};

