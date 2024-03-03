#pragma once
#include "CoreMinimal.h"
#include "FortMovementComp_Character.h"
#include "FortMovementComp_AIChar.generated.h"

class AAthenaAIController;
class UAthenaPathFollowingComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMovementComp_AIChar : public UFortMovementComp_Character {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDeimos: 1;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UAthenaPathFollowingComponent* CachedAthenaPathFollowingComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AAthenaAIController* CachedAthenaAIController;
    
public:
    UFortMovementComp_AIChar();
};

