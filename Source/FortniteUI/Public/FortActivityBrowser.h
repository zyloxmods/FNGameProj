#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortActivityBrowser.generated.h"

class UFortActivityBrowserView;
class UFortActivityDetailsView;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortActivityBrowser : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* WidgetSwitcher_ActivityBrowserViews;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityBrowserView* View_ActivityBrowser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortActivityDetailsView* View_ActivityDetails;
    
public:
    UFortActivityBrowser();
};

