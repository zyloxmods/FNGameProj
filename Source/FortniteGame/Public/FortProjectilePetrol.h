#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortProjectileBase.h"
#include "Templates/SubclassOf.h"
#include "FortProjectilePetrol.generated.h"

class AActor;
class ABuildingGameplayActorPetrol;
class AFortSplineGroundPath;

UCLASS(Blueprintable)
class AFortProjectilePetrol : public AFortProjectileBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FuelAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ABuildingGameplayActorPetrol> PetrolTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AFortSplineGroundPath> FortSplineGroundPathTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bImpacted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaxLifeSpanOnCollision;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float GroundSlopeAngleThreshold;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FVector CachedImpactDir;
    
    UPROPERTY(EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AActor> SplatterSourceActor;
    
public:
    AFortProjectilePetrol();
};

