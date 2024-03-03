#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortPopUpCenterMessageModalPanel.generated.h"

class UCommonUserWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortPopUpCenterMessageModalPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonUserWidget* Button_Leave;
    
public:
    UFortPopUpCenterMessageModalPanel();
};

