#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaChallengeProgressBar.generated.h"

class UCommonRichTextBlock;
class UProgressBar;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeProgressBar : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UProgressBar* ProgressBar_StepsCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Progress;
    
public:
    UAthenaChallengeProgressBar();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPercentValueForMaterialNumber(int32 PercentValue);
    
};

