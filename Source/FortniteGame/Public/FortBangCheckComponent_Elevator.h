#pragma once
#include "CoreMinimal.h"
#include "BangCheckData.h"
#include "FortEventLevelNavigationBangCheckComponent.h"
#include "FortBangCheckComponent_Elevator.generated.h"

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UFortBangCheckComponent_Elevator : public UFortEventLevelNavigationBangCheckComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBangCheckData> ABChoiceQuests;
    
public:
    UFortBangCheckComponent_Elevator();
};

