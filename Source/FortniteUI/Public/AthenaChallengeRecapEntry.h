#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaChallengeRecapEntry.generated.h"

class UCommonTextBlock;
class UWidgetSwitcher;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeRecapEntry : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_QuestObjective;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_CompletionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidgetSwitcher* Switcher_Progression;
    
public:
    UAthenaChallengeRecapEntry();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateProgressBar(float StartingPercent, float EndingPercent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartOutroAnim();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartIntroAnim();
    
    UFUNCTION(BlueprintCallable)
    void OutroFinished();
    
    UFUNCTION(BlueprintCallable)
    void IntroFinished();
    
};

