#pragma once
#include "CoreMinimal.h"
#include "CobaltWidgetBase.h"
#include "CobaltCountdownWidgetBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UCobaltCountdownWidgetBase : public UCobaltWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText CountdownMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float CountdownTime;
    
public:
    UCobaltCountdownWidgetBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateCountdownText();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleTeleportComplete();
    
};

