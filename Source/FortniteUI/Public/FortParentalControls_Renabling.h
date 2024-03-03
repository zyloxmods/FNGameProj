#pragma once
#include "CoreMinimal.h"
#include "FortParentalControls_SettingModifyingSubScreen.h"
#include "FortParentalControls_Renabling.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortParentalControls_Renabling : public UFortParentalControls_SettingModifyingSubScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ReEnableFail;
    
public:
    UFortParentalControls_Renabling();
};

