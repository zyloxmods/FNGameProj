#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortRebootCardsCollectedWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortRebootCardsCollectedWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumCardsCollected;
    
public:
    UFortRebootCardsCollectedWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRebootCardsCollectedChanged();
    
};

