#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ClientConversationOptionEntry.h"
#include "ConversationContext.h"
#include "ConversationNodeWithLinks.h"
#include "EConversationRequirementResult.h"
#include "EConversationTaskResult.h"
#include "ConversationTaskNode.generated.h"

class UConversationSubNode;

UCLASS(Abstract, Blueprintable)
class COMMONDIALOGUERUNTIME_API UConversationTaskNode : public UConversationNodeWithLinks {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UConversationSubNode*> SubNodes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHasRequirements: 1;
    
    UConversationTaskNode();
protected:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EConversationRequirementResult IsRequirementSatisfied(const FConversationContext& Context) const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool GetNodeBodyColor(FLinearColor& BodyColor) const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    TArray<FClientConversationOptionEntry> GetChoiceList(const FConversationContext& Context) const;
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    EConversationTaskResult ExecuteTaskNode(const FConversationContext& Context) const;
    
};

