#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortLetoLayoutBorder.generated.h"

class UCommonTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLetoLayoutBorder : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_PlayerName;
    
public:
    UFortLetoLayoutBorder();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateBorderWidth(float HalfBorderWidth);
    
};

