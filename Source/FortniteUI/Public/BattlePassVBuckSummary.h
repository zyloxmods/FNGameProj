#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "BattlePassVBuckSummary.generated.h"

class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBattlePassVBuckSummary : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_TotalEarned;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_TotalToBank;
    
public:
    UBattlePassVBuckSummary();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetSummary();
    
};

