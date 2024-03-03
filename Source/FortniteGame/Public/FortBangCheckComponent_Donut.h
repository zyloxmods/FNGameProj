#pragma once
#include "CoreMinimal.h"
#include "FortEventLevelNavigationBangCheckComponent.h"
#include "FortBangCheckComponent_Donut.generated.h"

class UFortChallengeBundleItemDefinition;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortBangCheckComponent_Donut : public UFortEventLevelNavigationBangCheckComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortChallengeBundleItemDefinition*> DonutBundles;
    
public:
    UFortBangCheckComponent_Donut();
};

