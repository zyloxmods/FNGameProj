#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Interface.h"
#include "FortSpawnableByPlacementSystemInterface.generated.h"

class AFortMission;

UINTERFACE(BlueprintType, meta=(CannotImplementInterfaceInBlueprint))
class FORTNITEGAME_API UFortSpawnableByPlacementSystemInterface : public UInterface {
    GENERATED_BODY()
};

class FORTNITEGAME_API IFortSpawnableByPlacementSystemInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual FGuid GetMissionGuid() const PURE_VIRTUAL(GetMissionGuid, return FGuid{};);
    
    UFUNCTION(BlueprintCallable)
    virtual AFortMission* GetMission() const PURE_VIRTUAL(GetMission, return NULL;);
    
};

