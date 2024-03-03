#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "FortAthenaPatrolPoint.generated.h"

class AFortAthenaLocalGameplayBehavior;

UCLASS(Blueprintable)
class AFortAthenaPatrolPoint : public AActor {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaLocalGameplayBehavior* LocalGameplayBehavior;
    
public:
    AFortAthenaPatrolPoint();
};

