#pragma once
#include "CoreMinimal.h"
#include "NavigationSystem.h"
#include "FortNavSystemConfig.generated.h"

UCLASS(Blueprintable, CollapseCategories, EditInlineNew)
class UFortNavSystemConfig : public UNavigationSystemModuleConfig {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowAutoRebuild: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRebuildOnInitialUnlock: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUsesStreamedInNavLevel: 1;
    
public:
    UFortNavSystemConfig();
};

