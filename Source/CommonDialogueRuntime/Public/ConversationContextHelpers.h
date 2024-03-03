#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "ClientConversationMessagePayload.h"
#include "ConversationContext.h"
#include "ConversationNodeHandle.h"
#include "ConversationContextHelpers.generated.h"

class AActor;
class UConversationInstance;
class UConversationParticipantComponent;

UCLASS(Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationContextHelpers : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConversationContextHelpers();
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void MakeConversationParticipant(const FConversationContext& Context, AActor* ParticipantActor, FGameplayTag ParticipantTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static FConversationNodeHandle GetCurrentConversationNodeHandle(const FConversationContext& Context);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static AActor* GetConversationParticipantActor(const FConversationContext& Context, FGameplayTag ParticipantTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static UConversationParticipantComponent* GetConversationParticipant(const FConversationContext& Context, FGameplayTag ParticipantTag);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure)
    static UConversationInstance* GetConversationInstance(const FConversationContext& Context);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static UConversationParticipantComponent* FindConversationComponent(AActor* Actor);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void DEBUG_ClientPrintConversation(const FConversationContext& Context, const FClientConversationMessagePayload& Message);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AdvanceConversationWithChoice(const FConversationContext& Context, const FGuid& ChoiceID);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    static void AdvanceConversation(const FConversationContext& Context);
    
};

