#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "AthenaBattlePassItemTracker.generated.h"

class UCommonNumericTextBlock;
class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaBattlePassItemTracker : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Category;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonNumericTextBlock* Text_Counter;
    
public:
    UAthenaBattlePassItemTracker();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInterpStarted();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnInterpEnded(UCommonNumericTextBlock* NumericTextBlock, const bool HadCompleted);
    
};

