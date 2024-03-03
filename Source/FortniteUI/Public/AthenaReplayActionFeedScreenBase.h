#pragma once
#include "CoreMinimal.h"
#include "EPlayEventType.h"
#include "FortActivatablePanel.h"
#include "AthenaReplayActionFeedScreenBase.generated.h"

class AFortPlayerState;
class UCommonButton;
class UCommonListView;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaReplayActionFeedScreenBase : public UFortActivatablePanel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonListView* ListView_Entries;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonButton* Button_Close;
    
public:
    UAthenaReplayActionFeedScreenBase();
private:
    UFUNCTION()
    void OnReplayEventsUpdated(EPlayEventType Type);
    
    UFUNCTION(BlueprintCallable)
    void HandlePlayerBecameRelevant(AFortPlayerState* FortPlayerState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void HandleCloseActionFeed();
    
};

