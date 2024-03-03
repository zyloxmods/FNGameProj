#pragma once
#include "CoreMinimal.h"
#include "BuildingGameplayActor.h"
#include "FortAutoFireTargetInterface.h"
#include "FortLockOnTargetInterface.h"
#include "AthenaSuperDingo.generated.h"

UCLASS(Blueprintable)
class AAthenaSuperDingo : public ABuildingGameplayActor, public IFortLockOnTargetInterface, public IFortAutoFireTargetInterface {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIsAutoFireTarget;
    
public:
    AAthenaSuperDingo();
    
    // Fix for true pure virtual functions not being implemented
};

