#pragma once
#include "CoreMinimal.h"
#include "FortPathFollowingComponentBase.h"
#include "FortAthenaAIBotPathFollowingComponent.generated.h"

class ABuildingActor;
class AFortAthenaAIBotController;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaAIBotPathFollowingComponent : public UFortPathFollowingComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* BotController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABuildingActor* HitBuilding;
    
    UFortAthenaAIBotPathFollowingComponent();
};

