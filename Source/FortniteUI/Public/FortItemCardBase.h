#pragma once
#include "CoreMinimal.h"
#include "EFortBrushSize.h"
#include "EFortItemCardSize.h"
#include "FortItemWidget_NUI.h"
#include "FortItemCardBase.generated.h"

UCLASS(Abstract, Blueprintable)
class UFortItemCardBase : public UFortItemWidget_NUI {
    GENERATED_BODY()
public:
    UFortItemCardBase();
    UFUNCTION(BlueprintCallable)
    static EFortItemCardSize PortBrushSize(const TEnumAsByte<EFortBrushSize::Type>& BrushSize);
    
};

