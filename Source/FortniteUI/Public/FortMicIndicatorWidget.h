#pragma once
#include "CoreMinimal.h"
#include "CommonUserWidget.h"
#include "GameFramework/OnlineReplStructs.h"
#include "FortMicIndicatorWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UFortMicIndicatorWidget : public UCommonUserWidget {
    GENERATED_BODY()
public:
    UFortMicIndicatorWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetPlayerUniqueId(const FUniqueNetIdRepl& InPlayerUniqueId);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerTalkingChanged(bool bIsTalking);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerMuted(bool bIsMuted);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPlayerMicAvailable(bool bIsTalking);
    
};

