#pragma once
#include "CoreMinimal.h"
#include "FortGameModeZone.h"
#include "OnPlayerLoginToFOBDelegate.h"
#include "FortGameModeFOB.generated.h"

class ABuildingFOBConfigActor;

UCLASS(Blueprintable, MinimalAPI, NonTransient)
class AFortGameModeFOB : public AFortGameModeZone {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ABuildingFOBConfigActor* ConfigurationActor;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnPlayerLoginToFOB OnPlayerLoginToFOB;
    
public:
    AFortGameModeFOB();
};

