#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "GooseRadarWidgetBase.generated.h"

class AFortAthenaVehicle;
class UCanvasPanel;
class UGooseRadarIconWidget;

UCLASS(Blueprintable, EditInlineNew)
class UGooseRadarWidgetBase : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCanvasPanel* MyPanel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UGooseRadarIconWidget*> IconWidgets;
    
public:
    UGooseRadarWidgetBase();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlaneRep(const TArray<AFortAthenaVehicle*>& Planes);
    
};

