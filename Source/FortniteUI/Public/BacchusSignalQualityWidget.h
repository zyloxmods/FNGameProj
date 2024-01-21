#pragma once
#include "CoreMinimal.h"
#include "BacchusHUDElement.h"
#include "EBacchusSignalQuality.h"
#include "BacchusSignalQualityWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UBacchusSignalQualityWidget : public UBacchusHUDElement {
    GENERATED_BODY()
public:
    UBacchusSignalQualityWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetNewSignalQuality(EBacchusSignalQuality NewSignalQuality);
    
    UFUNCTION(BlueprintCallable)
    void OnNewSignalQuality(float NewRawQuality);
    
};

