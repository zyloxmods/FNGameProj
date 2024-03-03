#pragma once
#include "CoreMinimal.h"
#include "SocialChatContainer.h"
#include "Templates/SubclassOf.h"
#include "FortChatContainer.generated.h"

class UFortSocialInteractionMenu;
class UMenuAnchor;
class USocialChatChannel;
class UWidget;

UCLASS(Blueprintable, EditInlineNew)
class UFortChatContainer : public USocialChatContainer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<USocialChatChannel> CacheChannelForPlatformMessage;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USocialChatChannel* CombinedChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortSocialInteractionMenu> ActionMenuClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    UFortSocialInteractionMenu* ActionMenu;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UMenuAnchor* MenuAnchor_MessageActions;
    
public:
    UFortChatContainer();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSendButtonDisplayChanged(bool bShowSendButton);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsTextChatRestricted() const;
    
private:
    UFUNCTION(BlueprintCallable)
    UWidget* HandleGetMenuContentForAnchor();
    
};

