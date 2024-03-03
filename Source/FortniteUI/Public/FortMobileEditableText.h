#pragma once
#include "CoreMinimal.h"
#include "Components/EditableText.h"
#include "FortMobileEditableText.generated.h"

UCLASS(Blueprintable)
class UFortMobileEditableText : public UEditableText {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float MobileFontSizeMultiplier;
    
public:
    UFortMobileEditableText();
};

