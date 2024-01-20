#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortReportActioned.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortReportActioned : public UFortActivatablePanel {
    GENERATED_BODY()
public:
    UFortReportActioned();
};

