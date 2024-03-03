#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortRespawnLogicData_Teams.h"
#include "FortAthenaMutator_CustomRespawnLogic.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_CustomRespawnLogic : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData_Teams RespawnSettings;
    
public:
    AFortAthenaMutator_CustomRespawnLogic();
};

