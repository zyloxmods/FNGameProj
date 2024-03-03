#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanelSlot.h"
#include "FortMobileHUDWidgetCustomPropertySave.h"
#include "FortMobileHUDWidgetLayoutSave.generated.h"

USTRUCT(BlueprintType)
struct FFortMobileHUDWidgetLayoutSave {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAnchorData LayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFortMobileHUDWidgetCustomPropertySave> CustomProperties;
    
    FORTNITEGAME_API FFortMobileHUDWidgetLayoutSave();
};

