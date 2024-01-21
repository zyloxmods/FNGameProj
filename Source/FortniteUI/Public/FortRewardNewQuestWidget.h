#pragma once
#include "CoreMinimal.h"
#include "FortConversationSentence.h"
#include "FortRewardNotificationSubWidget.h"
#include "FortRewardNewQuestWidget.generated.h"

class UFortConversation;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UFortRewardNewQuestWidget : public UFortRewardNotificationSubWidget {
    GENERATED_BODY()
public:
    UFortRewardNewQuestWidget();
    UFUNCTION(BlueprintCallable)
    bool IsValidConversation(const UFortConversation* Conversation);
    
    UFUNCTION(BlueprintCallable)
    void GetDataFromSentence(const FFortConversationSentence& Sentence, FText& Text, UTexture2D*& TalkingHeadTexture);
    
};

