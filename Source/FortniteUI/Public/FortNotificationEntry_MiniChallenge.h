#pragma once
#include "CoreMinimal.h"
#include "FortNotificationEntry.h"
#include "FortNotificationEntry_MiniChallenge.generated.h"

class UAthenaMiniChallengeEntry;
class UFortQuestItem;
class UXpEarnedSubNotification;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNotificationEntry_MiniChallenge : public UFortNotificationEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortQuestItem> CompletedQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaMiniChallengeEntry* MiniChallenge;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UXpEarnedSubNotification* XpSubNotification;
    
public:
    UFortNotificationEntry_MiniChallenge();
    UFUNCTION(BlueprintCallable)
    void TryToUpdateXpCompWithQuestReward();
    
};

