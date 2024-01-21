#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "AthenaStatsScreenBase.generated.h"

class UCommonButton;
class UCommonTabListWidget;
class UCommonTextBlock;
class UFortProfileStatsMainTile;
class UFortProfileStatsRow;
class UImage;
class USocialUser;
class UWidget;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaStatsScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTabListWidget* StatsTabList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProfileStatsMainTile* WinsTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProfileStatsMainTile* SecondTierTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProfileStatsMainTile* ThirdTierTile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProfileStatsRow* KillsRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortProfileStatsRow* MatchesPlayedRow;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* LastUpdatedTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* PlayerName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* SeasonContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* AccountContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* MainStatsContainer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* PlatformButton;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UImage* Image_PlatformIcon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* LTM_Disclaimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool bWasLastQuerySuccessful;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SoloPlaylistNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> DuoPlaylistNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> SquadPlaylistNames;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> LTM_ExclusionPlaylistNames;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USocialUser* QueriedSocialUser;
    
public:
    UAthenaStatsScreenBase();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetPlatformButtonText(const FText& PlatformButtonText);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayName(FText InDisplayName);
    
    UFUNCTION(BlueprintCallable)
    void SetAccountIdToQueryFromString(const FString& InAccountId);
    
    UFUNCTION(BlueprintCallable)
    void OnTabSelected(FName TabName);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnQueryFinished(bool bWasSuccessful, bool bHasStatsToDisplay);
    
    UFUNCTION(BlueprintCallable)
    void DisplayQueriedUserPlatformProfile();
    
};

