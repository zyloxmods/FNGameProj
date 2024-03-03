#pragma once
#include "CoreMinimal.h"
#include "FortChallengeSetStyle.h"
#include "FortNotificationEntry.h"
#include "FortNotificationEntry_Quest.generated.h"

class UBorder;
class UCommonTextBlock;
class UFortQuestItem;
class UXpEarnedSubNotification;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFortNotificationEntry_Quest : public UFortNotificationEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 GoalCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CurrentCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PreviousCount;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Header;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_Description;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UCommonTextBlock* Text_ObjectiveCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UBorder* Border_AssistedBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UXpEarnedSubNotification* XpSubNotification;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UFortQuestItem> WeakQuest;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ObjectiveName;
    
public:
    UFortNotificationEntry_Quest();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateQuestVisuals(const FFortChallengeSetStyle& DisplayStyle);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void UpdateDefaultObjectiveVisuals();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetAssistData(bool bWasAssisted, const FString& OtherPlayersName);
    
};

