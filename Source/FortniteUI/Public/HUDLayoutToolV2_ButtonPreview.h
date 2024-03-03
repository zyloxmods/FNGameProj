#pragma once
#include "CoreMinimal.h"
#include "HUDLayoutToolV2_WidgetPreview.h"
#include "HUDLayoutToolV2_ButtonPreview.generated.h"

class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class FORTNITEUI_API UHUDLayoutToolV2_ButtonPreview : public UHUDLayoutToolV2_WidgetPreview {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Icon;
    
public:
    UHUDLayoutToolV2_ButtonPreview();
};

