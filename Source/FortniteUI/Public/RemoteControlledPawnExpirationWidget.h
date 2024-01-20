#pragma once
#include "CoreMinimal.h"
#include "FortHUDElementWidget.h"
#include "RemoteControlledPawnExpirationWidget.generated.h"

class UImage;

UCLASS(Blueprintable, EditInlineNew)
class URemoteControlledPawnExpirationWidget : public UFortHUDElementWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* ExpirationProgressImage;
    
public:
    URemoteControlledPawnExpirationWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPawnChanged();
    
};

