#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortLoginUnavailable.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLoginUnavailable : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisableMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText DisableButtonMsg;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InviteClosedMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText InviteButtonMsg;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Title;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_DisplayMsg;
    
public:
    UFortLoginUnavailable();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageSet(bool bDisableMessage);
    
    UFUNCTION(BlueprintCallable)
    void LaunchSpecificURL();
    
};

