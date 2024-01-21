#pragma once
#include "CoreMinimal.h"
#include "Types/SlateEnums.h"
#include "Blueprint/UserWidget.h"
#include "SocialChatContainer.generated.h"

class UCommonButton;
class UCommonButtonGroup;
class UDynamicEntryBox;
class UScrollBox;
class USocialChatChannel;
class USocialChatEditableText;
class USocialChatManager;
class USocialChatMessageList;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class SOCIALUMG_API USocialChatContainer : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatManager* ChatManager;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<USocialChatChannel*> JoinedChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatChannel* ActiveChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UCommonButtonGroup* TabButtonGroup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USocialChatMessageList* ChatList_Messages;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    USocialChatEditableText* ChatEditableText_MessageEntry;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_SendMessage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UDynamicEntryBox* EntryBox_JoinedChannels;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UScrollBox* ScrollBox_Channels;
    
public:
    USocialChatContainer();
    UFUNCTION(BlueprintCallable)
    void SendCurrentMessage();
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChatOpenChanged(bool bShouldBeOpen);
    
public:
    UFUNCTION(BlueprintCallable)
    void HandleRightTabPressed();
    
    UFUNCTION(BlueprintCallable)
    void HandleLeftTabPressed();
    
    UFUNCTION(BlueprintCallable)
    void FocusEditableText();
    
private:
    UFUNCTION(BlueprintCallable)
    void DynamicHandleMessageTextCommitted(const FText& MessageText, TEnumAsByte<ETextCommit::Type> CommitMethod);
    
};

