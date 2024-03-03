#pragma once
#include "CoreMinimal.h"
#include "AthenaChallengeListEntryBase.h"
#include "AthenaChallengeListEntry_Challenge.generated.h"

class UAthenaChallengeProgressBar;
class UCommonRichTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UAthenaChallengeListEntry_Challenge : public UAthenaChallengeListEntryBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideProgressBar;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonRichTextBlock* RichText_ChallengeDesc;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengeProgressBar* ChallengeProgress_ObjectivesCompleted;
    
public:
    UAthenaChallengeListEntry_Challenge();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPartyAssistEnabledChanged(bool bIsPartyAssistEnabled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnChallengeInfoSet(bool bIsComplete, bool bIsLocked, bool bIsGroupChallenge, bool bCompact, bool HideRewards);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetChallengeWeight() const;
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_HandleIsTrackedChallengeChanged(bool bIsTrackedChallenge);
    
};

