#pragma once
#include "CoreMinimal.h"
#include "FortParentalControlsSubScreen.h"
#include "FortParentalControls_VerifyEmail.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortParentalControls_VerifyEmail : public UFortParentalControlsSubScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_VerifyEmail_Next;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ChangeEmail;
    
public:
    UFortParentalControls_VerifyEmail();
};

