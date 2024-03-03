#pragma once
#include "CoreMinimal.h"
#include "FortPathFollowingComponentBase.h"
#include "FortAthenaAIBotPathFollowingComponent.generated.h"

class ABuildingActor;
class AFortAthenaAIBotController;
class UFortAthenaAIBotMovementDigestedSkillSet;
class UFortAthenaAIBotUnstuckDigestedSkillSet;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortAthenaAIBotPathFollowingComponent : public UFortPathFollowingComponentBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* BotController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingActor* HitBuilding;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotUnstuckDigestedSkillSet* CachedUnstuckSkillSet;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortAthenaAIBotMovementDigestedSkillSet* CachedMovementSkillSet;
    
public:
    UFortAthenaAIBotPathFollowingComponent();
};

