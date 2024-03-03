#pragma once
#include "CoreMinimal.h"
#include "FortPostGameScreen.h"
#include "FortEliminationScreen.generated.h"

class UAthenaLastKillerInfoWidget;
class UCommonPopupButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEliminationScreen : public UFortPostGameScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float ScreenDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShouldAutoAdvance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaLastKillerInfoWidget* Widget_KillerInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPopupButton* Button_Continue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonPopupButton* Button_ReportPlayer;
    
public:
    UFortEliminationScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetContinueButtonText(const FText& InText);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayIntroAnimation();
    
};

