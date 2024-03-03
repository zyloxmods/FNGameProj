#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "ConversationNodeHandle.generated.h"

USTRUCT(BlueprintType)
struct FConversationNodeHandle {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid NodeGUID;
    
    COMMONDIALOGUERUNTIME_API FConversationNodeHandle();
};

