#pragma once
#include "CoreMinimal.h"
#include "FortConversationSentence.h"
#include "FortRewardNotificationSubWidget.h"
#include "FortRewardConversationWidget.generated.h"

class UFortConversation;
class UTexture2D;

UCLASS(Blueprintable, EditInlineNew)
class UFortRewardConversationWidget : public UFortRewardNotificationSubWidget {
    GENERATED_BODY()
public:
    UFortRewardConversationWidget();
    UFUNCTION(BlueprintCallable)
    bool IsValidConversation(const UFortConversation* Conversation);
    
    UFUNCTION(BlueprintCallable)
    void GetDataFromSentence(const FFortConversationSentence& Sentence, FText& Text, UTexture2D*& TalkingHeadTexture);
    
};

