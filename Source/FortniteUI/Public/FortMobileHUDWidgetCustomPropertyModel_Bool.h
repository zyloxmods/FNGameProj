#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDWidgetCustomPropertyModel.h"
#include "FortMobileHUDWidgetCustomPropertyModel_Bool.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileHUDWidgetCustomPropertyModel_Bool : public UFortMobileHUDWidgetCustomPropertyModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DefaultValue;
    
public:
    UFortMobileHUDWidgetCustomPropertyModel_Bool();
};

