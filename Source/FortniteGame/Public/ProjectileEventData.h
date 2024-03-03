#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineTypes.h"
#include "ProjectileEventData.generated.h"

class AActor;
class AFortProjectileBase;

USTRUCT(BlueprintType)
struct FProjectileEventData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortProjectileBase* SpawnedProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHitResult> Hits;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<AActor*> ExplodedActors;
    
    FORTNITEGAME_API FProjectileEventData();
};

