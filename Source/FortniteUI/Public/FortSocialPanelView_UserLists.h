#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "FortUserListHeaderInfo.h"
#include "FortSocialPanelView_UserLists.generated.h"

class UCommonButton;
class UCommonWidgetSwitcher;
class UFortFriendSearchButton;
class UFortLocalUserEntry;
class UFortSocialTab;
class UFortSocialUserTreeView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortSocialPanelView_UserLists : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FFortUserListHeaderInfo> ListHeaderInfos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLocalUserEntry* UserEntry_LocalPlayer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortFriendSearchButton* Button_FriendSearch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetSwitcher* Switcher_UserLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialTab* SocialTab_AddFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialTab* SocialTab_Friends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialUserTreeView* UserTree_FriendsLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortSocialUserTreeView* UserTree_AddFriends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_AddWeGameFriends;
    
public:
    UFortSocialPanelView_UserLists();
protected:
    UFUNCTION(BlueprintCallable)
    void ToggleSocialPanel();
    
};

