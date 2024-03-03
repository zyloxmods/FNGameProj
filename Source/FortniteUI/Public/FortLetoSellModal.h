#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortLetoSellModal.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLetoSellModal : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
public:
    UFortLetoSellModal();
};

