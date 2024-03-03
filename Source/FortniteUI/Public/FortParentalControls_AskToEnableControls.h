#pragma once
#include "CoreMinimal.h"
#include "FortParentalControlsSubScreen.h"
#include "FortParentalControls_AskToEnableControls.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortParentalControls_AskToEnableControls : public UFortParentalControlsSubScreen {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_AskToEnableControls;
    
public:
    UFortParentalControls_AskToEnableControls();
};

