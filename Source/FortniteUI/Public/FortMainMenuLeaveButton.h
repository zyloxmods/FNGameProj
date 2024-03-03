#pragma once
#include "CoreMinimal.h"
#include "FortMainMenuButton.h"
#include "FortMainMenuLeaveButton.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortMainMenuLeaveButton : public UFortMainMenuButton {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CountDownTimer;
    
public:
    UFortMainMenuLeaveButton();
private:
    UFUNCTION(BlueprintCallable)
    void HandleLobbyStarted();
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyDisconnected();
    
};

