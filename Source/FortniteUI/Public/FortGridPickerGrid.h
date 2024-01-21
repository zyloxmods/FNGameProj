#pragma once
#include "CoreMinimal.h"
#include "FortUserWidget.h"
#include "FortGridPickerGrid.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortGridPickerGrid : public UFortUserWidget {
    GENERATED_BODY()
public:
    UFortGridPickerGrid();
};

