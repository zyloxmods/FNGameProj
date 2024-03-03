#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "FortMission.h"
#include "Templates/SubclassOf.h"
#include "FortMissionAircraft.generated.h"

class AFortAircraft;

UCLASS(Blueprintable)
class AFortMissionAircraft : public AFortMission {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAircraft* Aircraft;
    
public:
    AFortMissionAircraft();
private:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    AFortAircraft* CreateAircraft(const FTransform SpawnTransform, TSubclassOf<AFortAircraft> AircraftClass);
    
};

