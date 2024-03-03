#pragma once
#include "CoreMinimal.h"
#include "FortAthenaMutator.h"
#include "FortRespawnLogicData_Teams.h"
#include "FortAthenaMutator_ArsenicRespawn.generated.h"

UCLASS(Blueprintable)
class AFortAthenaMutator_ArsenicRespawn : public AFortAthenaMutator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bRespawnAwayFromDeathLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MinimumDistanceFromDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MaximumDistanceFromDeath;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortRespawnLogicData_Teams RespawnSettings;
    
public:
};

