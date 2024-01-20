#pragma once
#include "CoreMinimal.h"
#include "FortUIDataConfiguration.h"
#include "StateWidgetEntry.h"
#include "FortMobileUIDataConfiguration.generated.h"

UCLASS(Blueprintable)
class UFortMobileUIDataConfiguration : public UFortUIDataConfiguration {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateWidgetEntry ControllerOverrideStateWidgetClasses[14];
    
    UFortMobileUIDataConfiguration();
};

