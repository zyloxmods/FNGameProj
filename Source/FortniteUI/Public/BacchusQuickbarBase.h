#pragma once
#include "CoreMinimal.h"
#include "BacchusHUDElement.h"
#include "BacchusQuickbarBase.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBacchusQuickbarBase : public UBacchusHUDElement {
    GENERATED_BODY()
public:
    UBacchusQuickbarBase();
};

