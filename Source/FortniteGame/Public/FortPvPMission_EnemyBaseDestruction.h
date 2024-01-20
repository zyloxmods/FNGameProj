#pragma once
#include "CoreMinimal.h"
#include "EFortTeam.h"
#include "FortPvPMission.h"
#include "FortPvPMission_EnemyBaseDestruction.generated.h"

class AFortPvPBaseCornerstone;

UCLASS(Blueprintable, MinimalAPI)
class AFortPvPMission_EnemyBaseDestruction : public AFortPvPMission {
    GENERATED_BODY()
public:
    AFortPvPMission_EnemyBaseDestruction();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFortPvPBaseCornerstone* GetCornerstoneForTeam(TEnumAsByte<EFortTeam::Type> InTeam);
    
};

