#pragma once
#include "CoreMinimal.h"
#include "Blueprint/IUserListEntry.h"
#include "Blueprint/UserWidget.h"
#include "SocialChatMessageEntryStyle.h"
#include "SocialChatMessageEntry.generated.h"

class UButton;
class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialChatMessageEntry : public UUserWidget, public IUserListEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FSocialChatMessageEntryStyle DefaultStyle;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_Message;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UButton* Button_MessageButton;
    
public:
    USocialChatMessageEntry();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMessageSet();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanInteract() const;
    
    
    // Fix for true pure virtual functions not being implemented
};

