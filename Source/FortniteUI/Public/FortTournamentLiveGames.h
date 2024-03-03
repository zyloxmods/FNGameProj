#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "FortTournamentLiveGames.generated.h"

class UCommonButton;
class UFortTournamentLiveGameSessionData;
class UListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortTournamentLiveGames : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UFortTournamentLiveGameSessionData*> LiveSessions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortTournamentLiveGameSessionData* SelectedGame;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UListView* ListView_SessionEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_WatchGame;
    
public:
    UFortTournamentLiveGames();
protected:
    UFUNCTION(BlueprintCallable)
    void SetTournamentIds(const FString& InTournamentId, const FString& InEventWindowId);
    
    UFUNCTION(BlueprintCallable)
    void OnViewLiveGames();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyNoLiveGames();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void NotifyLoadingMoreGames(bool bIsLoading);
    
};

