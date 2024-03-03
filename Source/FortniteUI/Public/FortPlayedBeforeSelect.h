#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortPlayedBeforeSelect.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortPlayedBeforeSelect : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Yes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_No;
    
public:
    UFortPlayedBeforeSelect();
};

