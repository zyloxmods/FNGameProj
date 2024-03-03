#pragma once
#include "CoreMinimal.h"
#include "FortAthenaAIEvaluator.h"
#include "Templates/SubclassOf.h"
#include "FortAthenaAIBotEvaluator.generated.h"

class AFortAthenaAIBotController;
class UBehaviorTreeComponent;
class UNavigationQueryFilter;

UCLASS(Abstract, Blueprintable, MinimalAPI)
class UFortAthenaAIBotEvaluator : public UFortAthenaAIEvaluator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UNavigationQueryFilter> OverrideNavigationFilterClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBehaviorTreeComponent* CachedOwnerComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    AFortAthenaAIBotController* CachedBotController;
    
public:
};

