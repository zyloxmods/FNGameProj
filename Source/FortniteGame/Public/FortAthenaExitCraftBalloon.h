#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortAthenaExitCraftBalloon.generated.h"

class UPhysicsConstraintComponent;
class UStaticMeshComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API AFortAthenaExitCraftBalloon : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* RootMeshComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPhysicsConstraintComponent* PhysicsComp;
    
    AFortAthenaExitCraftBalloon();
};

