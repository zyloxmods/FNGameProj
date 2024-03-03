#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortCodeOfConductScreen.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortCodeOfConductScreen : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
    UFortCodeOfConductScreen();
};

