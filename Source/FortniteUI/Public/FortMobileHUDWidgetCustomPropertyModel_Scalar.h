#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDWidgetCustomPropertyModel.h"
#include "FortMobileHUDWidgetCustomPropertyModel_Scalar.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileHUDWidgetCustomPropertyModel_Scalar : public UFortMobileHUDWidgetCustomPropertyModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double DefaultValue;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PropertyLowerBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PropertyUpperBound;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    double PropertyStepSize;
    
public:
    UFortMobileHUDWidgetCustomPropertyModel_Scalar();
};

