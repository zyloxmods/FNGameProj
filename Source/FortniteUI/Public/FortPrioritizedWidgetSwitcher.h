#pragma once
#include "CoreMinimal.h"
#include "CommonWidgetSwitcher.h"
#include "FortPrioritizedWidgetSwitcher.generated.h"

UCLASS(Blueprintable)
class UFortPrioritizedWidgetSwitcher : public UCommonWidgetSwitcher {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CachingTime;
    
public:
    UFortPrioritizedWidgetSwitcher();
};

