#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "FortHighlightAnnotation.generated.h"

class UTextBlock;

UCLASS(Blueprintable, EditInlineNew)
class UFortHighlightAnnotation : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FadeOutTime;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* TextBlock_MainText;
    
public:
    UFortHighlightAnnotation();
};

