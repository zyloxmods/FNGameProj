#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "BacchusCloseButton.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBacchusCloseButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bIgnorePlatform;
    
public:
    UBacchusCloseButton();
};

