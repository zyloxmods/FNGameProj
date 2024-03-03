#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "FortPrivateAccountInfo.h"
#include "FortMTXButton.generated.h"

class UCommonNumericTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMTXButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* Text_Amount;
    
public:
    UFortMTXButton();
private:
    UFUNCTION(BlueprintCallable)
    void HandleLocalAcountInfoChanged(FFortPrivateAccountInfo NewInfo);
    
};

