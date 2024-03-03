#pragma once
#include "CoreMinimal.h"
#include "FortAutoFireTargetInterface.h"
#include "FortLockOnTargetInterface.h"
#include "FortStaticMeshActor.h"
#include "FortAthenaTutorialShootingAutofireTarget.generated.h"

UCLASS(Blueprintable)
class AFortAthenaTutorialShootingAutofireTarget : public AFortStaticMeshActor, public IFortLockOnTargetInterface, public IFortAutoFireTargetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAimAssistingTarget;
    
public:
    AFortAthenaTutorialShootingAutofireTarget();
    
    // Fix for true pure virtual functions not being implemented
};

