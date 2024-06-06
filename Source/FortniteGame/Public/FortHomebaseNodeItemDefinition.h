#pragma once
#include "CoreMinimal.h"
#include "EHomebaseNodeType.h"
#include "FortAccountItemDefinition.h"
#include "HomebaseNodeLevel.h"
#include "FortHomebaseNodeItemDefinition.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UFortHomebaseNodeItemDefinition : public UFortAccountItemDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FHomebaseNodeLevel> LevelData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EHomebaseNodeType DisplayType;
    
public:
    UFortHomebaseNodeItemDefinition(const FObjectInitializer& ObjectInitializer);
};

