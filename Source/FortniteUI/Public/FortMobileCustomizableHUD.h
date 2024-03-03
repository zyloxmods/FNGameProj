#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortMobileHUDLayoutProfile.h"
#include "FortMobileCustomizableHUD.generated.h"

class UFortMobileHUDLayer;
class UFortMobileHUDWidgetRegistry;

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileCustomizableHUD : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMobileHUDWidgetRegistry* BaseHUDWidgetRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortMobileHUDWidgetRegistry* HUDWidgetRegistry;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FFortMobileHUDLayoutProfile LayoutProfile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortMobileHUDLayer* HUDLayer_HUDWidgets;
    
public:
    UFortMobileCustomizableHUD();
};

