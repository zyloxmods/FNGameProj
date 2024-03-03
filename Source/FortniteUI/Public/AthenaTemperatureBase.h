#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaTemperatureBase.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UAthenaTemperatureBase : public UCommonUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Temperature;
    
public:
    UAthenaTemperatureBase();
private:
    UFUNCTION(BlueprintCallable)
    void StopTimer();
    
    UFUNCTION(BlueprintCallable)
    void StartTimer();
    
};

