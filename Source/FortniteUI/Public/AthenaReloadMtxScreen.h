#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "AthenaReloadMtxScreenBase.h"
#include "AthenaReloadMtxScreen.generated.h"

class UAthenaStarterKitOfferButton;
class UCommonListView;
class UCommonVisibilitySwitcher;
class UOverlay;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReloadMtxScreen : public UAthenaReloadMtxScreenBase {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaStarterKitOfferButton* Button_StarterKitOption;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_MtxOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonVisibilitySwitcher* Switcher_AvailableOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_AvailableOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UOverlay* Overlay_NoOptions;
    
public:
    UAthenaReloadMtxScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidget* GetWidgetToFocusFromOfferList(EUINavigation InNavigation) const;
    
};

