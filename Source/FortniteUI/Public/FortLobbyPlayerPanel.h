#pragma once
#include "CoreMinimal.h"
#include "EFortFriendRequestStatus.h"
#include "FortActivatablePanel.h"
#include "Templates/SubclassOf.h"
#include "FortLobbyPlayerPanel.generated.h"

class UCommonButton;
class UFortPlayerBanner;
class UFortTeamMemberManage;
class UImage;
class URichTextBlock;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortLobbyPlayerPanel : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortTeamMemberManage> ManageModalClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_AddFriend;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_InviteParty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Manage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortPlayerBanner* Banner_Player;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UTextBlock* Text_InviteSent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlatformIcon;
    
public:
    UFortLobbyPlayerPanel();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFriendStatusUpdated(EFortFriendRequestStatus FriendRequestStatus);
    
    UFUNCTION(BlueprintCallable)
    void ClosePanel();
    
};

