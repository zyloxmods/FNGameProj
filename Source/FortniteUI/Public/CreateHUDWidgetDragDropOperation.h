#pragma once
#include "CoreMinimal.h"
#include "Blueprint/DragDropOperation.h"
#include "CreateHUDWidgetDragDropOperation.generated.h"

UCLASS(Blueprintable)
class FORTNITEUI_API UCreateHUDWidgetDragDropOperation : public UDragDropOperation {
    GENERATED_BODY()
public:
    UCreateHUDWidgetDragDropOperation();
};

