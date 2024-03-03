#pragma once
#include "CoreMinimal.h"
#include "ConversationNodeHandle.h"
#include "ClientConversationOptionEntry.generated.h"

USTRUCT(BlueprintType)
struct COMMONDIALOGUERUNTIME_API FClientConversationOptionEntry {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText OptionText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsOptionAvailable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FConversationNodeHandle NodeReference;
    
    FClientConversationOptionEntry();
};

