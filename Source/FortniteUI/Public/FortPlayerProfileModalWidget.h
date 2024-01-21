#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortPlayerProfileModalWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayerProfileModalWidget : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortPlayerProfileModalWidget();
};

