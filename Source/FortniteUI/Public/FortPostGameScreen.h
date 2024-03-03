#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortPostGameScreenConfig.h"
#include "FortPostGameScreen.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortPostGameScreen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFortPostGameScreenConfig PostGameScreenConfig;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanGoBackToThisScreen;
    
public:
    UFortPostGameScreen();
    UFUNCTION(BlueprintCallable)
    void GoToPreviousScreen();
    
    UFUNCTION(BlueprintCallable)
    void GoToNextScreen();
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool BP_ShouldDisplay();
    
protected:
    UFUNCTION(BlueprintCallable)
    void BP_OnToggleBlurRequest();
    
};

