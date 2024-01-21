#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Fonts/SlateFontInfo.h"
#include "SocialChatMessageEntryTextStyle.generated.h"

USTRUCT(BlueprintType)
struct FSocialChatMessageEntryTextStyle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSlateFontInfo FontInfo;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor ColorAndOpacity;
    
    SOCIALUMG_API FSocialChatMessageEntryTextStyle();
};

