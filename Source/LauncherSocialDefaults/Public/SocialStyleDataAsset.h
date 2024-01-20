#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "SocialStyleDataAsset.generated.h"

class UChatColorSchemeDataAsset;
class USocialActionButtonStyleDataAsset;
class USocialChatChromeColorSchemeDataAsset;
class USocialChatChromeMarginsDataAsset;
class USocialChatChromeStyleDataAsset;
class USocialChatMarkupStyleDataAsset;
class USocialChatStyleDataAsset;
class USocialCheckBoxStyleDataAsset;
class USocialFontStyleDataAsset;
class USocialListMarginsDataAsset;
class USocialListStyleDataAsset;
class USocialProfanityDataAsset;
class USocialRadioBoxStyleDataAsset;
class USocialScrollBarStyleDataAsset;
class USocialSoundSchemaDataAsset;

UCLASS(Blueprintable)
class USocialStyleDataAsset : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialFontStyleDataAsset* SmallFontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialFontStyleDataAsset* NormalFontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialFontStyleDataAsset* LargeFontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialFontStyleDataAsset* ChatFontStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialListStyleDataAsset* SocialListStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialListMarginsDataAsset* SocialListMargins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatStyleDataAsset* ChatStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatChromeStyleDataAsset* ChatChromeStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatChromeMarginsDataAsset* ChatChromeMargins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatChromeColorSchemeDataAsset* ChatChromeColorScheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UChatColorSchemeDataAsset* ChatColorScheme;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialSoundSchemaDataAsset* SoundSchema;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialActionButtonStyleDataAsset* ActionButtonStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialCheckBoxStyleDataAsset* CheckBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialRadioBoxStyleDataAsset* RadioBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialScrollBarStyleDataAsset* ScrollBoxStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatMarkupStyleDataAsset* MarkupStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialProfanityDataAsset* ProfanityDataAsset;
    
    USocialStyleDataAsset();
};

