#pragma once
#include "CoreMinimal.h"
#include "EOnlineStatus.h"
#include "SocialInteractionMenu.h"
#include "FortSocialInteractionMenu.generated.h"

class UCommonRichTextBlock;
class UCommonTextBlock;
class UImage;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialInteractionMenu : public USocialInteractionMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_Platform;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* Text_DisplayName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_PlatformNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Presence;
    
public:
    UFortSocialInteractionMenu();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUserPresenceChanged(EOnlineStatus OnlineStatus);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEnableBackButtonDisplay(bool bEnableBackButtonDisplay);
    
};

