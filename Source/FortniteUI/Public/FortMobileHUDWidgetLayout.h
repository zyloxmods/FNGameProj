#pragma once
#include "CoreMinimal.h"
#include "Components/CanvasPanelSlot.h"
#include "FortMobileHUDWidgetLayout.generated.h"

USTRUCT(BlueprintType)
struct FORTNITEUI_API FFortMobileHUDWidgetLayout {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FAnchorData LayoutData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    int32 ZOrder;
    
public:
    FFortMobileHUDWidgetLayout();
};

