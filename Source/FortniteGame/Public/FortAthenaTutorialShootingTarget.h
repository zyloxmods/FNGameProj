#pragma once
#include "CoreMinimal.h"
#include "BuildingProp.h"
#include "FortAutoFireTargetInterface.h"
#include "FortLockOnTargetInterface.h"
#include "FortAthenaTutorialShootingTarget.generated.h"

UCLASS(Blueprintable)
class AFortAthenaTutorialShootingTarget : public ABuildingProp, public IFortLockOnTargetInterface, public IFortAutoFireTargetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAimAssistingTarget;
    
public:
    AFortAthenaTutorialShootingTarget();
    
    // Fix for true pure virtual functions not being implemented
};

