#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "ECommonPlatformType.h"
#include "FortActivatablePanel.h"
#include "FortWinterQuestPresentScreen.generated.h"

class UCommonTextBlock;
class UFortGameStateComponent_EventLevel;
class UFortWinterQuestButton;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortWinterQuestPresentScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DecreaseOnShake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpTimeForShakeDecrease;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeUntilShakeRecharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LerpTimeForShakeRecharge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortGameStateComponent_EventLevel* EventLevelInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestButton* Button_Shake;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestButton* Button_ShakeIOS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestButton* Button_ShakeAndroid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortWinterQuestButton* Button_Open;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ReasonCannotOpen;
    
public:
    UFortWinterQuestPresentScreen();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateShakeRecharge(float InPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateShakePercentage(float InPercentage);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdatePlatformType(ECommonPlatformType PlatformType);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStopOpeningPresent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStartOpeningPresent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInputMethodChanged(ECommonInputType NewMethod);
    
};

