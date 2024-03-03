#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "ConversationNode.generated.h"

class UConversationNode;

UCLASS(Abstract, Blueprintable, Const)
class COMMONDIALOGUERUNTIME_API UConversationNode : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString NodeName;
    
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* EvalWorldContextObj;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UConversationNode* ParentNode;
    
public:
    UConversationNode();
protected:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FLinearColor GetDebugParticipantColor(FGameplayTag ParticipantID) const;
    
};

