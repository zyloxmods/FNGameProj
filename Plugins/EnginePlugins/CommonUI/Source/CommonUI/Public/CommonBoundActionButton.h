#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "CommonBoundActionButton.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class COMMONUI_API UCommonBoundActionButton : public UCommonButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ActionName;
    
public:
    UCommonBoundActionButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateInputAction();
    
};

