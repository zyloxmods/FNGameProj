#pragma once
#include "CoreMinimal.h"
#include "FortPathFollowingComponent.h"
#include "AthenaPathFollowingComponent.generated.h"

class AAthenaAIController;

UCLASS(Blueprintable, MinimalAPI, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UAthenaPathFollowingComponent : public UFortPathFollowingComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAthenaAIController* AthenaAIController;
    
public:
    UAthenaPathFollowingComponent();
};

