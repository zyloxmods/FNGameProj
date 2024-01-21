#pragma once
#include "CoreMinimal.h"
#include "EFortTeam.h"
#include "FortObjectiveBase.h"
#include "FortPvPObjective.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class AFortPvPObjective : public AFortObjectiveBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EFortTeam::Type> Team;
    
public:
    AFortPvPObjective();
};

