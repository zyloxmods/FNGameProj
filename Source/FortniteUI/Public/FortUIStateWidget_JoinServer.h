#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "EMatchmakingCompleteResult.h"
#include "EMatchmakingState.h"
#include "FortUIStateWidget_NUI.h"
#include "Templates/SubclassOf.h"
#include "FortUIStateWidget_JoinServer.generated.h"

class UCommonWidgetStack;
class UFortRejoinWindowBase;

UCLASS(Blueprintable, EditInlineNew)
class UFortUIStateWidget_JoinServer : public UFortUIStateWidget_NUI {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonWidgetStack* Stack_MainContent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDataTableRowHandle TutorialCompleteStatHandle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UFortRejoinWindowBase> RejoinWindowClass;
    
public:
    UFortUIStateWidget_JoinServer();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShowTutorialDialog();
    
private:
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingStateChange(TEnumAsByte<EMatchmakingState::Type> OldState, TEnumAsByte<EMatchmakingState::Type> NewState);
    
    UFUNCTION(BlueprintCallable)
    void HandleMatchmakingComplete(EMatchmakingCompleteResult MatchmakingResult);
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyTimeUpdated(int32 TimeRemaining);
    
    UFUNCTION(BlueprintCallable)
    void HandleLobbyDisconnected();
    
};

