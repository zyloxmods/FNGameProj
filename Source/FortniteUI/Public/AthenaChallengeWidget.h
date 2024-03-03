#pragma once
#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "AthenaChallengeWidget.generated.h"

class UAthenaChallengeProgressBar;
class URichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeWidget : public UUserWidget {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText RewardTextFormat;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_ChallengeDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeProgressBar* ChallengeProgress_ObjectivesCompleted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichText_RewardDesc;
    
public:
    UAthenaChallengeWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSetState(bool bIsCompleted, bool bIsLocked, bool bIsPartyAssisted, bool bIsGroupChallenge);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnIsLastEntrySet(bool bIsLastEntry);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnIsInGameSet(bool bIsInGame);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnChallengeInfoSet();
    
};

