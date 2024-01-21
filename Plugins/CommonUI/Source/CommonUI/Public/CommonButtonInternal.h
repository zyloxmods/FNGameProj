#pragma once
#include "CoreMinimal.h"
#include "Button.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=Button -FallbackName=Button
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=OnButtonClickedEvent__DelegateSignature -FallbackName=OnButtonClickedEventDelegate
#include "CommonButtonInternal.generated.h"

UCLASS(Blueprintable)
class UCommonButtonInternal : public UButton {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnButtonClickedEvent OnDoubleClicked;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinWidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinHeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bInteractionEnabled;
    
public:
    UCommonButtonInternal();
};

