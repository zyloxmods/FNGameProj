#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "FortMatchmakingWidgetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMatchmakingWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
    UFortMatchmakingWidgetBase();
};

