#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "EMatchmakingCompleteResult.h"
#include "FortQuestPlayButton.generated.h"

class UFortQuestItem;

UCLASS(Blueprintable, EditInlineNew)
class UFortQuestPlayButton : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UFortQuestItem* QuestItem;
    
    UFortQuestPlayButton();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnContentMissing();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandlePlayerStateChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMatchmakingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleMatchmakingComplete(EMatchmakingCompleteResult Result);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void HandleLobbyDisconnected();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanPlayQuest() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool CanNavigateToQuestObjective() const;
    
    UFUNCTION(BlueprintCallable)
    void AttemptToPlayQuest();
    
};

