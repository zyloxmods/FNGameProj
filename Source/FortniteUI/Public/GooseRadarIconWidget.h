#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "ERadarIconState.h"
#include "GooseRadarIconWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UGooseRadarIconWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ERadarIconState IconState;
    
public:
    UGooseRadarIconWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnNewIconState(ERadarIconState NewState);
    
};

