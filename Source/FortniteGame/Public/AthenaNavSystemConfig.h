#pragma once
#include "CoreMinimal.h"
#include "AI/Navigation/NavigationTypes.h"
#include "FortNavSystemConfig.h"
#include "AthenaNavSystemConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class FORTNITEGAME_API UAthenaNavSystemConfig : public UFortNavSystemConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FNavDataConfig> SupportedAgents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseBuildingGridAsNavigableSpace: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDiscardNavDataFromSublevels: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShouldDiscardSubLevelNavData: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNavigationInvokers: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bLazyOctree: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseNavOctTreeExclusionBounds: 1;
    
public:
    UAthenaNavSystemConfig();
};

