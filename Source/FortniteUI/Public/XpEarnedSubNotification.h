#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "XpEarnedSubNotification.generated.h"

class UFortQuestItemDefinition;

UCLASS(Blueprintable, EditInlineNew)
class UXpEarnedSubNotification : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortQuestItemDefinition* QuestDef;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bHasDisplayedXp;
    
public:
    UXpEarnedSubNotification();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetXpValue(int32 XpValue);
    
public:
    UFUNCTION(BlueprintCallable)
    void PushXpNotification();
    
    UFUNCTION(BlueprintCallable)
    void FinishedDisplayAnim();
    
};

