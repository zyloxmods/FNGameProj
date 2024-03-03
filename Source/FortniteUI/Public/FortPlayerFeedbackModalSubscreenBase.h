#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortPlayerFeedbackModalSubscreenBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerFeedbackModalSubscreenBase : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
    UFortPlayerFeedbackModalSubscreenBase();
};

