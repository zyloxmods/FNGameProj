#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDWidgetCustomPropertyModel_Number.h"
#include "MyFortMobileHUDWidgetCustomPropertyModel_NumberDiscrete.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UMyFortMobileHUDWidgetCustomPropertyModel_NumberDiscrete : public UFortMobileHUDWidgetCustomPropertyModel_Number {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, FText> PropertyOptions;
    
public:
    UMyFortMobileHUDWidgetCustomPropertyModel_NumberDiscrete();
};

