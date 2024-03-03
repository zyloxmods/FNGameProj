#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaFrontEndMapPoiIcon.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaFrontEndMapPoiIcon : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PoiName;
    
public:
    UAthenaFrontEndMapPoiIcon();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleTextChanged(bool bIsRedacted);
    
};

