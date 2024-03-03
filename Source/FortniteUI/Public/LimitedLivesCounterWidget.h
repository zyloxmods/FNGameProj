#pragma once
#include "CoreMinimal.h"
#include "LTMWidgetBase.h"
#include "LimitedLivesCounterWidget.generated.h"

class AFortPlayerStateAthena;

UCLASS(Blueprintable, EditInlineNew, MinimalAPI)
class ULimitedLivesCounterWidget : public ULTMWidgetBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<AFortPlayerStateAthena> CurrentPlayerState;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxLives;
    
public:
    ULimitedLivesCounterWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void OnPlayerDied(AFortPlayerStateAthena* DeadPlayer);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnLivesCountUpdated(int32 NewCount);
    
};

