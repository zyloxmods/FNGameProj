#pragma once
#include "CoreMinimal.h"
#include "FortParentalControls_PinSubScreen.h"
#include "FortParentalControls_EnterPin.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortParentalControls_EnterPin : public UFortParentalControls_PinSubScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ForgotPin;
    
public:
    UFortParentalControls_EnterPin();
};

