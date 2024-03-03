#pragma once
#include "CoreMinimal.h"
#include "CommonActivatableWidget.h"
#include "ELeaderboardDisplayType.h"
#include "FortCompetitiveLeaderboardScreen.generated.h"

class UFortEventLeaderboardEntryData;
class UFortLeaderboardViewTab;

UCLASS(Blueprintable, EditInlineNew)
class UFortCompetitiveLeaderboardScreen : public UCommonActivatableWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float TimeDelayToShowDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UFortEventLeaderboardEntryData*> LeaderboardEntries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortEventLeaderboardEntryData* MyEntryData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UFortEventLeaderboardEntryData* EntryToShowDetails;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UFortLeaderboardViewTab* ActivatableContent_LeaderboardTab;
    
public:
    UFortCompetitiveLeaderboardScreen();
protected:
    UFUNCTION(BlueprintCallable)
    void SetEvent(const FString& EventId, const FString& EventWindowId);
    
    UFUNCTION(BlueprintCallable)
    void RequestNextPage();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardEntrySelected(const UFortEventLeaderboardEntryData* EntryData);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLeaderboardDisplayTypeChanged(ELeaderboardDisplayType NewDisplayType);
    
    UFUNCTION(BlueprintCallable)
    void HandleLeaderboardSetInView();
    
    UFUNCTION(BlueprintCallable)
    UFortEventLeaderboardEntryData* GetMyLeaderboardEntry();
    
};

