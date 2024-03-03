#pragma once
#include "CoreMinimal.h"
#include "CommonActivatablePanel.h"
#include "FortNewAccountWarning.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNewAccountWarning : public UCommonActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_NewAccount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Back;
    
public:
    UFortNewAccountWarning();
};

