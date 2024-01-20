#pragma once
#include "CoreMinimal.h"
#include "FortActivatablePanel.h"
#include "FortEventLeaderboardScreen.generated.h"

class UCommonButton;
class UFortEventLeaderboardEntryData;
class UListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortEventLeaderboardScreen : public UFortActivatablePanel {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDelayToShowDetails;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortEventLeaderboardEntryData*> LeaderboardEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortEventLeaderboardEntryData* EntryToShowDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortEventLeaderboardEntryData* MyEntryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ListView_LeaderboardEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_ViewLiveGames;
    
public:
    UFortEventLeaderboardScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void SetEvent(const FString& EventWindowId);
    
    UFUNCTION(BlueprintCallable)
    void RequestNextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardPageRequested();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardPageRequestComplete(int32 EntryCount);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardEntrySelected(const UFortEventLeaderboardEntryData* EntryData);
    
    UFUNCTION(BlueprintCallable)
    void HandleLeaderboardSetInView();
    
    UFUNCTION(BlueprintCallable)
    UFortEventLeaderboardEntryData* GetMyLeaderboardEntry();
    
};

