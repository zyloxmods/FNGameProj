#pragma once
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameplayTagContainer.h"
#include "ConversationNodeHandle.h"
#include "ConversationLibrary.generated.h"

class AActor;
class UConversationInstance;
class UConversationNode;

UCLASS(Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UConversationLibrary();
    UFUNCTION(BlueprintCallable)
    static UConversationInstance* StartConversation(FGameplayTag ConversationEntryTag, AActor* Instigator, FGameplayTag InstigatorTag, AActor* Target, FGameplayTag TargetTag);
    
    UFUNCTION(BlueprintCallable)
    static UConversationNode* GetConversationNode(const FConversationNodeHandle& NodeHandle);
    
};

