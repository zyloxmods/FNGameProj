#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDWidgetCustomPropertyModel.h"
#include "FortMobileHUDWidgetCustomPropertyModel_Number.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UFortMobileHUDWidgetCustomPropertyModel_Number : public UFortMobileHUDWidgetCustomPropertyModel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DefaultValue;
    
public:
    UFortMobileHUDWidgetCustomPropertyModel_Number();
};

