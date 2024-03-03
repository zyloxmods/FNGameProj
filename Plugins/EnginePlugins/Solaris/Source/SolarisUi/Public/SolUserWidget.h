#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SolUserWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOLARISUI_API USolUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USolUserWidget();
};

