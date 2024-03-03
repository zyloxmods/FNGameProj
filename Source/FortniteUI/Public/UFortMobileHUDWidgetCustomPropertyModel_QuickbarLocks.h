#pragma once
#include "CoreMinimal.h"
#include "FortMobileHUDWidgetCustomPropertyModel_Number.h"
#include "UFortMobileHUDWidgetCustomPropertyModel_QuickbarLocks.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class FORTNITEUI_API UUFortMobileHUDWidgetCustomPropertyModel_QuickbarLocks : public UFortMobileHUDWidgetCustomPropertyModel_Number {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaximumDisplayedOptions;
    
public:
    UUFortMobileHUDWidgetCustomPropertyModel_QuickbarLocks();
};

