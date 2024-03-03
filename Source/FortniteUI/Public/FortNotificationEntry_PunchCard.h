#pragma once
#include "CoreMinimal.h"
#include "FortNotificationEntry.h"
#include "FortNotificationEntry_PunchCard.generated.h"

class UAthenaChallengePunchCard;
class UFortQuestItem;
class UXpEarnedSubNotification;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNotificationEntry_PunchCard : public UFortNotificationEntry {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortQuestItem> CompletedQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UAthenaChallengePunchCard* PunchCard;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UXpEarnedSubNotification* XpSubNotification;
    
public:
    UFortNotificationEntry_PunchCard();
};

