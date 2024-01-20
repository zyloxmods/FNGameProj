#pragma once
#include "CoreMinimal.h"
#include "CommonButton.h"
#include "AthenaTeamMemberButton.generated.h"

class UCommonRichTextBlock;
class UFortVoiceChatStatusIcon;
class USocialUser;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaTeamMemberButton : public UCommonButton {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USocialUser* CurrentSocialUser;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_UserName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortVoiceChatStatusIcon* VoiceIcon_Status;
    
public:
    UAthenaTeamMemberButton();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMuteToggled(bool bIsMuted);
    
};

