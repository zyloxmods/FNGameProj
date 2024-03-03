#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/StaticMeshActor.h"
#include "LevelSaveSpawnable.h"
#include "FortStaticMeshActor.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortStaticMeshActor : public AStaticMeshActor, public ILevelSaveSpawnable {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 LinkCompCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseAutoNavmeshFlags;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavedActorGuid;
    
public:
    AFortStaticMeshActor();
    
    // Fix for true pure virtual functions not being implemented
};

