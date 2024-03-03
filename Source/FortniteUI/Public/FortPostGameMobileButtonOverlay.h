#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortPostGameMobileButtonOverlay.generated.h"

class UBacchusButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPostGameMobileButtonOverlay : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBacchusButton* Button_PushToTalk;
    
public:
    UFortPostGameMobileButtonOverlay();
};

