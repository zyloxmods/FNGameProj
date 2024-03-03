#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortStoreFrontTileWidgetBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortStoreFrontTileWidgetBase : public UCommonButton {
    GENERATED_BODY()
public:
    UFortStoreFrontTileWidgetBase();
};

