#pragma once
#include "CoreMinimal.h"
#include "EDeployableBaseUseType.h"
#include "DeployableBaseSupportSettings.generated.h"

class ADeployableBasePlot;
class UFortDeployableBaseCloudSaveItemDefinition;
class UFortDeployableBaseSkillTreeUnlocks;
class UFortTieredCollectionLayout;

USTRUCT(BlueprintType)
struct FDeployableBaseSupportSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseDeployableBases;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortDeployableBaseCloudSaveItemDefinition> DeployableBaseCloudSaveItemDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<ADeployableBasePlot> DeployableBasePlot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UFortDeployableBaseSkillTreeUnlocks> SupportedUnlocks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bDeployableBasesReadOnly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDeployableBaseUseType SupportedUseType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortTieredCollectionLayout*> TieredCollectionLayouts;
    
    FORTNITEGAME_API FDeployableBaseSupportSettings();
};

