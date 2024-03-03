#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "FortTaggedDeployableBaseLootUnlock.h"
#include "FortTaggedDeployableBasePlotExpansionUnlock.h"
#include "FortDeployableBaseSkillTreeUnlocks.generated.h"

UCLASS(Blueprintable)
class UFortDeployableBaseSkillTreeUnlocks : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTaggedDeployableBasePlotExpansionUnlock> PlotSizeUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTaggedDeployableBaseLootUnlock> NeighborhoodLootGrantUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTaggedDeployableBaseLootUnlock> CombatZoneStartLootGrantUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortTaggedDeployableBaseLootUnlock> CombatZoneWaveCompleteLootGrantUnlocks;
    
public:
    UFortDeployableBaseSkillTreeUnlocks();
};

