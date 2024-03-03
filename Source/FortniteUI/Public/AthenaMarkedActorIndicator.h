#pragma once
#include "CoreMinimal.h"
#include "FortWorldMarkerData.h"
#include "FortWorldMarkerIndicatorInterface.h"
#include "MarkedActorDisplayInfo.h"
#include "FortActorIndicatorWidget.h"
#include "AthenaMarkedActorIndicator.generated.h"

class UCommonTextBlock;
class UFortMarkerDetailsTable;
class UPanelWidget;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaMarkedActorIndicator : public UFortActorIndicatorWidget, public IFortWorldMarkerIndicatorInterface {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortWorldMarkerData MarkerData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMarkedActorDisplayInfo MarkerDisplay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortMarkerDetailsTable* DetailsTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FreshLargeItemShowTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndicatorDotSizeThreshold;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_IndicatorSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_SmallIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Panel_LargeIndicator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Distance;
    
public:
    UAthenaMarkedActorIndicator();
    
    // Fix for true pure virtual functions not being implemented
};

