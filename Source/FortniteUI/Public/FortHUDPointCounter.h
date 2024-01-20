#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortHUDPointCounter.generated.h"

class UCommonTextBlock;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortHUDPointCounter : public UCommonUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ScoreValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_DebugId;
    
public:
    UFortHUDPointCounter();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPointTextSet(bool bHasScore);
    
};

