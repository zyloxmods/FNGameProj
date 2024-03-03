#pragma once
#include "CoreMinimal.h"
#include "CreativePropertyEditWidgetBase.h"
#include "CreativePropertyEditWidgetMessageComponentBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UCreativePropertyEditWidgetMessageComponentBase : public UCreativePropertyEditWidgetBase {
    GENERATED_BODY()
public:
    UCreativePropertyEditWidgetMessageComponentBase();
};

