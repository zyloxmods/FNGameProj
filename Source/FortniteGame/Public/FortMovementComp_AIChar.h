#pragma once
#include "CoreMinimal.h"
#include "FortMovementComp_Character.h"
#include "FortMovementComp_AIChar.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortMovementComp_AIChar : public UFortMovementComp_Character {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDeimos: 1;
    
public:
    UFortMovementComp_AIChar();
};

