#pragma once
#include "CoreMinimal.h"
#include "CommonInputActionHandlerData.h"
#include "CommonUserWidget.h"
#include "Templates/SubclassOf.h"
#include "CommonInputReflector.generated.h"

class UCommonButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUI_API UCommonInputReflector : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UCommonButton> ButtonType;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonButton*> ActiveButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    TArray<UCommonButton*> InactiveButtons;
    
public:
    UCommonInputReflector();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnButtonAdded(UCommonButton* AddedButton, const FCommonInputActionHandlerData& Data);
    
};

