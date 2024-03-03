#pragma once
#include "CoreMinimal.h"
#include "FortEventLevelNavigationBangCheckComponent.h"
#include "FortBangCheckComponent_Customization.generated.h"

class UAthenaRewardEventGraph;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortBangCheckComponent_Customization : public UFortEventLevelNavigationBangCheckComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAthenaRewardEventGraph* CustomizationRewardGraph;
    
public:
    UFortBangCheckComponent_Customization();
};

