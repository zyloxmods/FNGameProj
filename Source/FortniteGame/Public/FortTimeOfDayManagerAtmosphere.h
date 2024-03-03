#pragma once
#include "CoreMinimal.h"
#include "FortTimeOfDayManager.h"
#include "FortTimeOfDayManagerAtmosphere.generated.h"

class USkyAtmosphereComponent;

UCLASS(Blueprintable)
class AFortTimeOfDayManagerAtmosphere : public AFortTimeOfDayManager {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USkyAtmosphereComponent* SkyAtmosphereComponent;
    
public:
    AFortTimeOfDayManagerAtmosphere();
};

