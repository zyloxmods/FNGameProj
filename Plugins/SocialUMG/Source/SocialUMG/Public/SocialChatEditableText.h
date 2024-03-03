#pragma once
#include "CoreMinimal.h"
#include "Styling/SlateTypes.h"
#include "Styling/SlateTypes.h"
#include "Components/Widget.h"
#include "SocialChatEditableText.generated.h"

UCLASS(Blueprintable)
class SOCIALUMG_API USocialChatEditableText : public UWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEditableTextStyle EditableTextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle AutoCompleteStyle;
    
public:
    USocialChatEditableText();
};

