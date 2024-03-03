#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ClientConversationMessagePayload.h"
#include "ConversationNodeHandle.h"
#include "ConversationParticipantComponent.generated.h"

class UConversationInstance;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class COMMONDIALOGUERUNTIME_API UConversationParticipantComponent : public UActorComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConversationInstance* Auth_CurrentConversation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UConversationInstance*> Auth_Conversations;
    
public:
    UConversationParticipantComponent();
    UFUNCTION(BlueprintCallable)
    FText GetParticipantDisplayName();
    
    UFUNCTION(BlueprintCallable, Reliable, Server)
    void DEBUG_ServerAdvanceConversation(FConversationNodeHandle PickedOption);
    
protected:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientUpdateConversation(const FClientConversationMessagePayload& Message);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientExecuteTaskAndSideEffects(FConversationNodeHandle Handle);
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConversationStarted();
    
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientConversationEnded();
    
};

