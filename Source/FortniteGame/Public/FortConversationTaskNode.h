#pragma once
#include "CoreMinimal.h"
#include "ConversationContext.h"
#include "ConversationTaskNode.h"
#include "FortConversationTaskNode.generated.h"

class AActor;
class UConversationParticipantComponent;

UCLASS(Blueprintable)
class FORTNITEGAME_API UFortConversationTaskNode : public UConversationTaskNode {
    GENERATED_BODY()
public:
    UFortConversationTaskNode();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UConversationParticipantComponent* GetParticipantComponentPlayer(const FConversationContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    UConversationParticipantComponent* GetParticipantComponentNPC(const FConversationContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    AActor* GetParticipantActorPlayer(const FConversationContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    AActor* GetParticipantActorNPC(const FConversationContext& Context) const;
    
};

