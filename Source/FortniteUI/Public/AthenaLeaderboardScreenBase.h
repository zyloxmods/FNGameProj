#pragma once
#include "CoreMinimal.h"
#include "ECommonInputType.h"
#include "AthenaPlaylistLeaderboardData.h"
#include "FortActivatablePanel.h"
#include "LeaderboardFilter.h"
#include "AthenaLeaderboardScreenBase.generated.h"

class UCommonBorder;
class UCommonButton;
class UCommonRotator;
class UCommonTextBlock;
class UDataTable;
class UFortLeaderboardRowProxyInstance;
class UFortTabListWidgetBase;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaLeaderboardScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortTabListWidgetBase* LeaderboardTabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRotator* MatchRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRotator* LeaderboardTypeRotator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* RefreshTimeText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* NoDataMessageText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonBorder* BorderLocalUserFocus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* LeaderboardDisplayData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta=(AllowPrivateAccess=true))
    TMap<FName, UCommonButton*> ActiveTabButtons;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortLeaderboardRowProxyInstance*> RowProxies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortLeaderboardRowProxyInstance* LocalUserRowProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FLeaderboardFilter CurrentLeaderboardFilter;
    
public:
    UAthenaLeaderboardScreenBase();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateTabButtonText(UCommonButton* Button, const FAthenaPlaylistLeaderboardData& PlaylistTabData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateListHeader(const FAthenaPlaylistLeaderboardData& PlaylistTabData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnUpdateLeaderboardListUI(bool bWasSuccessful, UFortLeaderboardRowProxyInstance* LocalUserRow, const FText& QueryErrorStr);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryFinished();
    
    UFUNCTION(BlueprintCallable)
    void OnPlaylistChanged(const FName NewPlaylistName, const ECommonInputType NewInputType);
    
    UFUNCTION(BlueprintCallable)
    void OnMatchTypeChanged(int32 MatchTypeIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFriendsFilterChanged(int32 FriendsFilterIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnActiveLeaderboardTabChanged(int32 ActiveWidgetIndex);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanShowFriendsOnlyLeaderboard() const;
    
};

